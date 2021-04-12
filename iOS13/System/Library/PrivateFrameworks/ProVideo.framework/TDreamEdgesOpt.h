/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamEdgesOpt : TDreamProgramWrapperTwoInput {

	float oneOverSize[2];
	int oneOverSizeUniform;
	int radioUniform;
	double _sigma;

}

@property (assign,nonatomic) double sigma;              //@synthesize sigma=_sigma - In the implementation block
-(id)init;
-(double)sigma;
-(void)setUniforms;
-(void)setOneOverSize:(const float*)arg1 ;
-(void)setSigma:(double)arg1 ;
@end

