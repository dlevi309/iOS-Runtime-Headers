/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationHostProtocol.h>

@protocol OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol;
@class NSObject, PKPaymentAuthorizationCoordinator, NSString;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<PKPaymentAuthorizationCoordinatorDelegate> _delegate;
	id<PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
	PKPaymentAuthorizationCoordinator* _controller;
	id<PKPaymentAuthorizationServiceProtocol> _serviceProxy;

}

@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationCoordinatorDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic) PKPaymentAuthorizationCoordinator * controller;                                           //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) id<PKPaymentAuthorizationServiceProtocol> serviceProxy;                                   //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<PKPaymentAuthorizationCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationCoordinatorDelegate>)arg1 ;
-(void)setController:(PKPaymentAuthorizationCoordinator *)arg1 ;
-(PKPaymentAuthorizationCoordinator *)controller;
-(id<PKPaymentAuthorizationCoordinatorPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<PKPaymentAuthorizationCoordinatorPrivateDelegate>)arg1 ;
-(id<PKPaymentAuthorizationServiceProtocol>)serviceProxy;
-(void)setServiceProxy:(id<PKPaymentAuthorizationServiceProtocol>)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(void)authorizationWillStart;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizeContext;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidAuthorizePurchase:(id)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursement:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1 ;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(void)authorizationDidPresent;
-(void)connectionDidOpen;
-(void)didEncounterAuthorizationEvent:(unsigned long long)arg1 ;
@end

