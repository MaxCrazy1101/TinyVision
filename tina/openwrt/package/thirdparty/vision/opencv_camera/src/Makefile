INCLUDES += -I$(STAGING_DIR)/usr/include
INCLUDES += -I$(STAGING_DIR)/usr/include/opencv4
INCLUDES += -I$(STAGING_DIR)/usr/include/libawnn
LIB_PATH :=   $(STAGING_DIR)/usr/lib
LIBS     += -L$(LIB_PATH)

BIN := opencv_camera

SRCS := ${wildcard *.c}
SRCS += ${wildcard *.cpp}
OBJS := $(addsuffix .o, $(basename $(SRCS)))

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<

.c:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@ -lm

.cpp.o:
	$(CXX) $(CFLAGS) $(INCLUDES) -c $<

.cpp:
	$(CXX) $(CFLAGS) $(INCLUDES) $< -o $@ -lm

all: $(BIN) 

$(BIN): $(OBJS)
	$(CXX) $(CFLAGS) $(LFLAGS) $(EXTRALFLAGS) $(OBJS) $(LIBS) -g -o $@  \
		-lopencv_objdetect -lopencv_calib3d -lopencv_features2d -lopencv_highgui -lopencv_videoio -lopencv_imgcodecs \
		-lopencv_video -lopencv_photo -lopencv_ml -lopencv_imgproc -lopencv_flann -lopencv_core

clean:
	rm -rf *.o
	rm -rf $(BIN)
	rm -rf *~