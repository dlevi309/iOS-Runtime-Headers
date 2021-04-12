/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamStrokeAndBlend : TDreamProgramWrapperTwoInput {

	int sigmaUniform;
	double _sigma;

}

@property (assign,nonatomic) double sigma;              //@synthesize sigma=_sigma - In the implementation block
-(id)init;
-(double)sigma;
-(void)setUniforms;
-(void)setSigma:(double)arg1 ;
@end

