/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIWebSelectionHandle, UIWebSelectionOutline, UIWebTextRangeView, UIWebDocumentView, UIWebSelectionNode, UIWebSelectionGraph, UIWebSelection;

@interface UIWebSelectionView : UIView {

	UIView* _center;
	CGRect _selectionFrame;
	UIWebSelectionHandle* _top;
	UIWebSelectionHandle* _right;
	UIWebSelectionHandle* _bottom;
	UIWebSelectionHandle* _left;
	UIWebSelectionOutline* _outline;
	UIWebTextRangeView* _textRangeView;
	UIWebDocumentView* _documentView;
	UIWebSelectionNode* _selectionNode;
	UIWebSelectionGraph* _selectionGraph;
	double _growThreshold;
	double _shrinkThreshold;
	SCD_Struct_UI119 _autoscrollData;
	SCD_Struct_UI121 _rangedSelectionData;
	int _nestedLayoutCalls;
	BOOL _calloutBarIsHiddenBeforeRotation;
	BOOL _rotating;
	int _selectionInFixedPosition;
	BOOL _creatingSelection;

}

@property (nonatomic,retain) UIWebSelectionNode * selectionNode;              //@synthesize selectionNode=_selectionNode - In the implementation block
@property (assign,nonatomic) CGRect selectionFrame; 
@property (nonatomic,readonly) UIWebSelection * selection; 
@property (assign,nonatomic) BOOL creatingSelection;                          //@synthesize creatingSelection=_creatingSelection - In the implementation block
-(void)dealloc;
-(id)handles;
-(CGRect)visibleRect;
-(void)removeFromSuperview;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)selectionChanged;
-(void)_didScroll;
-(void)clearSelection;
-(UIWebSelection *)selection;
-(void)updateSelectionRects;
-(void)stopAnyAutoscrolling;
-(void)autoscrollTimerFired:(id)arg1 ;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(void)willStartScrollingOverflow;
-(void)didEndScrollingOverflow;
-(id)initWithWebDocumentView:(id)arg1 ;
-(void)hideControls;
-(CGRect)selectionFrame;
-(void)startSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)updateSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)endSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)scaleChanged;
-(void)resetSelection;
-(void)willStartScrollingOrZoomingPage;
-(void)didEndScrollingOrZoomingPage;
-(void)hideControlsBeforeRotation;
-(void)showControlsAfterRotation;
-(CGRect)selectionBoundingRect;
-(void)showRangeSelection;
-(void)setCreatingSelection:(BOOL)arg1 ;
-(void)updateFrameAndHandlesWithAnimation:(BOOL)arg1 ;
-(void)showControls;
-(id)tintView;
-(id)handleWithPosition:(int)arg1 ;
-(BOOL)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2 ;
-(void)onBeforeScrollOrZoomHidingSelection:(BOOL)arg1 ;
-(void)onAfterScrollOrZoomShowingSelection:(BOOL)arg1 ;
-(void)updateTextRangeViewSelectionRects;
-(void)showCopyCalloutWithAnimation:(BOOL)arg1 ;
-(void)hideCopyCallout;
-(CGRect)fetchSelectionBoundingTextSelectionRect;
-(CGRect)fetchSelectionBoundingRect;
-(void)setSelectionFrame:(CGRect)arg1 ;
-(void)setSelectionNode:(UIWebSelectionNode *)arg1 ;
-(void)considerFlipping;
-(void)setOrientationOfMagnifier:(id)arg1 forHandleInText:(id)arg2 ;
-(void)animateSloppyReleaseOfHandleInText:(id)arg1 withMagnifier:(id)arg2 ;
-(BOOL)isHorizontalWritingMode;
-(id)scroller;
-(int)autoscrollDirectionsForHandle:(id)arg1 ;
-(void)touchChanged:(id)arg1 forHandleInText:(id)arg2 ;
-(void)shiftWebRangeSelectionAnimationDidStop;
-(id)nodeInPristineGraphAtPoint:(CGPoint)arg1 ;
-(UIWebSelectionNode *)selectionNode;
-(id)activeHandle;
-(BOOL)activelyManipulatingTextSelectionHandle;
-(void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
-(void)calloutBar:(id)arg1 selectedCommand:(id)arg2 ;
-(void)setSelectionFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)canFlip;
-(void)updateAutoscrollForHandle:(id)arg1 ;
-(void)_subscribeToScrollNotificationsIfNecessary:(id)arg1 ;
-(BOOL)creatingSelection;
@end

