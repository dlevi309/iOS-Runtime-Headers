/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)threshold;
-(int)mode;
-(id)init;
-(double)sigma;
-(void)setMode:(int)arg1 ;
-(void)setThreshold:(double)arg1 ;
-(void)setUniforms;
-(void)setSigma:(double)arg1 ;
-(void)setPreThreshold:(double)arg1 ;
-(double)preThreshold;
@end

