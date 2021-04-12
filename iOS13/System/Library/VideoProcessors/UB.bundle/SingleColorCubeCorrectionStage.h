/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLTexture;
@class ColorCubeCorrectionShaders, FigMetalContext;

@interface SingleColorCubeCorrectionStage : NSObject {

	id<MTLTexture> _colorCubeTexture;
	ColorCubeCorrectionShaders* _shaders;
	FigMetalContext* _metal;

}
+(int)prewarmShaders:(id)arg1 ;
-(id)init:(id)arg1 cubeSize:(unsigned)arg2 data:(const char*)arg3 ;
-(int)runOnLuma:(id)arg1 andChroma:(id)arg2 outChroma:(id)arg3 ;
@end

