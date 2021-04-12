/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class WAKWindow;

@interface UIWebTiledView : UIView {

	WAKWindow* _wakWindow;
	int _inGestureType;
	int _tilingArea;
	BOOL _didFirstTileLayout;
	BOOL _layoutTilesInMainThread;
	BOOL _tilingModeIsLocked;
	BOOL _allowsPaintingAndScriptsWhilePanning;
	BOOL _editingTilingModeEnabled;

}
-(void)dealloc;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGRect)visibleRect;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)_didScroll;
-(void)setNeedsDisplay;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setInGesture:(int)arg1 ;
-(void)setEditingTilingModeEnabled:(BOOL)arg1 ;
-(void)setTilingEnabled:(BOOL)arg1 ;
-(BOOL)isTilingEnabled;
-(void)layoutTilesNow;
-(void)layoutTilesNowForRect:(CGRect)arg1 ;
-(void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)arg1 ;
-(void)removeAllNonVisibleTiles;
-(void)setTilingArea:(int)arg1 ;
-(void)removeAllTiles;
-(void)setTilesOpaque:(BOOL)arg1 ;
-(void)removeForegroundTiles;
-(int)tilingArea;
-(void)_updateForScreen:(id)arg1 ;
-(void)_screenChanged:(id)arg1 ;
-(void)updateTilingMode;
-(BOOL)tilesOpaque;
-(void)setKeepsZoomedOutTiles:(BOOL)arg1 ;
-(BOOL)keepsZoomedOutTiles;
-(void)dumpTiles;
-(void)setWAKWindow:(id)arg1 ;
-(void)layoutTilesNowOnWebThread;
-(void)drawImageIntoTiles:(CGImageRef)arg1 ;
-(void)lockTilingMode;
-(void)unlockTilingMode;
-(BOOL)allowsPaintingAndScriptsWhilePanning;
-(void)setTileSize:(CGSize)arg1 ;
-(CGSize)tileSize;
-(void)setDrawsGrid:(BOOL)arg1 ;
-(BOOL)drawsGrid;
-(void)setMaxTileCount:(unsigned)arg1 ;
-(unsigned)maxTileCount;
-(unsigned)adjustedMaxTileCount;
-(void)setLogsTilingChanges:(BOOL)arg1 ;
-(BOOL)logsTilingChanges;
-(void)setTileDrawingEnabled:(BOOL)arg1 ;
-(BOOL)editingTilingModeEnabled;
-(BOOL)tileDrawingEnabled;
-(BOOL)layoutTilesInMainThread;
-(void)setLayoutTilesInMainThread:(BOOL)arg1 ;
-(id)wakWindow;
@end

