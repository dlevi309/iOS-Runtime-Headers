/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLTexture, MTLBuffer;
#import <UB/UB-Structs.h>
@class PyramidStorage, FigMetalContext;

@interface DenoiseRemixStage : NSObject {

	PyramidStorage* _pyr;
	PyramidStorage* _noiseMapPyramid;
	PyramidStorage* _sharpeningPyramid;
	id<MTLTexture> _localGainMapTex;
	id<MTLBuffer> _uniforms[20];
	id<MTLBuffer> _roiTxUniform;
	FigMetalContext* _metal;
	DenoiseRemixStageOptions _options;

}
+(int)prewarmShaders:(id)arg1 tuningParameters:(id)arg2 plistEntryName:(id)arg3 ;
+(void)prewarmRenderers:(id)arg1 ;
+(void)prewarmOneShader:(id)arg1 entryToParse:(id)arg2 denoisingOptions:(DenoiseRemixStageOptions*)arg3 ;
-(id)initWithContext:(id)arg1 options:(const DenoiseRemixStageOptions*)arg2 ;
-(int)setUniforms:(AmbnrConfiguration*)arg1 ;
-(int)setResourcesWithPyramid:(id)arg1 noiseMapPyramid:(id)arg2 sharpeningPyramid:(id)arg3 localGainMapTex:(id)arg4 ;
-(int)run:(id)arg1 skinMask:(id)arg2 skinMaskExtent:(CGRect)arg3 ;
-(int)runShader:(const id*)arg1 shader:(id)arg2 desc:(id)arg3 uniforms:(id)arg4 uniforms2:(id)arg5 uniforms3:(id)arg6 ;
-(BOOL)dumpIntermediateData:(id)arg1 counter:(int)arg2 ;
-(BOOL)dumpParamsToFile:(id)arg1 ;
-(BOOL)loadParamsFromFile:(id)arg1 ;
@end

