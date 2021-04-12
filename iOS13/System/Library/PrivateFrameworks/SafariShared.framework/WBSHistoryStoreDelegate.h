/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
@optional
-(BOOL)historyStoreShouldScheduleMaintenance:(id)arg1;

@required
-(void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
-(void)historyStore:(id)arg1 didAddVisits:(id)arg2;
-(void)historyStore:(id)arg1 didRemoveItems:(id)arg2;
-(void)historyStore:(id)arg1 didRemoveVisits:(id)arg2;

@end

