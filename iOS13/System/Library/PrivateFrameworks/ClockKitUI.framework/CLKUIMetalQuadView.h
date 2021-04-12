/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <ClockKitUI/CLKUIQuadView.h>

@protocol MTLCommandQueue, MTLComputePipelineState;
@class MTLRenderPassDescriptor, CAMetalLayer, NSArray;

@interface CLKUIMetalQuadView : CLKUIQuadView {

	id<MTLCommandQueue> _commandQueue;
	MTLRenderPassDescriptor* _renderPassDescriptor;
	BOOL _drawableSizeNeedsUpdate;
	CLKUIQuadSize _quadSize;
	CAMetalLayer* _metalLayer;
	NSArray* _quads;
	id<MTLComputePipelineState> _aplPipelineState;
	unsigned long long _colorPixelFormat;

}

@property (nonatomic,readonly) unsigned long long colorPixelFormat;              //@synthesize colorPixelFormat=_colorPixelFormat - In the implementation block
-(void)setOpaque:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)discardContents;
-(id)metalLayer;
-(unsigned long long)colorPixelFormat;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 colorSpace:(long long)arg3 ;
-(BOOL)_displayAndCheckForDrawable:(BOOL)arg1 WithCompletion:(/*^block*/id)arg2 ;
-(void)_handleQuadArrayChange:(id)arg1 ;
-(id)snapshotInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 ;
-(void)setSingleBufferMode:(BOOL)arg1 ;
-(float)computeAPL;
-(id)_newRenderPassDescriptor;
-(id)_snapshotTextureInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 withAdditionalPasses:(/*^block*/id)arg4 ;
-(id)_textureToImage:(id)arg1 scale:(double)arg2 ;
-(void)_updateDrawableSizeIfNecessary;
-(float)computeAPLAndSnapshot:(id*)arg1 ;
-(id)snapshotTextureInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 ;
@end

