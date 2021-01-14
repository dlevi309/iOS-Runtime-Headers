/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_HM2;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_HM3;

typedef struct {
	SCD_Struct_HM3 start;
	SCD_Struct_HM3 duration;
} SCD_Struct_HM4;

typedef struct CGDataProvider* CGDataProviderRef;

typedef struct __IOHIDServiceClient* IOHIDServiceClientRef;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct __CFArray* CFArrayRef;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef const struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct CGContext* CGContextRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct __CTFont* CTFontRef;

typedef struct CGVector {
	double dx;
	double dy;
} CGVector;

typedef struct OpaqueVTCompressionSession* OpaqueVTCompressionSessionRef;

typedef struct {
	int width;
	int height;
} SCD_Struct_HM19;

typedef struct HMIVideoEncoderDataRate {
	long long bytes;
	long long seconds;
} HMIVideoEncoderDataRate;

typedef struct shared_ptr<homeai::clustering::GreedyClusterer> {
	GreedyClusterer __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<homeai::clustering::GreedyClusterer>;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct OpaqueVTDecompressionSession* OpaqueVTDecompressionSessionRef;

typedef struct opaqueCMBufferQueue* opaqueCMBufferQueueRef;

typedef struct CGImage* CGImageRef;

