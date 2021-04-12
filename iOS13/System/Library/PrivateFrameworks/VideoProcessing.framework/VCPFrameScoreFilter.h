/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPFrameScoreFilter : NSObject {

	int _numFilterTabs;
	float* _scoreArray;
	float _distanceVariance;
	float _diffVariance;
	int _numOfScores;

}
-(void)dealloc;
-(id)initWithFilterTabs:(int)arg1 distanceVariance:(float)arg2 diffVariance:(float)arg3 ;
-(float)processFrameScore:(float)arg1 validScore:(BOOL)arg2 ;
@end

