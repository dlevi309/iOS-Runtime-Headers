/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSMutableArray, CALayer, UIBezierPath, NSArray, NSString;

@interface _UITextTiledLayer : CALayer <CALayerDelegate> {

	NSMutableArray* _visibleTiles;
	CGSize _tileSize;
	CALayer* _viewportLayer;
	double _viewportLayerExtraWidthFactor;
	CGRect _visibleViewportBounds;
	UIBezierPath* _clip;
	struct {
		unsigned disableTiling : 1;
		unsigned ditchAllTiles : 1;
		unsigned suspendLayout : 4;
		unsigned delegateSupportsMaskedRects : 1;
		unsigned delegateImplementsWillDraw : 1;
	}  _tcTiledLayerFlags;
	double _maxTileHeight;
	double _maxPrefetchedTiles;

}

@property (__weak) id<_UITextTiledLayerDelegate> delegate; 
@property (assign,nonatomic) BOOL usesTiledLayers; 
@property (assign,nonatomic) double maxTileHeight;                      //@synthesize maxTileHeight=_maxTileHeight - In the implementation block
@property (assign,nonatomic) double maxPrefetchedTiles;                 //@synthesize maxPrefetchedTiles=_maxPrefetchedTiles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tiles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentsMultiplyColor:(CGColorRef)arg1 ;
-(void)resumeTiling;
-(void)layoutSublayers;
-(id)init;
-(double)maxPrefetchedTiles;
-(void)layerWillDraw:(id)arg1 ;
-(void)setUsesTiledLayers:(BOOL)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(BOOL)usesTiledLayers;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setDelegate:(id<_UITextTiledLayerDelegate>)arg1 ;
-(void)setMaxPrefetchedTiles:(double)arg1 ;
-(void)suspendTiling;
-(void)setUnsafeUnretainedDelegate:(id)arg1 ;
-(id)_prepareNonTiledGhostLayersForVisibleBounds:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(void)_didSetDelegate;
-(id)_prepareTilesForVisibleBounds:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(id)_preparedTileForFrame:(CGRect)arg1 mask:(id)arg2 opacity:(double)arg3 deferred:(BOOL)arg4 ;
-(void)_updateTilingViewportWindow:(id)arg1 ;
-(void)_drawInContext:(CGContextRef)arg1 offset:(CGPoint)arg2 clip:(CGPathRef)arg3 ;
-(void)setRasterizationScale:(double)arg1 ;
-(NSArray *)tiles;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setMaxTileHeight:(double)arg1 ;
-(double)maxTileHeight;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
-(void)setContentsFormat:(id)arg1 ;
@end

