/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NFSession;

@interface PKPaymentSession : NSObject {

	NSObject*<OS_dispatch_queue> _internalSessionSerialQueue;
	NFSession* _internalSession;

}

@property (nonatomic,readonly) unsigned long long lifecycleState; 
+(id)startApplePayTrustSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)startInAppSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startContactlessInterfaceSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startReaderSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startPeerPaymentSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startApplePayTrustSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startInAppSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)startContactlessInterfaceSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)startReaderSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)startPeerPaymentSessionWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)lifecycleState;
-(id)init;
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
-(void)performBlockSyncOnInternalSession:(/*^block*/id)arg1 ;
-(void)invalidateSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)performBlockAsyncOnInternalSession:(/*^block*/id)arg1 ;
-(void)invalidateSession;
@end

