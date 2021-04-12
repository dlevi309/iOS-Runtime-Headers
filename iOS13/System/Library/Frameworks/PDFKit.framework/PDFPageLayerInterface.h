/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFPageLayerInterface <NSObject>
@required
-(BOOL)isVisible;
-(id)page;
-(void)clearTiles;
-(long long)displayBox;
-(void)setEnableTileUpdates:(BOOL)arg1;
-(id)renderingProperties;
-(void)setNeedsTilesUpdate;
-(id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;
-(id)geometryInterface;
-(unsigned long long)visibilityDelegateIndex;
-(void)updatePageLayerEffectForID:(id)arg1;
-(id)pageLayerEffectForID:(id)arg1;
-(CGAffineTransform*)layerEffectTransform;
-(void)updatePageLayerEffects;
-(void)addPageLayerEffect:(id)arg1;
-(void)removePageLayerEffectForID:(id)arg1;
-(void)scalePageLayerEffects:(double)arg1;
-(BOOL)enablesTileUpdates;
-(void)forceTileUpdate;
-(void)saveOriginalTileLayout;
-(void)restoreOriginalTileLayout;
-(void)applyTileLayoutScale:(double)arg1;
-(void)willStartLiveResize;
-(void)willEndStartLiveResize;
-(void)setVisibilityDelegateIndex:(unsigned long long)arg1;

@end

