/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@interface IMDCKAttachmentSyncCKOperationFactory : NSObject
+(id)_desiredKeysArrayForType:(long long)arg1 ;
-(id)_operationGroupWithName:(id)arg1 ;
-(id)fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 operationGroupName:(id)arg3 ;
-(id)fetchAttachmentZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 operationGroupName:(id)arg5 ;
-(id)saveAttachmentsCKOperationUsingRecordsToSave:(id)arg1 ;
-(id)deleteAttachmentCKOperationUsingRecordIDstoDelete:(id)arg1 ;
-(id)_attachmentFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 ;
-(BOOL)_defaultsSayWeHaveSyncedOnce;
@end

