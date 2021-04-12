/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PNPPairingViewDelegate.h>
#import <libobjc.A.dylib/PNPChargingStatusViewDelegate.h>
#import <libobjc.A.dylib/PNPPencilViewDelegate.h>
#import <libobjc.A.dylib/PNPPlatterViewController.h>
#import <libobjc.A.dylib/PNPDeviceStateConfigurable.h>
#import <libobjc.A.dylib/PNPViewController.h>

@protocol PNPPlatterViewControllerPlatterDelegate, PNPViewControllerAppearanceDelegate, PNPPairingViewControllerDelegate;
@class PNPPlatterContainerView, PNPPairingView, PNPChargingStatusView, PNPPencilHorizontalPresentationContainerView, PNPPencilView, PNPPlatterTransitioningDelegate, UIAlertController, NSTimer, PNPDeviceState, UIPanGestureRecognizer, NSString;

@interface PNPPairingViewController : UIViewController <PNPPairingViewDelegate, PNPChargingStatusViewDelegate, PNPPencilViewDelegate, PNPPlatterViewController, PNPDeviceStateConfigurable, PNPViewController> {

	PNPPlatterContainerView* _wizardPlatterContainerView;
	PNPPairingView* _pairingView;
	PNPChargingStatusView* _pairingChargingStatusView;
	PNPPlatterContainerView* _horizontalPencilPlatterContainerView;
	PNPPencilHorizontalPresentationContainerView* _horizontalPresentationPencilContainerView;
	PNPPencilView* _horizontalPencilView;
	PNPChargingStatusView* _horizontalChargingStatusView;
	BOOL _showingChargingUI;
	PNPPlatterTransitioningDelegate* _platterTransitioningDelegate;
	BOOL _inWizard;
	UIAlertController* _alertVC;
	NSTimer* _initialTimer;
	double _spinnerElapsedTime;
	NSTimer* _timeoutTimer;
	PNPDeviceState* _deviceState;
	BOOL _viewDidAppearCalled;
	BOOL _viewRequestsDismissCalled;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CGPoint _animationTranslation;
	id<PNPPlatterViewControllerPlatterDelegate> platterDelegate;
	id<PNPViewControllerAppearanceDelegate> appearanceDelegate;
	id<PNPPairingViewControllerDelegate> _delegate;
	long long _pairingViewControllerState;

}

@property (assign,nonatomic) long long pairingViewControllerState;                                            //@synthesize pairingViewControllerState=_pairingViewControllerState - In the implementation block
@property (assign,nonatomic,__weak) id<PNPPairingViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredEdge; 
@property (assign,nonatomic,__weak) id<PNPPlatterViewControllerPlatterDelegate> platterDelegate; 
@property (nonatomic,readonly) double preferredCornerRadius; 
@property (nonatomic,copy) PNPDeviceState * deviceState; 
@property (assign,nonatomic,__weak) id<PNPViewControllerAppearanceDelegate> appearanceDelegate; 
-(id<PNPPairingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PNPPairingViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)_updatePreferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_orientationChanged:(double)arg1 ;
-(void)setAppearanceDelegate:(id<PNPViewControllerAppearanceDelegate>)arg1 ;
-(id<PNPViewControllerAppearanceDelegate>)appearanceDelegate;
-(PNPDeviceState *)deviceState;
-(void)_cancelTimeoutTimer;
-(void)setDeviceState:(PNPDeviceState *)arg1 ;
-(long long)_dimmingState;
-(unsigned long long)preferredEdge;
-(id<PNPPlatterViewControllerPlatterDelegate>)platterDelegate;
-(void)setPlatterDelegate:(id<PNPPlatterViewControllerPlatterDelegate>)arg1 ;
-(double)preferredCornerRadius;
-(void)didCompleteOneRevolution;
-(void)_performAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didTapOnConnectButton;
-(void)_offsetContainerViewsIfNecessary;
-(unsigned long long)_edgeToStickToPort;
-(void)_chargingStatusViewSetNeedsLayout;
-(id)_currentPlatterContainerView;
-(void)_updatePlatterContainerView:(id)arg1 toPreferredCornerRadius:(double)arg2 edge:(unsigned long long)arg3 ;
-(void)_wizardViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_chargingUIViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_spinningPencilViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateSubviewDeviceStateForContainerView:(id)arg1 ;
-(void)_updateForSize:(CGSize)arg1 ;
-(long long)pairingViewControllerState;
-(void)_startConnectingUITimer;
-(void)_showConnectingAnimationUI;
-(void)_centerContainerViews;
-(void)_transitionToWizardBySlideOutAndPresent;
-(void)_transitionPairingViewToWizardByMovingPlatter;
-(void)_actuallyTransitionToChargingBySlideOutAndPresent;
-(void)_actuallyTransitionToChargingByMovingPlatter;
-(void)_chargingStatusViewSetIsTransitioningToBatteryUI:(BOOL)arg1 ;
-(void)_chargingStatusViewUpdateConstraints;
-(void)viewRequestsDismiss:(id)arg1 ;
-(void)_chargingStatusViewHostsSetupChargingViews;
-(void)_chargingStatusViewHostsSetShowsChargingStatusView:(BOOL)arg1 ;
-(void)_chargingStatusViewHostsLayoutIfNeeded;
-(void)_chargingStatusViewSetShowCharging:(BOOL)arg1 ;
-(void)_chargingStatusViewSetChargingState:(long long)arg1 ;
-(void)_dismissChargingAndPresentSpinningPencilWithDimmingState:(long long)arg1 ;
-(void)_morphToSpinningPencilWithDimmingState:(long long)arg1 ;
-(void)_chargingStatusViewHostsTeardownChargingViews;
-(void)_hideOrShowAllContainerViewsIfNeeded;
-(void)_actuallyTransitionToWizard;
-(void)_actuallyTransitionToCharging;
-(void)_transitionToChargingFromSpinner;
-(void)_chargingStatusViewSetDeviceState:(id)arg1 ;
-(void)_hideOrShowContainerViewIfNeeded:(id)arg1 ;
-(void)_chargingStatusViewLayoutIfNeeded;
-(void)pairingFailed;
-(void)setPairingViewControllerState:(long long)arg1 ;
-(void)_updatePillUIAnimated:(BOOL)arg1 ;
-(void)_resetTimeoutTimer;
-(void)pairingStartedWithDimmingState:(long long)arg1 ;
-(void)didTapOnCancelButton;
-(void)_actuallyTransitionToSpinningPlatterWithDimmingState:(long long)arg1 ;
-(void)_transitionToWizard;
-(void)_resetTimerForWizard;
-(void)_transitionToChargingFrom:(long long)arg1 ;
-(double)_translationAmountForDismiss;
-(void)_updateAnimationTranslation;
-(void)intrinsicContentSizeDidChangeForView:(id)arg1 ;
-(id)_effectivePencilView;
-(void)showPairingPrompt;
-(void)showGenericBatteryUI;
-(void)pairingStarted;
-(void)showPairingPromptAlert;
-(void)pairingStartedWithDimming:(BOOL)arg1 ;
-(void)pairingSucceeded;
-(void)pairingSucceededSubsequently;
@end

