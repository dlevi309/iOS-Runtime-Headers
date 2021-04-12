/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSceneLayoutWorkspaceTransactionDelegate <NSObject>
@required
-(id)createSceneEntityForHandle:(id)arg1;
-(void)transactionWillBeginLayoutTransition:(id)arg1;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2;

@end

