/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol SYSessionDelegate <NSObject>
@optional
-(void)resetDataStoreForSyncSession:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)syncSession:(id)arg1 rollbackChangesWithError:(id*)arg2;
-(BOOL)syncSession:(id)arg1 restartChanges:(id*)arg2;
-(void)syncSession:(id)arg1 successfullySynced:(id)arg2;

@required
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;

@end

