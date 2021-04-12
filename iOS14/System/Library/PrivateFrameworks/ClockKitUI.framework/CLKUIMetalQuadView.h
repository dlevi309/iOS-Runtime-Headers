/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <ClockKitUI/CLKUIQuadView.h>

@protocol MTLCommandQueue, MTLTexture, MTLComputePipelineState;
@class MTLRenderPassDescriptor, CAMetalLayer, NSArray;

@interface CLKUIMetalQuadView : CLKUIQuadView {

	id<MTLCommandQueue> _commandQueue;
	MTLRenderPassDescriptor* _renderPassDescriptor;
	BOOL _drawableSizeNeedsUpdate;
	CLKUIQuadSize _quadSize;
	CAMetalLayer* _metalLayer;
	NSArray* _quads;
	id<MTLTexture> _depthTexture;
	unsigned _isDepthBufferRequired : 1;
	id<MTLComputePipelineState> _aplPipelineState;
	id<MTLComputePipelineState> _colorConversionPipelineState;
	unsigned _presentWithTransaction : 1;
	id<MTLTexture> _msaaTexture;
	id<MTLTexture> _textureForPrewarming;
	unsigned long long _colorPixelFormat;
	unsigned long long _msaaCount;

}

@property (nonatomic,readonly) unsigned long long colorPixelFormat;              //@synthesize colorPixelFormat=_colorPixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long msaaCount;                       //@synthesize msaaCount=_msaaCount - In the implementation block
+(id)allocateDepthTextureWithWidth:(float)arg1 height:(float)arg2 sampleCount:(unsigned long long)arg3 ;
-(void)setOpaque:(BOOL)arg1 ;
-(unsigned long long)colorPixelFormat;
-(void)layoutSubviews;
-(void)discardContents;
-(id)metalLayer;
-(id)snapshotInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 ;
-(id)snapshotTextureInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 colorSpace:(long long)arg3 ;
-(BOOL)_displayAndCheckForDrawable:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleQuadArrayChange:(id)arg1 ;
-(void)setSingleBufferMode:(BOOL)arg1 ;
-(float)computeAPL;
-(id)_newRenderPassDescriptor;
-(id)_snapshotTextureInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 withAdditionalPasses:(/*^block*/id)arg4 ;
-(id)_textureToImage:(id)arg1 scale:(double)arg2 ;
-(void)_renderQuads:(id)arg1 toScreenWithCommandBuffer:(id)arg2 passDescriptor:(id)arg3 ;
-(void)_updateDrawableSizeIfNecessary;
-(float)computeAPLAndSnapshot:(id*)arg1 ;
-(void)setMsaaCount:(unsigned long long)arg1 ;
-(BOOL)prewarmWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)msaaCount;
@end
