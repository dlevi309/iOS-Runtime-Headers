/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)hasLandscapeOrientation;
+(id)currentEvent;
+(void)setOrientationProvider:(id)arg1 ;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(BOOL)resignFirstResponder;
-(id)rootLayer;
-(id)hostLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(BOOL)useOrientationDependentFontAntialiasing;
-(CGRect)extendedVisibleRect;
-(void)setIsInSnapshottingPaint:(BOOL)arg1 ;
-(CGSize)availableScreenSize;
-(void)dumpTiles;
-(CGPoint)convertBaseToScreen:(CGPoint)arg1 ;
-(CGPoint)convertScreenToBase:(CGPoint)arg1 ;
-(void)setScreenSize:(CGSize)arg1 ;
-(void)setAvailableScreenSize:(CGSize)arg1 ;
-(void)setContentReplacementImage:(CGImageRef)arg1 ;
-(void)setTilingMode:(int)arg1 ;
-(void)setKeepsZoomedOutTiles:(BOOL)arg1 ;
-(BOOL)keepsZoomedOutTiles;
-(void)close;
-(id)recursiveDescription;
-(void)setNeedsDisplay;
-(void)didRotate;
-(void)setVisible:(BOOL)arg1 ;
-(CGRect)frame;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutTilesNowForRect:(CGRect)arg1 ;
-(CGSize)screenSize;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
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
-(void)sendEventSynchronously:(id)arg1 ;
-(CGRect)exposedScrollViewRect;
-(void)willRotate;
-(id)description;
-(void)layoutTilesNow;
-(BOOL)isVisible;
-(void)makeKeyWindow;
-(void)setContentRect:(CGRect)arg1 ;
-(void)setCurrentTileScale:(float)arg1 ;
-(void)setZoomedOutTileScale:(float)arg1 ;
-(void)removeAllNonVisibleTiles;
-(void)removeAllTiles;
-(BOOL)isKeyWindow;
-(void)displayRect:(CGRect)arg1 ;
-(void)setUseOrientationDependentFontAntialiasing:(BOOL)arg1 ;
-(void)setTilesOpaque:(BOOL)arg1 ;
-(void)setContentView:(id)arg1 ;
-(void)setTilingDirection:(int)arg1 ;
-(void)setExposedScrollViewRect:(CGRect)arg1 ;
-(void)removeForegroundTiles;
-(BOOL)makeFirstResponder:(id)arg1 ;
-(void)setAcceleratedDrawingEnabled:(BOOL)arg1 ;
-(id)firstResponder;
-(void)layoutTiles;
-(BOOL)tilesOpaque;
-(void)sendEvent:(id)arg1 ;
-(void)setScreenScale:(double)arg1 ;
-(id)contentView;
-(void)sendMouseMoveEvent:(id)arg1 contentChange:(int*)arg2 ;
-(double)screenScale;
-(LegacyTileCache*)tileCache;
-(void)dealloc;
-(void)setRootLayer:(id)arg1 ;
@end

