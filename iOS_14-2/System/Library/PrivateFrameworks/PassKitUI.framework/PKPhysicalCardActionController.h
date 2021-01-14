/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>

@protocol PKPhysicalCardActionControllerDelegate;
@class PKAccountService, PKPaymentDevice, PKAccountWebServicePhysicalCardActionRequest, NSError, PKPaymentAuthorizationCoordinator, PKAccount, NSString;

@interface PKPhysicalCardActionController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {

	PKAccountService* _accountService;
	id<PKPhysicalCardActionControllerDelegate> _delegate;
	PKPaymentDevice* _paymentDevice;
	PKAccountWebServicePhysicalCardActionRequest* _lastActionRequest;
	BOOL _lastActionSuccess;
	NSError* _lastActionError;
	PKPaymentAuthorizationCoordinator* _authorizationCoordinator;
	PKAccount* _account;
	long long _state;

}

@property (nonatomic,readonly) PKAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) long long state;                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKAccount *)account;
-(void)_performApplePayTrustSignatureRequestWithSignature:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(BOOL)_canPerformActionWithState:(long long)arg1 ;
-(void)_performAction:(id)arg1 onPhysicalCard:(id)arg2 ;
-(void)_transitionToState:(long long)arg1 withError:(id)arg2 ;
-(id)_generatePaymentRequestWithSignatureRequest:(id)arg1 ;
-(void)enablePhysicalCard:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_presentApplePayTrustWithPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAccountService:(id)arg1 account:(id)arg2 delegate:(id)arg3 ;
-(void)activatePhysicalCard:(id)arg1 withActivationCode:(id)arg2 ;
-(void)activatePhysicalCardWithoutActivationCode:(id)arg1 ;
-(void)disablePhysicalCard:(id)arg1 ;
-(void)cancelPhysicalCard:(id)arg1 ;
-(void)replacePhysicalCard:(id)arg1 withReason:(unsigned long long)arg2 ;
-(long long)state;
@end

