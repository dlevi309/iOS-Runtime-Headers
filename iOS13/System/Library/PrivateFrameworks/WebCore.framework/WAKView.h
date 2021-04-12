/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKResponder.h>

@class NSMutableSet;

@interface WAKView : WAKResponder {

	WKViewContext* viewContext;
	WKView* viewRef;
	NSMutableSet* subviewReferences;
	BOOL _isHidden;
	BOOL _drawsOwnDescendants;

}
+(id)focusView;
+(id)_wrapperForViewRef:(WKView*)arg1 ;
+(void)_setInterpolationQuality:(int)arg1 ;
-(oneway void)release;
-(oneway void)_webcore_releaseWithWebThreadLock;
-(id)_frame;
-(id)_webView;
-(id)_web_parentWebFrameView;
-(void)_web_addDescendentWebHTMLViewsToArray:(id)arg1 ;
-(BOOL)_web_firstResponderIsSelfOrDescendantView;
-(id)_web_superviewOfClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(float)scale;
-(CGRect)bounds;
-(CGRect)frame;
-(void)setScale:(float)arg1 ;
-(void)layout;
-(CGRect)visibleRect;
-(id)superview;
-(CGSize)convertSize:(CGSize)arg1 toView:(id)arg2 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)needsDisplay;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutIfNeeded;
-(BOOL)isHiddenOrHasHiddenAncestor;
-(id)window;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(id)nextResponder;
-(void)setAutoresizingMask:(unsigned)arg1 ;
-(id)subviews;
-(unsigned)autoresizingMask;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)handleEvent:(id)arg1 ;
-(void)displayIfNeeded;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(void)display;
-(id)hitTest:(CGPoint)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setNeedsDisplay:(BOOL)arg1 ;
-(void)viewWillDraw;
-(void)displayRect:(CGRect)arg1 ;
-(id)lastScrollableAncestor;
-(void)viewDidMoveToWindow;
-(void)invalidateGState;
-(void)displayRectIgnoringOpacity:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)scrollPoint:(CGPoint)arg1 ;
-(BOOL)scrollRectToVisible:(CGRect)arg1 ;
-(BOOL)isDescendantOf:(id)arg1 ;
-(BOOL)accessibilityIsIgnored;
-(BOOL)needsPanelToBecomeKey;
-(void)setBoundsSize:(CGSize)arg1 ;
-(id)_initWithViewRef:(WKView*)arg1 ;
-(void)setBoundsOrigin:(CGPoint)arg1 ;
-(BOOL)_selfHandleEvent:(id)arg1 ;
-(WKView*)_viewRef;
-(id)_subviewReferences;
-(void)_lockFocusViewInContext:(CGContextRef)arg1 ;
-(void)_drawRect:(CGRect)arg1 context:(CGContextRef)arg2 lockFocus:(BOOL)arg3 ;
-(void)_unlockFocusViewInContext:(CGContextRef)arg1 ;
-(BOOL)_handleResponderCall:(int)arg1 ;
-(void)frameSizeChanged;
-(void)displayRectIgnoringOpacity:(CGRect)arg1 ;
-(void)lockFocus;
-(void)unlockFocus;
-(BOOL)mouse:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(void)setNextKeyView:(id)arg1 ;
-(id)previousValidKeyView;
-(id)nextKeyView;
-(id)nextValidKeyView;
-(id)previousKeyView;
-(void)releaseGState;
-(BOOL)inLiveResize;
-(void)_setDrawsOwnDescendants:(BOOL)arg1 ;
@end

