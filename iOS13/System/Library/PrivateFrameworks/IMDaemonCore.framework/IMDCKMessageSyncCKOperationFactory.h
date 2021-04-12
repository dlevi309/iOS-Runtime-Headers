/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@interface IMDCKMessageSyncCKOperationFactory : NSObject
-(id)_messageFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 ;
-(id)_operationGroupWithName:(id)arg1 ;
-(id)_fetchOptionsDictionaryWithFetchOptions:(id)arg1 andZoneID:(id)arg2 ;
-(id)fetchMessageZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 operationGroupName:(id)arg4 ;
-(id)saveMessagesCKOperationUsingRecordsToSave:(id)arg1 operationGroupName:(id)arg2 ;
-(id)deleteMessageCKOperationUsingRecordIDstoDelete:(id)arg1 ;
-(id)fetchArchivedRecordsOperationWithSyncToken:(id)arg1 zoneID:(id)arg2 ;
@end

