/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
@optional
-(BOOL)historyStoreShouldScheduleMaintenance:(id)arg1;

@required
-(void)historyStoreWasCleared:(id)arg1;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
-(void)historyStore:(id)arg1 didRemoveItems:(id)arg2;
-(void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;
-(void)historyStore:(id)arg1 didRemoveHostnames:(id)arg2;
-(void)historyStore:(id)arg1 didRemoveVisits:(id)arg2;
-(void)historyStore:(id)arg1 didAddVisits:(id)arg2;

@end

