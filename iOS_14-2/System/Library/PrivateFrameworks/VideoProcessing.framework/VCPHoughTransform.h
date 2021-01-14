/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)Transform;
-(id)initWithEdgeMap:(float*)arg1 mapWidth:(int)arg2 mapHeight:(int)arg3 angleStep:(float)arg4 ;
-(void)dealloc;
-(int)DetectLinesWithThreshold:(int)arg1 output:(id)arg2 ;
@end

