/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamGaussBlurExpressOpt9 : TDreamProgramWrapper {

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

