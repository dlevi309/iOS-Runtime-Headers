/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@protocol _UIActionSheetCompactPresentationControllerDelegate, UIActionSheetPresentationControllerDismissActionView, UIActionSheetPresentationControllerVisualStyle;
@class UIView, UILongPressGestureRecognizer, UITapGestureRecognizer, _UIDimmingKnockoutBackdropView, _UIAnimationCoordinator, NSString;

@interface _UIActionSheetCompactPresentationController : UIPresentationController {

	BOOL _avoidsKeyboardDisabled;
	BOOL _shouldAdoptPresentedAppearance;
	BOOL _hasPendingAnimatedLayout;
	id<_UIActionSheetCompactPresentationControllerDelegate> _actionSheetDelegate;
	UIView*<UIActionSheetPresentationControllerDismissActionView> _dismissActionView;
	UILongPressGestureRecognizer* _dismissActionViewGestureRecognizer;
	UITapGestureRecognizer* _dimmingViewDismissTapGestureRecognizer;
	UIView* _dimmingView;
	_UIDimmingKnockoutBackdropView* _backdropView;
	_UIAnimationCoordinator* _animationCoordinator;
	id<UIActionSheetPresentationControllerVisualStyle> _visualStyle;
	double _pseudoAlertPreferredTop;

}

@property (assign,nonatomic) BOOL shouldAdoptPresentedAppearance;                                                             //@synthesize shouldAdoptPresentedAppearance=_shouldAdoptPresentedAppearance - In the implementation block
@property (nonatomic,retain) UIView*<UIActionSheetPresentationControllerDismissActionView> dismissActionView;                 //@synthesize dismissActionView=_dismissActionView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * dismissActionViewGestureRecognizer;                               //@synthesize dismissActionViewGestureRecognizer=_dismissActionViewGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * dimmingViewDismissTapGestureRecognizer;                                 //@synthesize dimmingViewDismissTapGestureRecognizer=_dimmingViewDismissTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                                                            //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) _UIDimmingKnockoutBackdropView * backdropView;                                                   //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) _UIAnimationCoordinator * animationCoordinator;                                                  //@synthesize animationCoordinator=_animationCoordinator - In the implementation block
@property (nonatomic,retain) id<UIActionSheetPresentationControllerVisualStyle> visualStyle;                                  //@synthesize visualStyle=_visualStyle - In the implementation block
@property (assign,nonatomic) double pseudoAlertPreferredTop;                                                                  //@synthesize pseudoAlertPreferredTop=_pseudoAlertPreferredTop - In the implementation block
@property (assign,nonatomic) BOOL hasPendingAnimatedLayout;                                                                   //@synthesize hasPendingAnimatedLayout=_hasPendingAnimatedLayout - In the implementation block
@property (nonatomic,copy) NSString * dismissActionTitle; 
@property (assign,nonatomic) BOOL avoidsKeyboardDisabled;                                                                     //@synthesize avoidsKeyboardDisabled=_avoidsKeyboardDisabled - In the implementation block
@property (assign,nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically; 
@property (assign,nonatomic,__weak) id<_UIActionSheetCompactPresentationControllerDelegate> actionSheetDelegate;              //@synthesize actionSheetDelegate=_actionSheetDelegate - In the implementation block
-(CGRect)frameOfPresentedViewInContainerView;
-(_UIDimmingKnockoutBackdropView *)backdropView;
-(id<UIActionSheetPresentationControllerVisualStyle>)visualStyle;
-(void)setBackdropView:(_UIDimmingKnockoutBackdropView *)arg1 ;
-(void)setVisualStyle:(id<UIActionSheetPresentationControllerVisualStyle>)arg1 ;
-(_UIAnimationCoordinator *)animationCoordinator;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 visualStyle:(id)arg3 ;
-(void)setAnimationCoordinator:(_UIAnimationCoordinator *)arg1 ;
-(void)setDismissActionUsesShorterHeightWhenCompactVertically:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)dismissalTransitionWillBegin;
-(BOOL)dismissActionUsesShorterHeightWhenCompactVertically;
-(void)_updateForKeyboardStartFrame:(CGRect)arg1 endFrame:(CGRect)arg2 duration:(double)arg3 curve:(long long)arg4 ;
-(void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)_dismiss;
-(void)setAvoidsKeyboardDisabled:(BOOL)arg1 ;
-(void)setActionSheetDelegate:(id<_UIActionSheetCompactPresentationControllerDelegate>)arg1 ;
-(UILongPressGestureRecognizer *)dismissActionViewGestureRecognizer;
-(void)setDimmingViewDismissTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setPseudoAlertPreferredTop:(double)arg1 ;
-(BOOL)hasPendingAnimatedLayout;
-(void)setHasPendingAnimatedLayout:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2 ;
-(BOOL)shouldPresentInFullscreen;
-(void)_layoutViews;
-(BOOL)_shouldOccludeDuringPresentation;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)presentationTransitionWillBegin;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIView *)dimmingView;
-(void)_keyboardChanged:(id)arg1 ;
-(void)_handleDismiss:(id)arg1 ;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(UIView*<UIActionSheetPresentationControllerDismissActionView>)dismissActionView;
-(id<_UIActionSheetCompactPresentationControllerDelegate>)actionSheetDelegate;
-(void)setDismissActionView:(UIView*<UIActionSheetPresentationControllerDismissActionView>)arg1 ;
-(void)setDismissActionViewGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(SCD_Struct_UI49)_currentLayoutGeometry;
-(void)_subscribeToKeyboardNotifications;
-(void)setShouldAdoptPresentedAppearance:(BOOL)arg1 ;
-(void)_applyVisualAffordancesToViews;
-(void)_unsubscribeFromKeyboardNotifications;
-(double)_resizeAnimationDuration;
-(NSString *)dismissActionTitle;
-(UITapGestureRecognizer *)dimmingViewDismissTapGestureRecognizer;
-(BOOL)shouldAdoptPresentedAppearance;
-(double)pseudoAlertPreferredTop;
-(void)dealloc;
-(CGSize)_minimumSizeForDismissButton;
-(BOOL)_shouldDisableAvoidsKeyboard;
-(BOOL)avoidsKeyboardDisabled;
-(void)setDismissActionTitle:(NSString *)arg1 ;
-(void)beginPseudoAlertPresentationMode;
-(void)endPseudoAlertPresentationMode;
@end

