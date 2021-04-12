/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UITextTiledLayerDelegate.h>
#import <UIKitCore/_UIDrawsTextInRect.h>

@protocol _UITextCanvasViewContext;
@class NSMutableSet, NSArray, _UISceneDisplayLink, _UITextTiledLayer, NSString;

@interface _UITextCanvasView : UIView <_UITextTiledLayerDelegate, _UIDrawsTextInRect> {

	NSMutableSet* _ghostedRanges;
	NSMutableSet* _invisibleRanges;
	NSArray* _maskedRects;
	_UISceneDisplayLink* _sceneDisplayLink;
	id<_UITextCanvasViewContext> _context;

}

@property (nonatomic,readonly) _UITextTiledLayer * layer; 
@property (assign,nonatomic,__weak) id<_UITextCanvasViewContext> context;                            //@synthesize context=_context - In the implementation block
@property (assign,getter=isTilingEnabled,nonatomic) BOOL tilingEnabled; 
@property (assign,nonatomic) double maxTileHeight; 
@property (assign,setter=_setDrawsDebugBaselines:,nonatomic) BOOL _drawsDebugBaselines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(id<_UITextCanvasViewContext>)context;
-(void)setContext:(id<_UITextCanvasViewContext>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_drawsDebugBaselines;
-(void)_setDrawsDebugBaselines:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)addGhostedRange:(NSRange)arg1 ;
-(void)removeAllGhostedRanges;
-(BOOL)_enableAutoConstraining;
-(void)_windowDidMoveToScreen;
-(void)_updateTilingViewportBookkeeping;
-(void)_updateTilingViewportLayer;
-(void)setMaxTileHeight:(double)arg1 ;
-(double)maxTileHeight;
-(void)suspendTiling;
-(void)resumeTiling;
-(void)drawTextInRect:(CGRect)arg1 ;
-(id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(CGRect)arg2 ;
-(void)setTilingEnabled:(BOOL)arg1 ;
-(BOOL)isTilingEnabled;
-(void)addInvisibleRange:(NSRange)arg1 ;
-(void)removeInvisibleRange:(NSRange)arg1 ;
@end

