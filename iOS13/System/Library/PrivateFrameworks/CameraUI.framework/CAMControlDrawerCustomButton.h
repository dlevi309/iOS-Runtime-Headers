/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMControlDrawerButton.h>
#import <libobjc.A.dylib/CAMControlDrawerExpandableButton.h>

@protocol CAMControlDrawerExpandableButtonDelegate;
@class UIView;

@interface CAMControlDrawerCustomButton : CAMControlDrawerButton <CAMControlDrawerExpandableButton> {

	BOOL _expanded;
	BOOL __touchInTrackedView;
	id<CAMControlDrawerExpandableButtonDelegate> _delegate;
	UIView* __highlightedView;
	UIEdgeInsets _expansionInsets;

}

@property (assign,setter=_setTouchInTrackedView:,getter=_isTouchInTrackedView,nonatomic) BOOL _touchInTrackedView;              //@synthesize _touchInTrackedView=__touchInTrackedView - In the implementation block
@property (setter=_setHighlightedView:,nonatomic,retain) UIView * _highlightedView;                                             //@synthesize _highlightedView=__highlightedView - In the implementation block
@property (getter=isSelfExpanding,nonatomic,readonly) BOOL selfExpanding; 
@property (assign,nonatomic) UIEdgeInsets expansionInsets;                                                                      //@synthesize expansionInsets=_expansionInsets - In the implementation block
@property (assign,nonatomic,__weak) id<CAMControlDrawerExpandableButtonDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                   //@synthesize expanded=_expanded - In the implementation block
-(id<CAMControlDrawerExpandableButtonDelegate>)delegate;
-(void)setDelegate:(id<CAMControlDrawerExpandableButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIView *)_highlightedView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isExpanded;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpandable;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setExpanded:(BOOL)arg1 animated:(BOOL)arg2 shouldNotify:(BOOL)arg3 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(BOOL)shouldAccessibilityGestureBeginForHUDManager:(id)arg1 ;
-(void)setExpansionInsets:(UIEdgeInsets)arg1 ;
-(BOOL)shouldScaleImageWhileHighlighted;
-(UIEdgeInsets)expansionInsets;
-(BOOL)_shouldTrackView:(id)arg1 forTouchAtLocation:(CGPoint)arg2 ;
-(void)_setTouchInTrackedView:(BOOL)arg1 ;
-(void)_updateHighlightedView;
-(BOOL)_isTouchInTrackedView;
-(BOOL)isSelfExpanding;
-(BOOL)_shouldRejectAccessibilityGestureForHUDManager:(id)arg1 ;
-(void)_setHighlightedView:(id)arg1 ;
@end

