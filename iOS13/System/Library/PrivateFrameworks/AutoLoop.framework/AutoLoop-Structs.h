/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
*/

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_Au1;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	SCD_Struct_Au1 start;
	SCD_Struct_Au1 duration;
} SCD_Struct_Au4;

typedef struct _compressed_pair<CMTime *, std::__1::allocator<CMTime> > {
	/*function pointer*/void* __value_;
} compressed_pair<CMTime *, std::__1::allocator<CMTime> >;

typedef struct vector<CMTime, std::__1::allocator<CMTime> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<CMTime *, std::__1::allocator<CMTime> > __end_cap_;
} vector<CMTime, std::__1::allocator<CMTime> >;

typedef struct _compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > {
	/*function pointer*/void* __value_;
} compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> >;

typedef struct vector<FloatPoint, std::__1::allocator<FloatPoint> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > __end_cap_;
} vector<FloatPoint, std::__1::allocator<FloatPoint> >;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CGImageDestination* CGImageDestinationRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGImage* CGImageRef;

typedef struct _compressed_pair<SP_FrameInfo *, std::__1::allocator<SP_FrameInfo> > {
	/*function pointer*/void* __value_;
} compressed_pair<SP_FrameInfo *, std::__1::allocator<SP_FrameInfo> >;

typedef struct vector<SP_FrameInfo, std::__1::allocator<SP_FrameInfo> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<SP_FrameInfo *, std::__1::allocator<SP_FrameInfo> > __end_cap_;
} vector<SP_FrameInfo, std::__1::allocator<SP_FrameInfo> >;

typedef struct {
	float field1[9];
	SCD_Struct_Au1 field2;
} SCD_Struct_St16;

