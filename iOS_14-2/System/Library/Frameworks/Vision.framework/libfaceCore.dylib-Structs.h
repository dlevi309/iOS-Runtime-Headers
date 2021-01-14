/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/libfaceCore.dylib
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	CGPoint center;
	CGRect bounds;
} SCD_Struct_Fa3;

typedef struct _compressed_pair<apple::vision::libraries::facecore::FaceCoreAPI *, std::__1::default_delete<apple::vision::libraries::facecore::FaceCoreAPI> > {
	FaceCoreAPI __value_;
} compressed_pair<apple::vision::libraries::facecore::FaceCoreAPI *, std::__1::default_delete<apple::vision::libraries::facecore::FaceCoreAPI> >;

typedef struct unique_ptr<apple::vision::libraries::facecore::FaceCoreAPI, std::__1::default_delete<apple::vision::libraries::facecore::FaceCoreAPI> > {
	compressed_pair<apple::vision::libraries::facecore::FaceCoreAPI *, std::__1::default_delete<apple::vision::libraries::facecore::FaceCoreAPI> > __ptr_;
} unique_ptr<apple::vision::libraries::facecore::FaceCoreAPI, std::__1::default_delete<apple::vision::libraries::facecore::FaceCoreAPI> >;

typedef struct CGImage* CGImageRef;

typedef struct __CVBuffer* CVBufferRef;

