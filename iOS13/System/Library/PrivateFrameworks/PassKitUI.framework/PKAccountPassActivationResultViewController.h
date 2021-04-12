/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKAccountFlowControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKAccountFlowController, UIViewController, CLInUseAssertion, UINotificationFeedbackGenerator, CLLocationManager, NSString;

@interface PKAccountPassActivationResultViewController : PKExplanationViewController <PKAccountFlowControllerDelegate> {

	PKAccountFlowController* _accountController;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	unsigned long long _featureIdentifier;
	long long _setupContext;
	UIViewController* _nextViewController;
	CLInUseAssertion* _inUseAssertion;
	UINotificationFeedbackGenerator* _cardAddedFeedbackGenerator;
	CLLocationManager* _locationManager;
	BOOL _didAddToAmp;
	BOOL _didMakeAccountPassDefault;
	BOOL _showingLoadingIndicator;

}

@property (assign,nonatomic) BOOL didAddToAmp;                            //@synthesize didAddToAmp=_didAddToAmp - In the implementation block
@property (assign,nonatomic) BOOL didMakeAccountPassDefault;              //@synthesize didMakeAccountPassDefault=_didMakeAccountPassDefault - In the implementation block
@property (assign,nonatomic) BOOL showingLoadingIndicator;                //@synthesize showingLoadingIndicator=_showingLoadingIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_updateUI;
-(void)_presentViewController:(id)arg1 ;
-(void)_handleNextStep;
-(void)_terminateSetupFlow;
-(id)initWithAccountFlowController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(void)setShowingLoadingIndicator:(BOOL)arg1 ;
-(void)setDidMakeAccountPassDefault:(BOOL)arg1 ;
-(void)accountFlowController:(id)arg1 requestsPresentationOfDisplayableError:(id)arg2 ;
-(void)accountFlowController:(id)arg1 requestsPresentationOfViewController:(id)arg2 ;
-(void)setDidAddToAmp:(BOOL)arg1 ;
-(BOOL)_willPerformProvisioningActions;
-(void)_presentDisplayableError:(id)arg1 ;
-(void)_showActivationSpinner:(BOOL)arg1 ;
-(void)_updateForLoading;
-(void)_updateForMadeDefault;
-(void)_updateForSetupLater;
-(id)_localizedStringKeyForPerformedOperationsAndMadeDefault:(BOOL)arg1 ;
-(id)_setupLaterBodyString;
-(BOOL)didAddToAmp;
-(BOOL)didMakeAccountPassDefault;
-(BOOL)showingLoadingIndicator;
@end

