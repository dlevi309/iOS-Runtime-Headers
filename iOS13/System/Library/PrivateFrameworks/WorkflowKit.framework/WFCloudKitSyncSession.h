/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class CKContainer, CKDatabase, CKRecordZoneID, CKRecordID;

@interface WFCloudKitSyncSession : NSObject {

	CKContainer* _container;
	CKDatabase* _database;
	CKRecordZoneID* _recordZoneID;
	CKRecordID* _userRecordID;

}

@property (nonatomic,readonly) CKContainer * container;                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * recordZoneID;              //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,readonly) CKRecordID * userRecordID;                  //@synthesize userRecordID=_userRecordID - In the implementation block
+(void)initialize;
+(void)setSyncEnabled:(BOOL)arg1 ;
+(void)setVoiceShortcutMigrationDidSync:(BOOL)arg1 ;
+(BOOL)voiceShortcutMigrationDidSync;
+(BOOL)voiceShortcutMigrationDidRun;
+(void)setIgnoresUserDeletedZoneErrors:(BOOL)arg1 ;
+(BOOL)ignoresUserDeletedZoneErrors;
+(id)mergePreviousOrdering:(id)arg1 incomingOrdering:(id)arg2 outgoingOrdering:(id)arg3 sendOutgoingChange:(BOOL*)arg4 saveLocalChange:(BOOL*)arg5 ;
+(id)checkForConflictsBetweenIncomingChanges:(id)arg1 incomingDeletes:(id)arg2 outgoingChanges:(id)arg3 outgoingDeletes:(id)arg4 incomingOrderedWorkflowIDs:(id)arg5 outgoingOrderedWorkflowIDs:(id)arg6 detectingDuplicateWorkflowsInDatabase:(id)arg7 outWorkflowIDsToRename:(id*)arg8 outLocalWorkflowsToDelete:(id*)arg9 ;
+(BOOL)isSyncEnabled;
+(BOOL)isSyncOrderingEnabled;
+(void)setVoiceShortcutMigrationDidRun:(BOOL)arg1 ;
-(id)init;
-(CKContainer *)container;
-(CKDatabase *)database;
-(CKRecordID *)userRecordID;
-(CKRecordZoneID *)recordZoneID;
-(void)startSubscriptionForRemoteChanges;
-(void)syncDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)applyConflictResolution:(id)arg1 inDatabase:(id)arg2 ;
-(void)syncDatabase:(id)arg1 includingOrdering:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)fetchCurrentAccountInfo;
-(id)accountNameForSyncToken;
-(void)clearSyncStateForWorkflows:(id)arg1 inDatabase:(id)arg2 ;
-(BOOL)createRecordZoneIfNecessaryWithDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)fetchChangesFromCloudKitSinceChangeToken:(id)arg1 outChangedWorkflowRecords:(out id*)arg2 outDeleted:(out id*)arg3 outOrderedWorkflowIDs:(out id*)arg4 outNewServerChangeToken:(out id*)arg5 error:(id*)arg6 ;
-(void)pruneIncomingChanges:(id)arg1 deletes:(id)arg2 inDatabase:(id)arg3 outWorkflowsToReupload:(id*)arg4 ;
-(BOOL)buildOutgoingChangesFromDatabase:(id)arg1 sendAllChanges:(BOOL)arg2 outChangedWorkflows:(out id*)arg3 outPreSyncHashes:(out id*)arg4 outDeletedWorkflowIDs:(out id*)arg5 outOrderedWorkflowIDs:(out id*)arg6 ;
-(BOOL)saveIncomingChanges:(id)arg1 incomingDeletes:(id)arg2 conflicts:(id)arg3 mergedOrderedWorkflowIDs:(id)arg4 sentChanges:(id)arg5 sentDeletes:(id)arg6 sentOrdering:(BOOL)arg7 saveOrderingLocally:(BOOL)arg8 isOrderingEnabled:(BOOL)arg9 localWorkflowsToDelete:(id)arg10 workflowIDsToRename:(id)arg11 preSyncHashes:(id)arg12 serverChangeToken:(id)arg13 inDatabase:(id)arg14 ;
-(BOOL)pushChangesToCloudKit:(id)arg1 deletes:(id)arg2 ordering:(id)arg3 outSuccessfulChanges:(out id*)arg4 outSuccessfulDeletes:(out id*)arg5 outOrderingSaved:(BOOL*)arg6 database:(id)arg7 error:(id*)arg8 ;
@end

