/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDTilingLayerDelegate <CALayerDelegate>
@optional
-(void)tilingLayerWillSetNeedsLayout:(id)arg1;
-(BOOL)canDrawTilingLayerInBackground:(id)arg1;
-(BOOL)shouldLayoutTilingLayer:(id)arg1;
-(CGRect*)visibleBoundsForTilingLayer:(id)arg1;
-(id)queueForDrawingTilingLayerInBackground:(id)arg1;
-(BOOL)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id*)arg2 andQueue:(id*)arg3;
-(void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2;
-(id)providerForTilingLayer:(id)arg1;
-(BOOL)mustDrawTilingLayerOnMainThread:(id)arg1;
-(void)tilingLayerWillSetNeedsDisplay:(id)arg1;
-(void)tilingLayerWillSetNeedsDisplayForDirtyTiles:(id)arg1;

@end

