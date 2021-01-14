/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamGaussBlurExpressPassTwoOpt9 : TDreamProgramWrapper {

	float kernel[3];
	int kernelUniform;
	float offsets[3];
	int offsetsUniform;

}
-(id)init;
-(void)setOffsets:(const double*)arg1 ;
-(void)setUniforms;
-(void)setKernel:(const double*)arg1 ;
@end

