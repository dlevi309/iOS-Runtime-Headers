/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

