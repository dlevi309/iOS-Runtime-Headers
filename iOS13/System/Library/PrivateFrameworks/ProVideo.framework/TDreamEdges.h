/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamEdges : TDreamProgramWrapperTwoInput {

	int passUniform;
	int radioUniform;
	int thresholdUniform;
	int preThresholdUniform;
	int modeUniform;
	int _mode;
	double _threshold;
	double _preThreshold;
	double _sigma;

}

@property (assign,nonatomic) double threshold;                 //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) double preThreshold;              //@synthesize preThreshold=_preThreshold - In the implementation block
@property (assign,nonatomic) double sigma;                     //@synthesize sigma=_sigma - In the implementation block
@property (assign,nonatomic) int mode;                         //@synthesize mode=_mode - In the implementation block
-(id)init;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(double)sigma;
-(void)setUniforms;
-(void)setSigma:(double)arg1 ;
-(void)setPreThreshold:(double)arg1 ;
-(double)preThreshold;
@end

