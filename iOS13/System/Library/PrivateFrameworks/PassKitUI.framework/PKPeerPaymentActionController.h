/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAddBankAccountInformationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>

@protocol PKPeerPaymentActionControllerDelegate;
@class PKPaymentPass, PKPeerPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentTermsController, PKBankAccountInformation, NSString;

@interface PKPeerPaymentActionController : NSObject <PKPaymentSetupViewControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKExplanationViewControllerDelegate> {

	PKPaymentPass* _pass;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentAccount* _account;
	long long _context;
	PKPeerPaymentTermsController* _termsController;
	BOOL _performingAction;
	unsigned long long _controllerAction;
	id<PKPeerPaymentActionControllerDelegate> _delegate;
	PKBankAccountInformation* _bankInformation;

}

@property (assign,nonatomic) unsigned long long controllerAction;                                      //@synthesize controllerAction=_controllerAction - In the implementation block
@property (nonatomic,__weak,readonly) id<PKPeerPaymentActionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKBankAccountInformation * bankInformation;                             //@synthesize bankInformation=_bankInformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformPeerPaymentAction:(unsigned long long)arg1 account:(id)arg2 unableReason:(unsigned long long*)arg3 displayableError:(id*)arg4 ;
+(id)alertControllerForPeerPaymentActionUnableReason:(unsigned long long)arg1 displayableError:(id)arg2 addCardActionHandler:(/*^block*/id)arg3 ;
+(id)displayableErrorForPeerPaymentAction:(unsigned long long)arg1 andReason:(unsigned long long)arg2 ;
-(id<PKPeerPaymentActionControllerDelegate>)delegate;
-(void)_handleError:(id)arg1 ;
-(void)_updateAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 webService:(id)arg2 context:(long long)arg3 delegate:(id)arg4 ;
-(void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1 ;
-(void)setControllerAction:(unsigned long long)arg1 ;
-(unsigned long long)controllerAction;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)_presentIdentityVerificationWithError:(id)arg1 ;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1 ;
-(void)performActionWithCurrencyAmount:(id)arg1 ;
-(void)presentAddDebitCardViewController;
-(PKBankAccountInformation *)bankInformation;
-(void)presentAddBankAccountViewController;
-(unsigned long long)_peerPaymentControllerModeForAction;
-(void)_peerPaymentActionHasCompletedWithState:(unsigned long long)arg1 ;
-(void)_presentTermsAndConditionsWithError:(id)arg1 ;
@end

