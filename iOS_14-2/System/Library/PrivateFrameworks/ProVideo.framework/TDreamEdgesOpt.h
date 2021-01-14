/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

