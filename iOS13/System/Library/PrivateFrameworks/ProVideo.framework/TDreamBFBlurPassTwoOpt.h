/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamBFBlurPassTwoOpt : TDreamProgramWrapperTwoInput {

	float oneOverSize[2];
	int oneOverSizeUniform;
	double _sigma;
	double _sigmaColor;

}

@property (assign,nonatomic) double sigma;                   //@synthesize sigma=_sigma - In the implementation block
@property (assign,nonatomic) double sigmaColor;              //@synthesize sigmaColor=_sigmaColor - In the implementation block
-(id)init;
-(double)sigma;
-(void)setUniforms;
-(void)setOneOverSize:(const float*)arg1 ;
-(void)setSigma:(double)arg1 ;
-(double)sigmaColor;
-(void)setSigmaColor:(double)arg1 ;
@end

