/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewCellReorderControl.h>
#import <UIKitCore/_UIFloatingContentViewDelegate.h>

@class _UIFloatingContentView, UIPanGestureRecognizer, UITapGestureRecognizer, NSString;

@interface UITableViewCellFocusableReorderControl : UITableViewCellReorderControl <_UIFloatingContentViewDelegate> {

	_UIFloatingContentView* _floatingContentView;
	UIPanGestureRecognizer* _panRecognizer;
	UITapGestureRecognizer* _upArrowButtonRecognizer;
	UITapGestureRecognizer* _downArrowButtonRecognizer;
	BOOL _cellHasReorderingAppearance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_arrowButton:(long long)arg1 ;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)_updateFloatingViewForCurrentTraits;
-(BOOL)_shouldHandlePressEvent:(id)arg1 ;
-(void)_endIndirectTracking;
-(void)_panRecognizer:(id)arg1 ;
-(void)_updateFocusedFloatingContentView:(BOOL)arg1 ;
-(void)_upArrowButton:(id)arg1 ;
-(void)_downArrowButton:(id)arg1 ;
-(void)_beginIndirectTracking;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
@end

