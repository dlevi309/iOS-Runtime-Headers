/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLBuffer;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@class PyramidStorage, FigMetalContext;

@interface DenoiseRemixStage : NSObject {

	PyramidStorage* _pyr;
	PyramidStorage* _lapPyr;
	id<MTLBuffer> _uniforms[20];
	FigMetalContext* _metal;
	id<MTLBuffer> _uniformsAlpha[20];

}
-(int)setUniforms:(AmbnrConfiguration*)arg1 ;
-(id)initWithContext:(id)arg1 onlySingleImageDenoising:(BOOL)arg2 ;
-(int)setResourcesWithPyramid:(id)arg1 laplacianPyramid:(id)arg2 ;
-(int)run:(id)arg1 gainPixelBuffer:(CVBufferRef)arg2 ltmBuffers:(id)arg3 ;
-(int)computeLtmGainMap:(id)arg1 ltmBuffers:(id)arg2 luma:(id)arg3 chroma:(id)arg4 shader:(id)arg5 ;
-(int)runShader:(const id*)arg1 shader:(id)arg2 desc:(id)arg3 uniforms:(id)arg4 uniforms2:(id)arg5 ;
-(int)runLumaAlpha:(id)arg1 alpha:(id)arg2 output:(id)arg3 level:(int)arg4 config:(AmbnrConfiguration*)arg5 ;
-(BOOL)dumpIntermediateData:(id)arg1 counter:(int)arg2 ;
-(BOOL)dumpParamsToFile:(id)arg1 ;
-(BOOL)loadParamsFromFile:(id)arg1 ;
@end

