/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@interface IMDCKChatSyncCKOperationFactory : NSObject
-(id)_chatSyncOperationGroupWithName:(id)arg1 ;
-(id)_chatFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 ;
-(id)_chatFetchRecordZoneChangesCKConfiguration:(id)arg1 ;
-(id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 groupName:(id)arg4 activity:(id)arg5 ;
-(id)_chatWriteRecordsCKConfiguration:(id)arg1 ;
-(id)_chatSyncOperationGroup;
-(id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 activity:(id)arg4 ;
-(id)saveChatsCKOperationUsingRecordsToSave:(id)arg1 activity:(id)arg2 ;
-(id)deleteChatCKOperationUsingRecordIDstoDelete:(id)arg1 activity:(id)arg2 ;
@end

