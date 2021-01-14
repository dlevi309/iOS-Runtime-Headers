/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(CGRect)bounds;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(void)setAutoresizingMask:(unsigned)arg1 ;
-(BOOL)needsPanelToBecomeKey;
-(id)nextResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(id)init;
-(void)removeFromSuperview;
-(id)subviews;
-(BOOL)needsDisplay;
-(void)handleEvent:(id)arg1 ;
-(void)invalidateGState;
-(void)viewDidMoveToWindow;
-(void)setBoundsSize:(CGSize)arg1 ;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)superview;
-(float)scale;
-(CGRect)frame;
-(id)_initWithViewRef:(WKView*)arg1 ;
-(void)setBoundsOrigin:(CGPoint)arg1 ;
-(BOOL)_selfHandleEvent:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)layoutIfNeeded;
-(void)displayRectIgnoringOpacity:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)unlockFocus;
-(id)description;
-(id)_subviewReferences;
-(void)_lockFocusViewInContext:(CGContextRef)arg1 ;
-(void)_drawRect:(CGRect)arg1 context:(CGContextRef)arg2 lockFocus:(BOOL)arg3 ;
-(void)_unlockFocusViewInContext:(CGContextRef)arg1 ;
-(BOOL)_handleResponderCall:(int)arg1 ;
-(void)frameSizeChanged;
-(void)displayRectIgnoringOpacity:(CGRect)arg1 ;
-(BOOL)mouse:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(void)setNextKeyView:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(id)previousValidKeyView;
-(id)nextKeyView;
-(id)nextValidKeyView;
-(id)previousKeyView;
-(void)releaseGState;
-(BOOL)inLiveResize;
-(void)_setDrawsOwnDescendants:(BOOL)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)window;
-(void)setNeedsDisplay:(BOOL)arg1 ;
-(void)viewWillDraw;
-(void)displayRect:(CGRect)arg1 ;
-(BOOL)isHiddenOrHasHiddenAncestor;
-(void)setScale:(float)arg1 ;
-(void)scrollPoint:(CGPoint)arg1 ;
-(BOOL)scrollRectToVisible:(CGRect)arg1 ;
-(WKView*)_viewRef;
-(CGSize)convertSize:(CGSize)arg1 toView:(id)arg2 ;
-(void)display;
-(void)addSubview:(id)arg1 ;
-(unsigned)autoresizingMask;
-(void)displayIfNeeded;
-(BOOL)isDescendantOf:(id)arg1 ;
-(BOOL)accessibilityIsIgnored;
-(id)lastScrollableAncestor;
-(void)lockFocus;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)dealloc;
-(void)layout;
@end

