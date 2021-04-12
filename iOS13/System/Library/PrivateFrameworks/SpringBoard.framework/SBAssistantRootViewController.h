/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBFluidGestureDismissable.h>

@class SiriPresentationSpringBoardMainScreenViewController, UIView, SBFluidDismissalState, UIScreen, SBKeyboardHomeAffordanceAssertion, SBFHomeGrabberSettings, SBHomeGrabberView, NSString;

@interface SBAssistantRootViewController : UIViewController <SBFluidGestureDismissable> {

	SiriPresentationSpringBoardMainScreenViewController* _assistantViewController;
	UIView* _contentView;
	UIView* _clippingView;
	SBFluidDismissalState* _fluidDismissalState;
	UIScreen* _screen;
	SBKeyboardHomeAffordanceAssertion* _keyboardHomeAffordanceAssertion;
	SBFHomeGrabberSettings* _grabberSettings;
	BOOL _keyboardPresented;
	BOOL _keyboardStashed;
	BOOL _ownsHomeGesture;
	SBHomeGrabberView* _homeAffordanceView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SBFluidDismissalState * fluidDismissalState; 
@property (nonatomic,retain) UIScreen * screen;                                                                      //@synthesize screen=_screen - In the implementation block
@property (nonatomic,retain) SBHomeGrabberView * homeAffordanceView;                                                 //@synthesize homeAffordanceView=_homeAffordanceView - In the implementation block
@property (nonatomic,readonly) UIView * clippingView;                                                                //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) SiriPresentationSpringBoardMainScreenViewController * assistantController;              //@synthesize assistantViewController=_assistantViewController - In the implementation block
@property (assign,nonatomic) BOOL ownsHomeGesture;                                                                   //@synthesize ownsHomeGesture=_ownsHomeGesture - In the implementation block
-(UIScreen *)screen;
-(UIView *)contentView;
-(void)loadView;
-(void)setScreen:(UIScreen *)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)wantsFullScreenLayout;
-(id)initWithScreen:(id)arg1 ;
-(UIView *)clippingView;
-(void)_keyboardWillHideNotification:(id)arg1 ;
-(void)_keyboardWillShowNotification:(id)arg1 ;
-(void)setFluidDismissalState:(SBFluidDismissalState *)arg1 ;
-(SBHomeGrabberView *)homeAffordanceView;
-(void)_updateHomeAffordance;
-(void)setHomeAffordanceView:(SBHomeGrabberView *)arg1 ;
-(BOOL)ownsHomeGesture;
-(SiriPresentationSpringBoardMainScreenViewController *)assistantController;
-(void)setAssistantController:(SiriPresentationSpringBoardMainScreenViewController *)arg1 ;
-(SBFluidDismissalState *)fluidDismissalState;
-(void)setOwnsHomeGesture:(BOOL)arg1 ;
-(void)_updateKeyboardForHomeGesture;
@end

