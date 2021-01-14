/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol MTLComputePipelineState;
#import <CMCapture/CMCapture-Structs.h>
@class FigMetalContext;

@interface FigLearnedMattingMetalStage : NSObject {

	FigMetalContext* _metalContext;
	id<MTLComputePipelineState> _createTileKernel;
	id<MTLComputePipelineState> _pasteTileKernel;
	id<MTLComputePipelineState> _copyTextureKernel;
	id<MTLComputePipelineState> _clearTextureKernel;
	CVMetalTextureCacheRef _textureCache;

}
-(id)init;
-(int)clearBuffer:(CVBufferRef)arg1 ;
-(int)_compileShaders;
-(id)initWithMetalContext:(id)arg1 ;
-(id)_textureFromPixelBuffer:(CVBufferRef)arg1 usage:(unsigned long long)arg2 ;
-(id)_runKernel:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 gridSize:(SCD_Struct_Fi45)arg4 setParamsBlock:(/*^block*/id)arg5 ;
-(int)createTileFrom:(CVBufferRef)arg1 to:(CVBufferRef)arg2 withStart:(id*)arg3 ;
-(int)createTileFrom:(CVBufferRef)arg1 to:(CVBufferRef)arg2 withStart:(id*)arg3 ;
-(int)pasteTileFrom:(CVBufferRef)arg1 to:(CVBufferRef)arg2 ;
-(int)copyBufferFrom:(CVBufferRef)arg1 to:(CVBufferRef)arg2 outCommandBuffer:(id*)arg3 ;
-(void)finishProcessing;
-(void)dealloc;
@end

