/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@interface IMDCKChatSyncCKOperationFactory : NSObject
-(id)_chatSyncOperationGroupWithName:(id)arg1 ;
-(id)_chatFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 ;
-(id)_chatFetchRecordZoneChangesCKConfiguration;
-(id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 groupName:(id)arg4 ;
-(id)_chatWriteRecordsCKConfiguration;
-(id)_chatSyncOperationGroup;
-(id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 ;
-(id)saveChatsCKOperationUsingRecordsToSave:(id)arg1 ;
-(id)deleteChatCKOperationUsingRecordIDstoDelete:(id)arg1 ;
@end

