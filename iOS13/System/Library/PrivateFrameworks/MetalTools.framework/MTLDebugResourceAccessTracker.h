/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


#import <MetalTools/MetalTools-Structs.h>
@interface MTLDebugResourceAccessTracker : NSObject {

	unsigned _accessedByGPUFrameCount;
	unsigned _accessedByCPUFrameCount;
	unsigned _prevFrameNumGPUAccessed;
	unsigned _prevFrameNumCPUAccessed;
	unsigned _firstAccessFrameByCPU;
	unsigned _stateMask;

}
+(void)recordResourceAccessesForColorAttachmentsWithDescriptor:(id)arg1 renderPipelineState:(id)arg2 forEndEncoding:(BOOL)arg3 deferredAttachments:(ResourceTrackingDeferredAttachments*)arg4 ;
+(void)recordResourceAccessesForDepthAttachmentWithDescriptor:(id)arg1 forEndEncoding:(BOOL)arg2 deferredAttachments:(ResourceTrackingDeferredAttachments*)arg3 ;
+(void)recordResourceAccessesForStencilAttachmentWithDescriptor:(id)arg1 forEndEncoding:(BOOL)arg2 deferredAttachments:(ResourceTrackingDeferredAttachments*)arg3 ;
+(void)recordResourceAccessesForAttachment:(const MTLRenderPassAttachmentDescriptorPrivate*)arg1 withStoreAction:(unsigned long long)arg2 ;
+(void)_recordResourceAccessesForRenderTargetTexture:(id)arg1 ;
+(void)resourceTrackingRecordAccessesToArguments:(id)arg1 bufferFuncArgsPtr:(SCD_Struct_MT2*)arg2 textureFuncArgsPtr:(SCD_Struct_MT2*)arg3 buffersBoundForWrite:(id)arg4 texturesBoundForWrite:(id)arg5 ;
+(BOOL)hasValidViewports:(SCD_Struct_MT3*)arg1 viewportCount:(unsigned)arg2 scissorRects:(SCD_Struct_MT4*)arg3 scissorRectCount:(unsigned)arg4 ;
+(void)recordRenderTargetAccessesForEndEncoding:(BOOL)arg1 descriptor:(id)arg2 renderPipelineState:(id)arg3 depthStencilState:(id)arg4 deferredAttachments:(ResourceTrackingDeferredAttachments*)arg5 ;
+(void)processDeferredAttachments:(ResourceTrackingDeferredAttachments*)arg1 ;
-(id)init;
-(void)reset;
-(void)accessedBy:(int)arg1 frame:(unsigned)arg2 accessTypes:(unsigned)arg3 ;
-(unsigned)conclude;
@end

