/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@interface IMDCKMessageSyncCKOperationFactory : NSObject
-(id)_messageFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 ;
-(id)_operationGroupWithName:(id)arg1 ;
-(id)_fetchOptionsDictionaryWithFetchOptions:(id)arg1 andZoneID:(id)arg2 ;
-(id)fetchMessageZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 operationGroupName:(id)arg4 activity:(id)arg5 ;
-(id)saveMessagesCKOperationUsingRecordsToSave:(id)arg1 operationGroupName:(id)arg2 activity:(id)arg3 ;
-(id)deleteMessageCKOperationUsingRecordIDstoDelete:(id)arg1 activity:(id)arg2 ;
-(id)fetchArchivedRecordsOperationWithSyncToken:(id)arg1 zoneID:(id)arg2 activity:(id)arg3 ;
@end

