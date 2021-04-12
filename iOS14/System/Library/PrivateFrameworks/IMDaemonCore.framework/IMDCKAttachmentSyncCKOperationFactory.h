/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@interface IMDCKAttachmentSyncCKOperationFactory : NSObject
+(id)_desiredKeysArrayForType:(long long)arg1 ;
-(id)_operationGroupWithName:(id)arg1 ;
-(id)fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 operationGroupName:(id)arg3 activity:(id)arg4 ;
-(id)fetchAttachmentZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 operationGroupName:(id)arg5 activity:(id)arg6 ;
-(id)saveAttachmentsCKOperationUsingRecordsToSave:(id)arg1 activity:(id)arg2 ;
-(id)deleteAttachmentCKOperationUsingRecordIDstoDelete:(id)arg1 activity:(id)arg2 ;
-(id)_attachmentFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 ;
-(BOOL)_defaultsSayWeHaveSyncedOnce;
@end

