/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPFrameScoreFilter : NSObject {

	int _numFilterTabs;
	float* _scoreArray;
	float _distanceVariance;
	float _diffVariance;
	int _numOfScores;

}
-(id)initWithFilterTabs:(int)arg1 distanceVariance:(float)arg2 diffVariance:(float)arg3 ;
-(float)processFrameScore:(float)arg1 validScore:(BOOL)arg2 ;
-(void)dealloc;
@end

