#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/gpio.h>
#include <linux/err.h>
#include <linux/device.h>
#include <linux/delay.h>
#include <linux/of_gpio.h>
#include <linux/clk.h>
#include <linux/rfkill.h>
#include <linux/regulator/consumer.h>
#include <linux/platform_device.h>
#include <linux/sunxi-gpio.h>
#include "sunxi-rfkill.h"

static struct sunxi_bt_platdata *bt_data;

void sunxi_bluetooth_set_power(bool on_off)
{
	if (!bt_data)
		return;

	if (!on_off && gpio_is_valid(bt_data->gpio_bt_rst))
		gpio_set_value(bt_data->gpio_bt_rst, 0);
	else if (on_off && gpio_is_valid(bt_data->gpio_bt_rst)) {
		gpio_set_value(bt_data->gpio_bt_rst, 1);
		mdelay(10);
	}

	bt_data->power_state = on_off;

	return;
}
EXPORT_SYMBOL_GPL(sunxi_bluetooth_set_power);

static int sunxi_bt_on(struct sunxi_bt_platdata *data, bool on_off)
{
	struct platform_device *pdev = data->pdev;
	struct device *dev = &pdev->dev;
	int ret = 0;
	int i = 0;

	if (!on_off && gpio_is_valid(data->gpio_bt_rst))
		gpio_set_value(data->gpio_bt_rst, 0);
	for (i = 0; i < (data->power_num); i++) {
		if (data->bt_power_name[i]) {
			data->bt_power[i] =
			    regulator_get(dev, data->bt_power_name[i]);
			if (!IS_ERR(data->bt_power[i])) {
				if (on_off) {
					ret =
					    regulator_enable(data->bt_power[i]);
					if (ret < 0) {
						dev_err(dev,
							"regulator bt_power enable failed\n");
						regulator_put(data->bt_power
							      [i]);
						return ret;
					}

					ret =
					    regulator_get_voltage(data->bt_power
								  [i]);
					if (ret < 0) {
						dev_err(dev,
							"regulator bt_power get voltage failed\n");
						regulator_put(data->bt_power
							      [i]);
						return ret;
					}
					dev_info(dev,
						 "current check wlan bt_power voltage: %d\n",
						 ret);
					if (ret < data->bt_power_voltage) {
						ret =
						    regulator_set_voltage(data->
									  bt_power
									  [i],
									  data->
									  bt_power_voltage,
									  data->
									  bt_power_voltage);
						dev_info(dev,
							 "set wlan bt_power voltage: %d\n",
							 data->
							 bt_power_voltage);
					}
				} else {
					ret =
					    regulator_disable(data->bt_power
							      [i]);
					if (ret < 0) {
						dev_err(dev,
							"regulator bt_power disable failed\n");
						regulator_put(data->bt_power
							      [i]);
						return ret;
					}
				}
				regulator_put(data->bt_power[i]);
			}
		}
	}

	if (data->io_regulator_name) {
		data->io_regulator =
		    regulator_get(dev, data->io_regulator_name);
		if (!IS_ERR(data->io_regulator)) {
			if (on_off) {
				ret = regulator_enable(data->io_regulator);
				if (ret < 0) {
					dev_err(dev,
						"regulator io_regulator enable failed\n");
					regulator_put(data->io_regulator);
					return ret;
				}

				ret = regulator_get_voltage(data->io_regulator);
				if (ret < 0) {
					dev_err(dev,
						"regulator io_regulator get voltage failed\n");
					regulator_put(data->io_regulator);
					return ret;
				}

				dev_info(dev,
					 "current check bt io regulator voltage: %d\n",
					 ret);
				if (ret < data->bt_io_voltage) {
					ret =
					    regulator_set_voltage(data->
								  io_regulator,
								  data->
								  bt_io_voltage,
								  data->
								  bt_io_voltage);
					dev_info(dev,
						 "set bt io regulator voltage: %d\n",
						 data->bt_io_voltage);
				}

			} else {
				ret = regulator_disable(data->io_regulator);
				if (ret < 0) {
					dev_err(dev,
						"regulator io_regulator disable failed\n");
					regulator_put(data->io_regulator);
					return ret;
				}
			}
			regulator_put(data->io_regulator);
		}
	}

	if (on_off && gpio_is_valid(data->gpio_bt_rst)) {
		mdelay(10);
		gpio_set_value(data->gpio_bt_rst, 1);
	}
	data->power_state = on_off;

	return 0;
}

static int sunxi_bt_set_block(void *data, bool blocked)
{
	struct sunxi_bt_platdata *platdata = data;
	struct platform_device *pdev = platdata->pdev;
	int ret;

	if (blocked != platdata->power_state) {
		dev_warn(&pdev->dev, "block state already is %d\n", blocked);
		return 0;
	}

	dev_info(&pdev->dev, "set block: %d\n", blocked);
	ret = sunxi_bt_on(platdata, !blocked);
	if (ret) {
		dev_err(&pdev->dev, "set block failed\n");
		return ret;
	}
	sunxi_wl_chipen_set(1, !blocked);

	return 0;
}

static const struct rfkill_ops sunxi_bt_rfkill_ops = {
	.set_block = sunxi_bt_set_block,
};

static int sunxi_bt_probe(struct platform_device *pdev)
{
	struct pinctrl *pinctrl;
	struct device_node *np = pdev->dev.of_node;
	struct device *dev = &pdev->dev;
	struct sunxi_bt_platdata *data;
	struct gpio_config config;
	const char *power, *io_regulator, *clocks;
	int ret = 0, i = 0, j = 0;
	u32 val;
	char bt_name_buf[64] = { 0 }, s[64] = {
	0};

	data = devm_kzalloc(dev, sizeof(*data), GFP_KERNEL);
	if (!dev)
		return -ENOMEM;

	data->pdev = pdev;
	data->power_num = -1;
	if (!of_property_read_u32(np, "bt_power_num", &val)) {
		switch (val) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			data->power_num = val;
			break;
		default:
			dev_err(dev, "unsupported bt_power_num (%u)\n", val);
			return -EINVAL;
		}
	}
	dev_info(dev, "bt_power_num (%u)\n", val);

	data->bt_power_voltage = -1;
	if (!of_property_read_u32(np, "bt_power_voltage", &val)) {
		data->bt_power_voltage = val;
		dev_err(dev, "bt power voltage (%u)\n", val);
	}

	data->bt_io_voltage = -1;
	if (!of_property_read_u32(np, "bt_io_voltage", &val)) {
		data->bt_io_voltage = val;
		dev_err(dev, "bt io voltage (%u)\n", val);
	}

	data->bt_power_name =
	    devm_kzalloc(dev, (data->power_num) * sizeof(char *), GFP_KERNEL);
	for (i = 0; i < (data->power_num); i++) {
		sprintf(s, "bt_power%d", i + 1);
		strcpy(bt_name_buf, s);
		if (of_property_read_string(np, bt_name_buf, &power)) {
			dev_warn(dev, "Missing bt_power.\n");
		} else {
			data->bt_power_name[i] =
			    devm_kzalloc(dev, 64, GFP_KERNEL);
			if (!data->bt_power_name[i]) {
				for (j = 0; j < i; j++)
					devm_kfree(dev, data->bt_power_name[j]);

				devm_kfree(dev, data->bt_power_name);
				return -ENOMEM;
			} else
				strcpy(data->bt_power_name[i], power);
		}
		dev_info(dev, "bt_power_name (%s)\n", data->bt_power_name[i]);
	}

	if (of_property_read_string(np, "bt_io_regulator", &io_regulator)) {
		dev_warn(dev, "Missing bt_io_regulator.\n");
	} else {
		data->io_regulator_name = devm_kzalloc(dev, 64, GFP_KERNEL);
		if (!data->io_regulator_name) {
			ret = -ENOMEM;
			goto end;
		} else
			strcpy(data->io_regulator_name, io_regulator);
	}
	dev_info(dev, "io_regulator_name (%s)\n", data->io_regulator_name);

	/* request device pinctrl, set as default state */
	pinctrl = devm_pinctrl_get_select_default(&pdev->dev);
	if (IS_ERR_OR_NULL(pinctrl)) {
		dev_err(dev, "request pincrtl handle for device [%s] failed\n",
			dev_name(&pdev->dev));
	}

	data->gpio_bt_rst =
	    of_get_named_gpio_flags(np, "bt_rst_n", 0,
				    (enum of_gpio_flags *)&config);
	if (!gpio_is_valid(data->gpio_bt_rst)) {
		dev_err(dev, "get gpio bt_rst failed\n");
	} else {
		dev_info(dev,
			 "bt_rst gpio=%d  mul-sel=%d  pull=%d  drv_level=%d  data=%d\n",
			 config.gpio, config.mul_sel, config.pull,
			 config.drv_level, config.data);

		ret = devm_gpio_request(dev, data->gpio_bt_rst, "bt_rst");
		if (ret < 0) {
			dev_err(dev, "can't request bt_rst gpio %d\n",
				data->gpio_bt_rst);
			goto end;
		}

		ret = gpio_direction_output(data->gpio_bt_rst, 0);
		if (ret < 0) {
			dev_err(dev,
				"can't request output direction bt_rst gpio %d\n",
				data->gpio_bt_rst);
			goto end;
		}
	}

	if (of_property_read_string(np, "clocks", &clocks)) {
		dev_warn(dev, "Missing clocks.\n");
	} else {
		data->clk_name = devm_kzalloc(dev, 64, GFP_KERNEL);
		if (!data->clk_name) {
			ret = -ENOMEM;
			goto end;
		} else
			strcpy(data->clk_name, clocks);
	}
	dev_info(dev, "clk_name (%s)\n", data->clk_name);

	data->lpo = devm_clk_get(dev, data->clk_name);
	if (IS_ERR_OR_NULL(data->lpo)) {
		dev_warn(dev, "clk not config\n");
	} else {
		ret = clk_prepare_enable(data->lpo);
		if (ret < 0)
			dev_warn(dev, "can't enable clk\n");
	}

	data->rfkill = rfkill_alloc("sunxi-bt", dev, RFKILL_TYPE_BLUETOOTH,
				    &sunxi_bt_rfkill_ops, data);
	if (!data->rfkill) {
		for (i = 0; i < (data->power_num); i++)
			devm_kfree(dev, data->bt_power_name[i]);
		devm_kfree(dev, data->bt_power_name);
		ret = -ENOMEM;
		goto failed_alloc;
	}

	rfkill_set_states(data->rfkill, true, false);

	ret = rfkill_register(data->rfkill);
	if (ret) {
		for (i = 0; i < (data->power_num); i++)
			devm_kfree(dev, data->bt_power_name[i]);
		devm_kfree(dev, data->bt_power_name);
		goto fail_rfkill;
	}
end:
	if (ret != 0) {
		for (i = 0; i < (data->power_num); i++)
			devm_kfree(dev, data->bt_power_name[i]);
		devm_kfree(dev, data->bt_power_name);
		return ret;
	}
	data->bt_power =
	    devm_kzalloc(dev, (data->power_num) * sizeof(struct regulator *),
			 GFP_KERNEL);
	platform_set_drvdata(pdev, data);

	data->power_state = 0;
	bt_data = data;
	return 0;

fail_rfkill:
	if (data->rfkill)
		rfkill_destroy(data->rfkill);
failed_alloc:
	if (!IS_ERR_OR_NULL(data->lpo))
		clk_disable_unprepare(data->lpo);
	return ret;
}

static int sunxi_bt_remove(struct platform_device *pdev)
{
	struct sunxi_bt_platdata *data = platform_get_drvdata(pdev);
	struct rfkill *rfk = data->rfkill;
	int i = 0;

	bt_data = NULL;
	devm_kfree(&pdev->dev, data->bt_power);
	for (i = 0; i < (data->power_num); i++)
		devm_kfree(&pdev->dev, data->bt_power_name[i]);
	devm_kfree(&pdev->dev, data->bt_power_name);

	platform_set_drvdata(pdev, NULL);

	if (rfk) {
		rfkill_unregister(rfk);
		rfkill_destroy(rfk);
	}

	if (!IS_ERR_OR_NULL(data->lpo))
		clk_disable_unprepare(data->lpo);

	return 0;
}

static const struct of_device_id sunxi_bt_ids[] = {
	{.compatible = "allwinner,sunxi-bt"},
	{ /* Sentinel */ }
};

static struct platform_driver sunxi_bt_driver = {
	.probe = sunxi_bt_probe,
	.remove = sunxi_bt_remove,
	.driver = {
		   .owner = THIS_MODULE,
		   .name = "sunxi-bt",
		   .of_match_table = sunxi_bt_ids,
		   },
};

module_platform_driver(sunxi_bt_driver);

MODULE_DESCRIPTION("sunxi bluetooth driver");
MODULE_LICENSE("GPL");
