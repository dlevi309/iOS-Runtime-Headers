/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSDFrame, NSArray, TSDBitmapImageProvider, CALayer;

@interface TSDFrameRep : NSObject {

	TSDFrame* mFrame;
	NSArray* mImages;
	NSArray* mMasks;
	TSDBitmapImageProvider* mAdornment;
	CALayer* mMaskLayer;
	BOOL mShouldEnableBlendMode;

}
-(void)dealloc;
-(id)frame;
-(id)initWithTSDFrame:(id)arg1 ;
-(void)applyMaskForRectWithCoverage:(CGRect)arg1 toContext:(CGContextRef)arg2 ;
-(void)blendMaskBeforeRenderingImageInContext:(CGContextRef)arg1 ;
-(void)frameRect:(CGRect)arg1 inContext:(CGContextRef)arg2 withTotalScale:(double)arg3 ;
-(id)applyToCALayer:(id)arg1 withRepLayer:(id)arg2 maskLayer:(id)arg3 viewScale:(double)arg4 ;
-(void)updateCALayer:(id)arg1 toRect:(CGRect)arg2 withRepLayer:(id)arg3 maskLayer:(id)arg4 viewScale:(double)arg5 maskLayerTransform:(CGAffineTransform)arg6 ;
-(CGImageRef)p_newFrameForMask:(BOOL)arg1 size:(CGSize)arg2 forCALayer:(BOOL)arg3 viewScale:(double)arg4 ;
-(void)p_drawFrameIntoRect:(CGRect)arg1 inContext:(CGContextRef)arg2 withImages:(id)arg3 atViewScale:(double)arg4 isMask:(BOOL)arg5 ;
-(void)p_addUnreplicatedLayerForIndex:(unsigned)arg1 toLayer:(id)arg2 maskLayer:(id)arg3 ;
-(void)p_addEdgeLayerForIndex:(unsigned)arg1 toLayer:(id)arg2 maskLayer:(id)arg3 ;
-(void)p_setUnreplicatedLayerWithIndex:(unsigned)arg1 sublayers:(id)arg2 maskLayers:(id)arg3 toRect:(CGRect)arg4 ;
-(void)p_setRepeatingLayerWithIndex:(unsigned)arg1 sublayers:(id)arg2 maskLayers:(id)arg3 toRect:(CGRect)arg4 start:(double)arg5 end:(double)arg6 ;
-(CGImageRef)p_newRenderedFrameForMask:(BOOL)arg1 size:(CGSize)arg2 forCALayer:(BOOL)arg3 viewScale:(double)arg4 ;
-(void)p_drawTiles:(id)arg1 inContext:(CGContextRef)arg2 rect:(CGRect)arg3 start:(double)arg4 end:(double)arg5 vertical:(BOOL)arg6 ;
-(id)p_createRepeatingLayerWithImage:(CGImageRef)arg1 vertical:(BOOL)arg2 screenScale:(double)arg3 ;
-(void)p_adjustRepeatingLayer:(id)arg1 withImageRect:(CGRect)arg2 start:(double)arg3 end:(double)arg4 vertical:(BOOL)arg5 ;
@end

