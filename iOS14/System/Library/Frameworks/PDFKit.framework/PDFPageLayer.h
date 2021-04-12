/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>
#import <PDFKit/PDFPageLayerInterface.h>

@class PDFPageLayerPrivate, NSString;

@interface PDFPageLayer : CALayer <PDFPageLayerInterface> {

	PDFPageLayerPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSublayers;
-(id)page;
-(void)clearTiles;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isVisible;
-(void)dealloc;
-(long long)displayBox;
-(void)setEnableTileUpdates:(BOOL)arg1 ;
-(id)renderingProperties;
-(void)setNeedsTilesUpdate;
-(id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3 ;
-(void)tileDrawingComplete:(id)arg1 ;
-(id)geometryInterface;
-(unsigned long long)visibilityDelegateIndex;
-(void)_setEnablePageShadows:(BOOL)arg1 ;
-(void)_renderingPropertyUpdate:(id)arg1 ;
-(void)_pageDidRotate:(id)arg1 ;
-(void)_pageChangedPageRef:(id)arg1 ;
-(void)_forceTileUpdate;
-(void)_releaseTiles;
-(void)_releasePageLayerEffects;
-(void)_updateTiles;
-(void)_tileUpdateComplete;
-(void)updatePageLayerEffectForID:(id)arg1 ;
-(id)pageLayerEffectForID:(id)arg1 ;
-(CGAffineTransform)layerEffectTransform;
-(void)_updateLayerEffect:(id)arg1 withPageTransform:(CGAffineTransform)arg2 ;
-(id)_pageLayerEffects;
-(BOOL)_isTile:(id)arg1 occludedByTiles:(id)arg2 ;
-(CGRect)_layerTileToRootViewBounds:(id)arg1 ;
-(id)_subtractRectB:(CGRect)arg1 fromRectA:(CGRect)arg2 ;
-(void)updatePageLayerEffects;
-(void)forceTileUpdate;
-(BOOL)_hasTileWithFrameInLayer:(CGRect)arg1 ;
-(void)addPageLayerEffect:(id)arg1 ;
-(void)removePageLayerEffectForID:(id)arg1 ;
-(void)scalePageLayerEffects:(double)arg1 ;
-(BOOL)enablesTileUpdates;
-(void)saveOriginalTileLayout;
-(void)restoreOriginalTileLayout;
-(void)applyTileLayoutScale:(double)arg1 ;
-(void)willStartLiveResize;
-(void)willEndStartLiveResize;
-(void)setVisibilityDelegateIndex:(unsigned long long)arg1 ;
-(void)_hideTileLayer:(BOOL)arg1 ;
-(CGRect)_pageLayerVisibleRect;
-(void)_printRectsArray:(id)arg1 ;
@end

