/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSceneLayoutWorkspaceTransactionDelegate <NSObject>
@required
-(id)createSceneEntityForHandle:(id)arg1;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2;
-(void)transactionWillBeginLayoutTransition:(id)arg1;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2;

@end

