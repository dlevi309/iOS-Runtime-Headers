/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface FigCaptureImageMotionDetector : NSObject {

	int _width;
	int _height;
	int* _intRowSum;
	int* _intColSum;
	SCD_Struct_Fi118* _imgProj;
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
	SCD_Struct_Fi119 _motionStatistics;

}

@property (nonatomic,readonly) SCD_Struct_Fi120 motionStatistics;              //@synthesize motionStatistics=_motionStatistics - In the implementation block
@property (assign,nonatomic) float stationaryThreshold;                        //@synthesize stationaryThreshold=_stationaryThreshold - In the implementation block
@property (nonatomic,readonly) int maximumSearchRange;                         //@synthesize maximumSearchRange=_maximumSearchRange - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithWidth:(int)arg1 height:(int)arg2 ;
-(void)setStationaryThreshold:(float)arg1 ;
-(int)setRoi:(CGRect)arg1 actualROI:(CGRect*)arg2 ;
-(int)setCentralROIAndGetRect:(CGRect*)arg1 ;
-(int)processPixelBuffer:(CVBufferRef)arg1 ;
-(SCD_Struct_Fi120)motionStatistics;
-(void)resetProcessingState;
-(id)initWithWidth:(int)arg1 height:(int)arg2 maximumSearchRange:(int)arg3 frameRingSize:(int)arg4 ;
-(int)_allocateArrays:(int)arg1 height:(int)arg2 frameRingSize:(int)arg3 ;
-(int)_computeStatistics;
-(int)processPixelBuffer:(CVBufferRef)arg1 metadataDictionary:(id)arg2 ;
-(void)_freeAllocatedArrays;
-(float)stationaryThreshold;
-(int)maximumSearchRange;
@end

