/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator;

@interface PDDeviceRegistrationServiceCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _registrationTasks;
	PDPaymentWebServiceCoordinator* _paymentWebServiceCoordinator;
	PDPeerPaymentWebServiceCoordinator* _peerPaymentWebServiceCoordinator;

}

@property (nonatomic,readonly) PDPaymentWebServiceCoordinator * paymentWebServiceCoordinator;                      //@synthesize paymentWebServiceCoordinator=_paymentWebServiceCoordinator - In the implementation block
@property (nonatomic,readonly) PDPeerPaymentWebServiceCoordinator * peerPaymentWebServiceCoordinator;              //@synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithPaymentWebServiceCoordinator:(id)arg1 peerPaymentWebServiceCoordinator:(id)arg2 ;
-(void)_handlePaymentWebServiceContextChanged:(id)arg1 ;
-(void)performDeviceRegistrationForReason:(id)arg1 action:(long long)arg2 forceApplePayRegister:(BOOL)arg3 forcePeerPaymentRegister:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_performDeviceRegistrationWithReason:(id)arg1 forceApplePayRegister:(BOOL)arg2 forcePeerPaymentRegister:(BOOL)arg3 ;
-(void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)arg1 ;
-(void)_performDeviceRegistrationWithReason:(id)arg1 forceApplePayRegister:(BOOL)arg2 forcePeerPaymentRegister:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(PDPaymentWebServiceCoordinator *)paymentWebServiceCoordinator;
-(PDPeerPaymentWebServiceCoordinator *)peerPaymentWebServiceCoordinator;
-(void)_peerPaymentRegisterWithURL:(id)arg1 paymentWebService:(id)arg2 forceRegister:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_canAutomaticallyRegisterWithWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_shouldAttemptBackgroundPeerPaymentRegistration;
-(void)notePasscodeChanged;
@end

