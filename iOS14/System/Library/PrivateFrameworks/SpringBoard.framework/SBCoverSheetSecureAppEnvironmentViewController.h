/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBHomeGrabberPointerClickDelegate.h>
#import <libobjc.A.dylib/SBSecureAppObserver.h>
#import <libobjc.A.dylib/CSApplicationHosting.h>
#import <libobjc.A.dylib/SBCoverSheetSlidingViewControllerContentViewController.h>

@protocol BSInvalidatable, SBCoverSheetSecureAppEnvironmentViewControllerDelegate;
@class SBDashBoardHostedAppViewController, SBHomeGestureParticipant, NSString;

@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBSecureAppObserver, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController> {

	id<BSInvalidatable> _biometricMatchingAssertion;
	unsigned long long _currentOrientationMask;
	SBDashBoardHostedAppViewController* _secureAppViewController;
	id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> _delegate;
	SBHomeGestureParticipant* _homeGestureParticipant;

}

@property (nonatomic,readonly) SBDashBoardHostedAppViewController * secureAppViewController;                          //@synthesize secureAppViewController=_secureAppViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * homeGestureParticipant;                                       //@synthesize homeGestureParticipant=_homeGestureParticipant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL contentOccludesBackground; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)canHostAnApp;
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(void)setHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)conformsToCSApplicationHosting;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDelegate:(id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate>)arg1 ;
-(BOOL)contentOccludesBackground;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(BOOL)handlesRotationIndependentOfCoverSheet;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg1 ;
-(void)conformsToSBApplicationHosting;
-(void)secureAppOfTypeDidBegin:(unsigned long long)arg1 ;
-(BOOL)isHostingAnApp;
-(SBDashBoardHostedAppViewController *)secureAppViewController;
-(void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
-(id)initWithSecureAppViewController:(id)arg1 ;
-(void)requestHomeGestureOwnership;
-(void)relinquishHomeGesture;
-(void)secureAppOfTypeDidTakeNewAssertion:(unsigned long long)arg1 ;
-(void)_updateSupportedOrientationsMaskForSecureAppAction;
-(void)updateHomeGrabberHiddenAssertion:(BOOL)arg1 ;
-(id)_currentSecureAppAction;
-(void)relinquishHiddenAssertionForHomeGrabber:(id)arg1 animated:(BOOL)arg2 ;
-(void)takeHiddenAssertionForHomeGrabber:(id)arg1 animated:(BOOL)arg2 ;
@end

