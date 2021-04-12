/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol MTLCommandQueue, MTLCommandBuffer, MTLRenderCommandEncoder, MTLComputeCommandEncoder, MTLTexture;
#import <PencilKit/PencilKit-Structs.h>
@class NSMutableArray;

@interface PKMetalRenderState : NSObject {

	NSMutableArray* _commandBuffers;
	BOOL _liveRendering;
	BOOL _waitUntilCompletedOnCommit;
	BOOL _msaaRendering;
	BOOL _renderOnPaper;
	BOOL _needRenderMask;
	id<MTLCommandQueue> _commandQueue;
	id<MTLCommandBuffer> _commandBuffer;
	id<MTLCommandBuffer> _computeCommandBuffer;
	id<MTLCommandBuffer> _maskCommandBuffer;
	id<MTLRenderCommandEncoder> _renderEncoder;
	id<MTLComputeCommandEncoder> _computeEncoder;
	id<MTLRenderCommandEncoder> _maskRenderEncoder;
	unsigned long long _vertexEncodeCount;
	id<MTLTexture> _destinationTexture;
	unsigned long long _destinationColorAttachmentIndex;
	SCD_Struct_PK17 _scissorRect;

}

@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;                              //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,readonly) id<MTLCommandBuffer> commandBuffer;                            //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLCommandBuffer> computeCommandBuffer;                     //@synthesize computeCommandBuffer=_computeCommandBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLCommandBuffer> maskCommandBuffer;                        //@synthesize maskCommandBuffer=_maskCommandBuffer - In the implementation block
@property (nonatomic,retain) id<MTLRenderCommandEncoder> renderEncoder;                       //@synthesize renderEncoder=_renderEncoder - In the implementation block
@property (nonatomic,retain) id<MTLComputeCommandEncoder> computeEncoder;                     //@synthesize computeEncoder=_computeEncoder - In the implementation block
@property (nonatomic,retain) id<MTLRenderCommandEncoder> maskRenderEncoder;                   //@synthesize maskRenderEncoder=_maskRenderEncoder - In the implementation block
@property (assign,nonatomic) unsigned long long vertexEncodeCount;                            //@synthesize vertexEncodeCount=_vertexEncodeCount - In the implementation block
@property (nonatomic,retain) id<MTLTexture> destinationTexture;                               //@synthesize destinationTexture=_destinationTexture - In the implementation block
@property (assign,nonatomic) unsigned long long destinationColorAttachmentIndex;              //@synthesize destinationColorAttachmentIndex=_destinationColorAttachmentIndex - In the implementation block
@property (assign,nonatomic) BOOL liveRendering;                                              //@synthesize liveRendering=_liveRendering - In the implementation block
@property (assign,nonatomic) BOOL waitUntilCompletedOnCommit;                                 //@synthesize waitUntilCompletedOnCommit=_waitUntilCompletedOnCommit - In the implementation block
@property (assign,nonatomic) BOOL msaaRendering;                                              //@synthesize msaaRendering=_msaaRendering - In the implementation block
@property (assign,nonatomic) BOOL renderOnPaper;                                              //@synthesize renderOnPaper=_renderOnPaper - In the implementation block
@property (assign,nonatomic) BOOL needRenderMask;                                             //@synthesize needRenderMask=_needRenderMask - In the implementation block
@property (assign,nonatomic) SCD_Struct_PK17 scissorRect;                                     //@synthesize scissorRect=_scissorRect - In the implementation block
+(void)renderTargetBarrierForRenderEncoder:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(id<MTLCommandBuffer>)commandBuffer;
-(void)commit;
-(id<MTLCommandQueue>)commandQueue;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)setScissorRect:(SCD_Struct_PK17)arg1 ;
-(void)commitAndPurgeResourceSet:(id)arg1 ;
-(void)renderTargetBarrier;
-(void)commitMaskCommandBuffer;
-(BOOL)waitUntilCompletedOnCommit;
-(id)initWithCommandQueue:(id)arg1 liveRendering:(BOOL)arg2 ;
-(id)commandBufferCreateIfNecessary;
-(id)computeCommandBufferCreateIfNecessary;
-(id)maskCommandBufferCreateIfNecessary;
-(void)addCommandBuffer:(id)arg1 ;
-(void)setRenderEncoder:(id<MTLRenderCommandEncoder>)arg1 ;
-(id<MTLCommandBuffer>)computeCommandBuffer;
-(id<MTLCommandBuffer>)maskCommandBuffer;
-(id<MTLRenderCommandEncoder>)renderEncoder;
-(id<MTLComputeCommandEncoder>)computeEncoder;
-(void)setComputeEncoder:(id<MTLComputeCommandEncoder>)arg1 ;
-(id<MTLRenderCommandEncoder>)maskRenderEncoder;
-(void)setMaskRenderEncoder:(id<MTLRenderCommandEncoder>)arg1 ;
-(unsigned long long)vertexEncodeCount;
-(void)setVertexEncodeCount:(unsigned long long)arg1 ;
-(id<MTLTexture>)destinationTexture;
-(void)setDestinationTexture:(id<MTLTexture>)arg1 ;
-(unsigned long long)destinationColorAttachmentIndex;
-(void)setDestinationColorAttachmentIndex:(unsigned long long)arg1 ;
-(BOOL)liveRendering;
-(void)setLiveRendering:(BOOL)arg1 ;
-(void)setWaitUntilCompletedOnCommit:(BOOL)arg1 ;
-(BOOL)msaaRendering;
-(void)setMsaaRendering:(BOOL)arg1 ;
-(BOOL)renderOnPaper;
-(void)setRenderOnPaper:(BOOL)arg1 ;
-(BOOL)needRenderMask;
-(void)setNeedRenderMask:(BOOL)arg1 ;
-(SCD_Struct_PK17)scissorRect;
@end

