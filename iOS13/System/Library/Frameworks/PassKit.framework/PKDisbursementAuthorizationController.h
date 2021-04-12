/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>

@protocol PKDisbursementAuthorizationControllerDelegate;
@class PKPaymentAuthorizationCoordinator, PKDisbursementRequest, NSString;

@interface PKDisbursementAuthorizationController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {

	PKDisbursementAuthorizationController* _retainSelf;
	PKPaymentAuthorizationCoordinator* _authController;
	PKDisbursementRequest* _disbursementRequest;
	id<PKDisbursementAuthorizationControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<PKDisbursementAuthorizationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsDisbursements;
-(id<PKDisbursementAuthorizationControllerDelegate>)delegate;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeDisbursementVoucher:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithDisbursementRequest:(id)arg1 delegate:(id)arg2 ;
-(void)authorizeDisbursementWithCompletion:(/*^block*/id)arg1 ;
@end

