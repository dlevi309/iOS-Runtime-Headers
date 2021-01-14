/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamMaskBlend : TDreamProgramWrapperTwoInput {

	int filterThirdTextureCoordinateAttribute;
	int filterInputThirdTextureUniform;

}
-(void)initializeAttributes;
-(id)initWithFragmentShaderFromString:(id)arg1 ;
-(void)renderTo:(unsigned)arg1 from:(unsigned)arg2 andFrom:(unsigned)arg3 andFrom:(unsigned)arg4 ;
-(id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2 ;
@end

