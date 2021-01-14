/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class SKPaymentQueueClient;

@interface SKRequest : NSObject {

	id _requestInternal;

}

@property (nonatomic,copy) SKPaymentQueueClient * paymentQueueClient; 
@property (assign,nonatomic,__weak) id<SKRequestDelegate> delegate; 
-(void)setPaymentQueueClient:(SKPaymentQueueClient *)arg1 ;
-(id)init;
-(id<SKRequestDelegate>)delegate;
-(void)start;
-(void)_start;
-(void)_shutdownRequest;
-(void)setDelegate:(id<SKRequestDelegate>)arg1 ;
-(void)_beginBackgroundTask;
-(void)_endBackgroundTask;
-(void)cancel;
-(SKPaymentQueueClient *)paymentQueueClient;
-(void)_startWithMessage:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
@end

