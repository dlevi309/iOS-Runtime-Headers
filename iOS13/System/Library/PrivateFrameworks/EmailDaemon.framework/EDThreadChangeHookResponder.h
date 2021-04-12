/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDThreadChangeHookResponder <NSObject>
@optional
-(void)persistenceIsAddingThreadWithObjectID:(id)arg1 journaled:(BOOL)arg2 generationWindow:(id)arg3;
-(void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2 generationWindow:(id)arg3;
-(void)persistenceIsDeletingThreadWithObjectID:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceDidFinishThreadUpdates;
-(void)persistenceWillResetThreadScope:(id)arg1 denyBlock:(/*^block*/id)arg2;

@end

