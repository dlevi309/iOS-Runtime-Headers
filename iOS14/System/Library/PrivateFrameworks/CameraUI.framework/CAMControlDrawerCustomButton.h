/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMControlDrawerButton.h>
#import <libobjc.A.dylib/CAMControlDrawerExpandableButton.h>

@protocol CAMControlDrawerExpandableButtonDelegate;
@interface CAMControlDrawerCustomButton : CAMControlDrawerButton <CAMControlDrawerExpandableButton> {

	BOOL _expanded;
	BOOL __touchInTrackedView;
	id<CAMControlDrawerExpandableButtonDelegate> _delegate;
	UIEdgeInsets _expansionInsets;

}

@property (assign,setter=_setTouchInTrackedView:,getter=_isTouchInTrackedView,nonatomic) BOOL _touchInTrackedView;              //@synthesize _touchInTrackedView=__touchInTrackedView - In the implementation block
@property (getter=isSelfExpanding,nonatomic,readonly) BOOL selfExpanding; 
@property (assign,nonatomic) UIEdgeInsets expansionInsets;                                                                      //@synthesize expansionInsets=_expansionInsets - In the implementation block
@property (assign,nonatomic,__weak) id<CAMControlDrawerExpandableButtonDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                   //@synthesize expanded=_expanded - In the implementation block
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isExpanded;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id<CAMControlDrawerExpandableButtonDelegate>)delegate;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(void)setDelegate:(id<CAMControlDrawerExpandableButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isExpandable;
-(BOOL)shouldAccessibilityGestureBeginForHUDManager:(id)arg1 ;
-(void)setExpansionInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)expansionInsets;
-(BOOL)_shouldTrackView:(id)arg1 forTouchAtLocation:(CGPoint)arg2 ;
-(void)_setTouchInTrackedView:(BOOL)arg1 ;
-(void)_updateHighlightedView;
-(BOOL)_isTouchInTrackedView;
-(BOOL)isSelfExpanding;
-(void)_setExpanded:(BOOL)arg1 animated:(BOOL)arg2 shouldNotify:(BOOL)arg3 ;
-(BOOL)_shouldRejectAccessibilityGestureForHUDManager:(id)arg1 ;
@end

