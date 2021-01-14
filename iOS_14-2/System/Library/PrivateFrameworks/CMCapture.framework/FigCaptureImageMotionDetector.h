/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface FigCaptureImageMotionDetector : NSObject {

	int _width;
	int _height;
	int* _intRowSum;
	int* _intColSum;
	SCD_Struct_Fi135* _imgProj;
	double* _tmpSum1;
	double* _tmpSum2;
	double* _corrArray;
	int _rowSumLength;
	int _rowSumCapacity;
	int _colSumLength;
	int _colSumCapacity;
	int _processedBufferCount;
	CGRect _sumROI;
	float _stationaryThreshold;
	int _maximumSearchRange;
	SCD_Struct_Fi136 _motionStatistics;

}

@property (nonatomic,readonly) SCD_Struct_Fi119 motionStatistics;              //@synthesize motionStatistics=_motionStatistics - In the implementation block
@property (assign,nonatomic) float stationaryThreshold;                        //@synthesize stationaryThreshold=_stationaryThreshold - In the implementation block
@property (nonatomic,readonly) int maximumSearchRange;                         //@synthesize maximumSearchRange=_maximumSearchRange - In the implementation block
-(id)init;
-(void)setStationaryThreshold:(float)arg1 ;
-(int)setRoi:(CGRect)arg1 actualROI:(CGRect*)arg2 ;
-(int)setCentralROIAndGetRect:(CGRect*)arg1 ;
-(int)processPixelBuffer:(CVBufferRef)arg1 ;
-(SCD_Struct_Fi119)motionStatistics;
-(void)resetProcessingState;
-(int)_computeStatistics;
-(id)initWithWidth:(int)arg1 height:(int)arg2 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 maximumSearchRange:(int)arg3 frameRingSize:(int)arg4 ;
-(int)_allocateArrays:(int)arg1 height:(int)arg2 frameRingSize:(int)arg3 ;
-(void)_freeAllocatedArrays;
-(int)processPixelBuffer:(CVBufferRef)arg1 metadataDictionary:(id)arg2 ;
-(float)stationaryThreshold;
-(int)maximumSearchRange;
-(void)dealloc;
@end

