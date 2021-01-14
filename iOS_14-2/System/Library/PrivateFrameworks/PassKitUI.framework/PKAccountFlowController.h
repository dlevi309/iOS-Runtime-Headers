/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)operations;
-(id)init;
-(id<PKAccountFlowControllerDelegate>)delegate;
-(PKAccountCredential *)accountCredential;
-(id<PKSetupFlowControllerProtocol>)parentFlowController;
-(void)setDelegate:(id<PKAccountFlowControllerDelegate>)arg1 ;
-(void)accountProvisioningController:(id)arg1 displayableError:(id)arg2 ;
-(void)accountProvisioningControllerUpdatedState:(id)arg1 ;
-(PKPaymentProvisioningController *)provisioningController;
-(unsigned long long)_fitleredOperations:(unsigned long long)arg1 account:(id)arg2 context:(long long)arg3 ;
-(PKAccountProvisioningController *)accountProvisioningController;
-(void)_nextPostProvisioningViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestPresentationOfActiviationViewControllerShowingMadeDefault:(BOOL)arg1 ;
-(void)_checkAccountProvisioningControllerState:(id)arg1 ;
-(void)_accountProvisioningControllerRequiresNextViewController:(id)arg1 ;
-(void)performInitalOperations;
-(void)makeAccountPassDefault:(BOOL)arg1 ;
-(void)endProvisioningFlow;
-(void)_resetPostProvisioningContent;
-(id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4 operations:(unsigned long long)arg5 ;
-(void)setParentFlowController:(id<PKSetupFlowControllerProtocol>)arg1 ;
-(id)firstAccountViewController;
-(void)authAndDecryptWithVirtualCard:(id)arg1 authenticationReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)nextViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidateAssertion;
-(void)_acquireAssertion;
-(void)dealloc;
@end

