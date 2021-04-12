/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKResponder.h>

@class CALayer, WAKView;

@interface WAKWindow : WAKResponder {

	CALayer* _hostLayer;
	LegacyTileCache* _tileCache;
	CGRect _frozenVisibleRect;
	CALayer* _rootLayer;
	CGSize _screenSize;
	CGSize _availableScreenSize;
	double _screenScale;
	CGRect _frame;
	WAKView* _contentView;
	WAKView* _responderView;
	WAKView* _nextResponder;
	BOOL _visible;
	BOOL _isInSnapshottingPaint;
	BOOL _useOrientationDependentFontAntialiasing;
	BOOL _entireWindowVisibleForTesting;
	Lock _exposedScrollViewRectLock;
	CGRect _exposedScrollViewRect;

}

@property (assign,nonatomic) BOOL useOrientationDependentFontAntialiasing;              //@synthesize useOrientationDependentFontAntialiasing=_useOrientationDependentFontAntialiasing - In the implementation block
@property (assign,nonatomic) CGImageRef contentReplacementImage; 
+(id)currentEvent;
+(void)setOrientationProvider:(id)arg1 ;
+(BOOL)hasLandscapeOrientation;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(void)dealloc;
-(id)description;
-(void)close;
-(CGRect)frame;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(CGRect)visibleRect;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)makeKeyWindow;
-(id)firstResponder;
-(void)setNeedsDisplay;
-(id)rootLayer;
-(id)recursiveDescription;
-(BOOL)isKeyWindow;
-(id)initWithLayer:(id)arg1 ;
-(void)setScreenScale:(double)arg1 ;
-(void)willRotate;
-(void)didRotate;
-(void)sendEvent:(id)arg1 ;
-(void)layoutTilesNow;
-(double)screenScale;
-(void)layoutTilesNowForRect:(CGRect)arg1 ;
-(void)sendEventSynchronously:(id)arg1 ;
-(CGRect)exposedScrollViewRect;
-(void)setContentRect:(CGRect)arg1 ;
-(void)setCurrentTileScale:(float)arg1 ;
-(void)setZoomedOutTileScale:(float)arg1 ;
-(void)removeAllNonVisibleTiles;
-(void)removeAllTiles;
-(void)setUseOrientationDependentFontAntialiasing:(BOOL)arg1 ;
-(void)setTilesOpaque:(BOOL)arg1 ;
-(void)setTilingDirection:(int)arg1 ;
-(void)setExposedScrollViewRect:(CGRect)arg1 ;
-(void)displayRect:(CGRect)arg1 ;
-(void)removeForegroundTiles;
-(BOOL)makeFirstResponder:(id)arg1 ;
-(void)setAcceleratedDrawingEnabled:(BOOL)arg1 ;
-(void)sendMouseMoveEvent:(id)arg1 contentChange:(int*)arg2 ;
-(void)setScreenSize:(CGSize)arg1 ;
-(void)setAvailableScreenSize:(CGSize)arg1 ;
-(void)setContentReplacementImage:(CGImageRef)arg1 ;
-(void)layoutTiles;
-(void)setTilingMode:(int)arg1 ;
-(BOOL)tilesOpaque;
-(void)setKeepsZoomedOutTiles:(BOOL)arg1 ;
-(BOOL)keepsZoomedOutTiles;
-(void)dumpTiles;
-(void)setRootLayer:(id)arg1 ;
-(id)hostLayer;
-(CGRect)extendedVisibleRect;
-(BOOL)useOrientationDependentFontAntialiasing;
-(void)setIsInSnapshottingPaint:(BOOL)arg1 ;
-(CGSize)screenSize;
-(CGSize)availableScreenSize;
-(LegacyTileCache*)tileCache;
-(CGPoint)convertBaseToScreen:(CGPoint)arg1 ;
-(CGPoint)convertScreenToBase:(CGPoint)arg1 ;
-(CGRect)_visibleRectRespectingMasksToBounds:(BOOL)arg1 ;
-(void)freezeVisibleRect;
-(void)unfreezeVisibleRect;
-(id)_newFirstResponderAfterResigning;
-(CGRect)convertRectToScreen:(CGRect)arg1 ;
-(CGRect)convertRectFromScreen:(CGRect)arg1 ;
-(unsigned long long)keyViewSelectionDirection;
-(void)setFrame:(CGRect)arg1 display:(BOOL)arg2 ;
-(BOOL)isInSnapshottingPaint;
-(void)setEntireWindowVisibleForTesting:(BOOL)arg1 ;
-(int)tilingMode;
-(int)tilingDirection;
-(float)zoomedOutTileScale;
-(float)currentTileScale;
-(BOOL)hasPendingDraw;
-(CGImageRef)contentReplacementImage;
-(void)setTileBordersVisible:(BOOL)arg1 ;
-(void)setTilePaintCountsVisible:(BOOL)arg1 ;
-(void)setTileControllerShouldUseLowScaleTiles:(BOOL)arg1 ;
@end

