/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_UI140 _autoscrollData;
	SCD_Struct_UI142 _rangedSelectionData;
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
-(id)tintView;
-(id)handles;
-(CGRect)visibleRect;
-(void)removeFromSuperview;
-(id)scroller;
-(id)activeHandle;
-(BOOL)canFlip;
-(id)initWithWebDocumentView:(id)arg1 ;
-(CGRect)selectionFrame;
-(void)startSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)updateSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)endSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)resetSelection;
-(void)hideControlsBeforeRotation;
-(void)willStartScrollingOrZoomingPage;
-(void)didEndScrollingOrZoomingPage;
-(void)showControls;
-(void)showControlsAfterRotation;
-(CGRect)selectionBoundingRect;
-(void)showRangeSelection;
-(void)setCreatingSelection:(BOOL)arg1 ;
-(void)updateFrameAndHandlesWithAnimation:(BOOL)arg1 ;
-(id)handleWithPosition:(int)arg1 ;
-(BOOL)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2 ;
-(void)onBeforeScrollOrZoomHidingSelection:(BOOL)arg1 ;
-(void)onAfterScrollOrZoomShowingSelection:(BOOL)arg1 ;
-(void)updateTextRangeViewSelectionRects;
-(void)showCopyCalloutWithAnimation:(BOOL)arg1 ;
-(void)hideCopyCallout;
-(CGRect)fetchSelectionBoundingRect;
-(CGRect)fetchSelectionBoundingTextSelectionRect;
-(void)setSelectionFrame:(CGRect)arg1 ;
-(UIWebSelectionNode *)selectionNode;
-(void)setSelectionNode:(UIWebSelectionNode *)arg1 ;
-(void)considerFlipping;
-(void)touchChanged:(id)arg1 forHandleInText:(id)arg2 ;
-(void)setOrientationOfMagnifier:(id)arg1 forHandleInText:(id)arg2 ;
-(int)autoscrollDirectionsForHandle:(id)arg1 ;
-(void)animateSloppyReleaseOfHandleInText:(id)arg1 withMagnifier:(id)arg2 ;
-(BOOL)isHorizontalWritingMode;
-(void)shiftWebRangeSelectionAnimationDidStop;
-(id)nodeInPristineGraphAtPoint:(CGPoint)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)activelyManipulatingTextSelectionHandle;
-(void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
-(void)calloutBar:(id)arg1 selectedCommand:(id)arg2 ;
-(void)setSelectionFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)creatingSelection;
-(void)updateAutoscrollForHandle:(id)arg1 ;
-(void)_subscribeToScrollNotificationsIfNecessary:(id)arg1 ;
-(void)willStartScrollingOverflow;
-(void)_didScroll;
-(UIWebSelection *)selection;
-(void)clearSelection;
-(void)stopAnyAutoscrolling;
-(void)autoscrollTimerFired:(id)arg1 ;
-(void)updateSelectionRects;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(void)selectionChanged;
-(void)dealloc;
-(void)hideControls;
-(void)scaleChanged;
-(void)didEndScrollingOverflow;
@end

