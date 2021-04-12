/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@protocol FBSynchronizedTransactionDelegate <NSObject>
@required
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
-(void)synchronizedTransactionReadyToCommit:(id)arg1;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;

@end

