/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class SKPaymentQueueClient;

@interface SKRequest : NSObject {

	id _requestInternal;

}

@property (nonatomic,copy) SKPaymentQueueClient * paymentQueueClient; 
@property (assign,nonatomic,__weak) id<SKRequestDelegate> delegate; 
-(id)init;
-(id<SKRequestDelegate>)delegate;
-(void)setDelegate:(id<SKRequestDelegate>)arg1 ;
-(void)cancel;
-(void)start;
-(void)_start;
-(void)_endBackgroundTask;
-(SKPaymentQueueClient *)paymentQueueClient;
-(void)_shutdownRequest;
-(void)_startWithMessage:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)_beginBackgroundTask;
-(void)setPaymentQueueClient:(SKPaymentQueueClient *)arg1 ;
@end

