/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKAccountProvisioningControllerDelegate.h>
#import <libobjc.A.dylib/PKFeatureDisplayableErrorProvider.h>
#import <libobjc.A.dylib/PKSetupFlowControllerProtocol.h>

@protocol PKPaymentSetupViewControllerDelegate, PKSetupFlowControllerProtocol, PKAccountFlowControllerDelegate;
@class PKAccountProvisioningController, PKAccount, PKAccountService, PKAssertion, PKAccountCredential, PKPaymentProvisioningController, NSString;

@interface PKAccountFlowController : NSObject <PKAccountProvisioningControllerDelegate, PKFeatureDisplayableErrorProvider, PKSetupFlowControllerProtocol> {

	PKAccountProvisioningController* _accountProvisioningController;
	PKAccount* _account;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	long long _context;
	PKAccountService* _accountService;
	unsigned long long _postProvisoningContentIndex;
	unsigned long long _madeDefault;
	BOOL _endedProvisioningFlow;
	PKAssertion* _notificationSupressionAssertion;
	BOOL _isMerchantApp;
	BOOL _shownMoreInfoItems;
	unsigned long long _operations;
	PKAccountCredential* _accountCredential;
	PKPaymentProvisioningController* _provisioningController;
	id<PKSetupFlowControllerProtocol> _parentFlowController;
	id<PKAccountFlowControllerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long operations;                                                //@synthesize operations=_operations - In the implementation block
@property (nonatomic,readonly) PKAccountCredential * accountCredential;                                      //@synthesize accountCredential=_accountCredential - In the implementation block
@property (nonatomic,readonly) PKPaymentProvisioningController * provisioningController;                     //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,readonly) PKAccountProvisioningController * accountProvisioningController; 
@property (nonatomic,retain) id<PKSetupFlowControllerProtocol> parentFlowController;                         //@synthesize parentFlowController=_parentFlowController - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountFlowControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)displayableErrorForError:(id)arg1 featureIdentifier:(unsigned long long)arg2 genericErrorTitle:(id)arg3 genericErrorMessage:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(id<PKAccountFlowControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAccountFlowControllerDelegate>)arg1 ;
-(unsigned long long)operations;
-(PKAccountCredential *)accountCredential;
-(void)accountProvisioningController:(id)arg1 displayableError:(id)arg2 ;
-(void)accountProvisioningControllerUpdatedState:(id)arg1 ;
-(void)nextViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(PKPaymentProvisioningController *)provisioningController;
-(void)_invalidateAssertion;
-(void)_acquireAssertion;
-(id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4 operations:(unsigned long long)arg5 ;
-(void)setParentFlowController:(id<PKSetupFlowControllerProtocol>)arg1 ;
-(id)firstAccountViewController;
-(id<PKSetupFlowControllerProtocol>)parentFlowController;
-(unsigned long long)_fitleredOperations:(unsigned long long)arg1 account:(id)arg2 context:(long long)arg3 ;
-(void)_nextPostProvisioningViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(PKAccountProvisioningController *)accountProvisioningController;
-(void)_requestPresentationOfActiviationViewControllerShowingMadeDefault:(BOOL)arg1 ;
-(void)_checkAccountProvisioningControllerState:(id)arg1 ;
-(void)_accountProvisoningControllerRequiresNextViewController:(id)arg1 ;
-(void)performInitalOperations;
-(void)makeAccountPassDefault:(BOOL)arg1 ;
-(void)endProvisioningFlow;
-(void)_resetPostProvisioningContent;
-(void)authAndDecryptWithVirtualCard:(id)arg1 authenticationReason:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

