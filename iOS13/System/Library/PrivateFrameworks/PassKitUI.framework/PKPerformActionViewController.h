/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKPerformActionViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>

@protocol PKPaymentDataProvider, PKPerformActionView, PKPerformActionViewControllerDelegate;
@class PKPerformActionPassView, PKPerformActionLoadingView, PKServiceProviderPurchase, UIBarButtonItem, PKPaymentPass, PKPaymentPassAction, UIView, PKPaymentWebService, NSString;

@interface PKPerformActionViewController : UIViewController <PKPerformActionViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {

	PKPerformActionPassView* _passView;
	PKPerformActionLoadingView* _loadingView;
	id<PKPaymentDataProvider> _paymentDataProvider;
	BOOL _remoteContentFetched;
	BOOL _fieldsVerified;
	PKServiceProviderPurchase* _completedPurchase;
	UIBarButtonItem* _button;
	UIBarButtonItem* _spinner;
	PKPaymentPass* _pass;
	PKPaymentPassAction* _action;
	UIView*<PKPerformActionView> _actionView;
	PKPaymentWebService* _webService;
	id<PKPerformActionViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                                                 //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPaymentPassAction * action;                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIView*<PKPerformActionView> actionView;                              //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * webService;                                       //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic,__weak) id<PKPerformActionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alertControllerForUnableReason:(unsigned long long)arg1 action:(id)arg2 displayableError:(id)arg3 addCardActionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(id<PKPerformActionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPerformActionViewControllerDelegate>)arg1 ;
-(PKPaymentPassAction *)action;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIView*<PKPerformActionView>)actionView;
-(void)_cancelButtonPressed:(id)arg1 ;
-(PKPaymentPass *)pass;
-(PKPaymentWebService *)webService;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateFirstResponder;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)_rightBarButtonPressed:(id)arg1 ;
-(void)shakeCard;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)_reloadActionView;
-(id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3 ;
-(void)setRightBarButtonEnabled:(BOOL)arg1 ;
-(id)initWithPass:(id)arg1 action:(id)arg2 ;
-(void)_fetchRemoteContentIfNeeded;
-(void)_showLoadingView:(BOOL)arg1 ;
-(void)_showGenericErrorAlert:(/*^block*/id)arg1 ;
-(id)_actionViewForPass:(id)arg1 action:(id)arg2 ;
-(BOOL)_shouldPresentPaymentRequest:(long long)arg1 ;
-(void)_canPerformPaymentWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentPaymentSetupControllerWithAllowedPaymentNetworks:(id)arg1 ;
@end

