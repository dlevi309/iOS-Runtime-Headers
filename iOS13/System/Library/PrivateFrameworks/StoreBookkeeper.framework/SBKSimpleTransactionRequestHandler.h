/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(BOOL)canceled;
-(void)timeout;
-(void)cancelWithError:(id)arg1 ;
-(id)initWithBagContext:(id)arg1 ;
-(SBKTransactionController *)transactionController;
-(void)scheduleTransaction:(id)arg1 finishedBlock:(/*^block*/id)arg2 ;
@end

