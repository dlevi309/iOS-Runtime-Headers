/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)tileSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(void)dumpTiles;
-(BOOL)drawsGrid;
-(void)updateTilingMode;
-(void)setWAKWindow:(id)arg1 ;
-(void)setKeepsZoomedOutTiles:(BOOL)arg1 ;
-(BOOL)keepsZoomedOutTiles;
-(void)layoutTilesNowOnWebThread;
-(void)drawImageIntoTiles:(CGImageRef)arg1 ;
-(void)lockTilingMode;
-(void)unlockTilingMode;
-(void)setTileSize:(CGSize)arg1 ;
-(unsigned)maxTileCount;
-(BOOL)allowsPaintingAndScriptsWhilePanning;
-(void)setDrawsGrid:(BOOL)arg1 ;
-(void)setMaxTileCount:(unsigned)arg1 ;
-(id)wakWindow;
-(unsigned)adjustedMaxTileCount;
-(void)setLogsTilingChanges:(BOOL)arg1 ;
-(BOOL)logsTilingChanges;
-(void)setTileDrawingEnabled:(BOOL)arg1 ;
-(BOOL)editingTilingModeEnabled;
-(BOOL)tileDrawingEnabled;
-(BOOL)layoutTilesInMainThread;
-(void)setLayoutTilesInMainThread:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(void)_screenChanged:(id)arg1 ;
-(void)layoutTilesNowForRect:(CGRect)arg1 ;
-(void)setTilingEnabled:(BOOL)arg1 ;
-(BOOL)isTilingEnabled;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)_didScroll;
-(void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)arg1 ;
-(int)tilingArea;
-(void)layoutSubviews;
-(void)layoutTilesNow;
-(void)_updateForScreen:(id)arg1 ;
-(void)removeAllNonVisibleTiles;
-(void)setTilingArea:(int)arg1 ;
-(void)removeAllTiles;
-(void)setTilesOpaque:(BOOL)arg1 ;
-(void)removeForegroundTiles;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setEditingTilingModeEnabled:(BOOL)arg1 ;
-(BOOL)tilesOpaque;
-(void)setInGesture:(int)arg1 ;
-(void)setNeedsLayout;
-(void)dealloc;
@end

