/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@protocol SBKTransactionControllerDelegate <NSObject>
@optional
-(BOOL)transactionController:(id)arg1 shouldScheduleTransaction:(id)arg2;

@required
-(BOOL)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3;
-(void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3;
-(void)transactionController:(id)arg1 transactionDidFinish:(id)arg2;

@end

