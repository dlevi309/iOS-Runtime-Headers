/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/CCUIModuleAlertViewControllerDelegate.h>

@protocol SBControlCenterModuleTransientOverlayViewControllerDelegate;
@class CCUIModuleAlertViewController, CCSModulePresentationOptions, NSString;

@interface SBControlCenterModuleTransientOverlayViewController : SBTransientOverlayViewController <CCUIModuleAlertViewControllerDelegate> {

	CCUIModuleAlertViewController* _moduleOverlayViewController;
	id<SBControlCenterModuleTransientOverlayViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBControlCenterModuleTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) CCSModulePresentationOptions * presentationOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleHomeButtonPress;
-(id)init;
-(long long)preferredInterfaceOrientationForPresentation;
-(id<SBControlCenterModuleTransientOverlayViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(CCSModulePresentationOptions *)presentationOptions;
-(void)_dismiss;
-(void)setDelegate:(id<SBControlCenterModuleTransientOverlayViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(BOOL)shouldDisableControlCenter;
-(BOOL)_shouldBlurBackground;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)contentModuleAlertViewControllerNeedsDismissal:(id)arg1 ;
-(id)initWithModuleIdentifier:(id)arg1 presentationOptions:(id)arg2 ;
-(long long)preferredUnlockedGestureDismissalStyle;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(void)handleGestureDismissal;
-(long long)preferredLockedGestureDismissalStyle;
-(BOOL)shouldDisableOrientationUpdates;
-(void)_animateTransitionFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 isAnimated:(BOOL)arg4 otherAnimations:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
@end

