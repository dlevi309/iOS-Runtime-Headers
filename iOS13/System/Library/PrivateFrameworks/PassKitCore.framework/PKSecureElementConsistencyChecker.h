/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue, PKCloudStoreCoordinatorDelegate, PKSecureElementConsistencyCheckerDelegate;
@class NSObject, PKPaymentWebService;

@interface PKSecureElementConsistencyChecker : NSObject {

	NSObject*<OS_dispatch_queue> _processingQueue;
	id<PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinatorDelegate;
	id<PKSecureElementConsistencyCheckerDelegate> _delegate;
	PKPaymentWebService* _paymentWebService;

}

@property (assign,nonatomic) id<PKSecureElementConsistencyCheckerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                             //@synthesize paymentWebService=_paymentWebService - In the implementation block
+(long long)cleanupActionsForDeviceCredential:(id)arg1 withAssociatedPassCredential:(id)arg2 ;
+(long long)cleanupActionsForApplet:(id)arg1 withAssociatedPaymentApplication:(id)arg2 ;
+(id)checkConsistencyWithDeviceState:(id)arg1 registeredRegions:(id)arg2 ;
+(BOOL)isCheckingConsistencyForSecureElementID:(id)arg1 ;
-(id<PKSecureElementConsistencyCheckerDelegate>)delegate;
-(void)setDelegate:(id<PKSecureElementConsistencyCheckerDelegate>)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(void)queue_startWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_downloadPasses;
-(void)_rescheduleWithBackoff;
-(id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 ;
-(id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2 ;
@end

