/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKContinuityPaymentServiceDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, PKContinuityPaymentCoordinatorDelegate;
@class PKContinuityPaymentService, NSObject, PKRemotePaymentRequest, NSString;

@interface PKContinuityPaymentCoordinator : NSObject <PKContinuityPaymentServiceDelegate> {

	PKContinuityPaymentService* _continuityPaymentService;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_source> _deviceUpdateTimeoutTimer;
	NSObject*<OS_dispatch_source> _deviceTotalUpdateTimeoutTimer;
	BOOL _isUpdatingDevices;
	PKRemotePaymentRequest* _currentRemotePaymentRequest;
	long long _messageSendCount;
	long long _messageSendCompleteCount;
	id<PKContinuityPaymentCoordinatorDelegate> _delegate;
	double _updatePaymentDeviceTimeout;

}

@property (assign,nonatomic,__weak) id<PKContinuityPaymentCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double updatePaymentDeviceTimeout;                                       //@synthesize updatePaymentDeviceTimeout=_updatePaymentDeviceTimeout - In the implementation block
@property (nonatomic,readonly) PKRemotePaymentRequest * currentRemotePaymentRequest; 
@property (getter=isAwaitingReply,nonatomic,readonly) BOOL awaitingReply; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKContinuityPaymentCoordinatorDelegate>)delegate;
-(void)_deviceUpdateTimerDidTimeout;
-(void)_deviceUpdateTotalTimerDidTimeout;
-(void)_resetRequest;
-(void)_queue_sendPaymentResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_send_didReceivePayment:(id)arg1 ;
-(void)_send_didReceiveUpdatedPaymentDevice:(id)arg1 ;
-(void)_send_didReceiveCancellation;
-(void)_send_didTimeoutUpdatePaymentDevices;
-(BOOL)isAwaitingReply;
-(void)setUpdatePaymentDeviceTimeout:(double)arg1 ;
-(void)_send_didTimeoutTotalUpdatePaymentDevices;
-(id)initWithContinuityPaymentService:(id)arg1 ;
-(PKRemotePaymentRequest *)currentRemotePaymentRequest;
-(void)updatePaymentDevices;
-(void)sendPaymentClientUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendPaymentResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelRemotePaymentRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)didReceiveUpdatedPaymentDevices:(id)arg1 ;
-(void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg1 ;
-(double)updatePaymentDeviceTimeout;
-(void)setDelegate:(id<PKContinuityPaymentCoordinatorDelegate>)arg1 ;
-(void)sendRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

