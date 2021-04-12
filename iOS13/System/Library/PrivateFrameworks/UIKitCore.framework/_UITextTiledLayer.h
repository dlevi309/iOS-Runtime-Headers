/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSMutableArray, NSTimer, CALayer, UIBezierPath, NSArray, NSString;

@interface _UITextTiledLayer : CALayer <CALayerDelegate> {

	NSMutableArray* _visibleTiles;
	NSMutableArray* _unusedTiles;
	NSTimer* _unusedTilesCleanupTimer;
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
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<_UITextTiledLayerDelegate>)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setRasterizationScale:(double)arg1 ;
-(void)layerWillDraw:(id)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setContentsMultiplyColor:(CGColorRef)arg1 ;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
-(void)_updateTilingViewportWindow:(id)arg1 ;
-(void)setUsesTiledLayers:(BOOL)arg1 ;
-(BOOL)usesTiledLayers;
-(void)setMaxTileHeight:(double)arg1 ;
-(double)maxTileHeight;
-(void)suspendTiling;
-(void)resumeTiling;
-(void)_drawInContext:(CGContextRef)arg1 offset:(CGPoint)arg2 clip:(CGPathRef)arg3 ;
-(void)_didSetDelegate;
-(void)setUnsafeUnretainedDelegate:(id)arg1 ;
-(void)setContentsFormat:(id)arg1 ;
-(double)maxPrefetchedTiles;
-(id)_preparedTileForFrame:(CGRect)arg1 mask:(id)arg2 opacity:(double)arg3 deferred:(BOOL)arg4 ;
-(id)_prepareTilesForVisibleBounds:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(id)_prepareNonTiledGhostLayersForVisibleBounds:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(void)layoutSublayers;
-(void)setMaxPrefetchedTiles:(double)arg1 ;
-(NSArray *)tiles;
@end

