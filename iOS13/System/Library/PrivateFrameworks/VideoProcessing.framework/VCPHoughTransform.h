/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPHoughTransform : NSObject {

	float* _edgeMap;
	int _mapWidth;
	int _mapHeight;
	int* _accumulator;
	int _accWidth;
	int _accHeight;
	int _accHalfHeight;
	float _angleStep;
	BOOL _verbose;

}
-(void)dealloc;
-(void)Transform;
-(id)initWithEdgeMap:(float*)arg1 mapWidth:(int)arg2 mapHeight:(int)arg3 angleStep:(float)arg4 ;
-(int)DetectLinesWithThreshold:(int)arg1 output:(id)arg2 ;
@end

