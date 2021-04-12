/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/

#import <StoreBookkeeper/SBKRequestHandler.h>

@class SBKTransactionController;

@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler {

	BOOL _canceled;
	SBKTransactionController* _transactionController;

}

@property (nonatomic,readonly) SBKTransactionController * transactionController;              //@synthesize transactionController=_transactionController - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                                                 //@synthesize canceled=_canceled - In the implementation block
-(void)cancelWithError:(id)arg1 ;
-(BOOL)canceled;
-(void)timeout;
-(id)initWithBagContext:(id)arg1 ;
-(void)cancel;
-(SBKTransactionController *)transactionController;
-(void)scheduleTransaction:(id)arg1 finishedBlock:(/*^block*/id)arg2 ;
@end

