/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@interface DAStoreSyncStatusUpdater : NSObject
+(id)_eventStore;
+(id)_eventStorePurger;
+(void)_updateStatusForStoreWithExternalID:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(unsigned long long*)arg4 canceled:(BOOL)arg5 ;
+(unsigned long long)_accountErrorForNSError:(id)arg1 ;
+(BOOL)_isCanceledError:(id)arg1 ;
+(void)_updateStatusForSource:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(unsigned long long*)arg4 canceled:(BOOL)arg5 ;
+(unsigned long long)_ekAccountErrorFromCoreDAVErrorCode:(int)arg1 ;
+(unsigned long long)_ekAccountErrorFromDAErrorCode:(long long)arg1 ;
+(unsigned long long)_ekAccountErrorFromDAValidationErrorCode:(unsigned long long)arg1 ;
+(unsigned long long)_ekAccountErrorFromCoreDAVHTTPError:(id)arg1 ;
+(unsigned long long)_ekAccountErrorFromURLError:(id)arg1 ;
+(unsigned long long)_ekAccountErrorFromSubCalErrorCode:(long long)arg1 ;
+(void)syncStartedForStoreWithExternalID:(id)arg1 ;
+(void)syncEndedForStoreWithExternalID:(id)arg1 withError:(id)arg2 ;
+(void)resetSyncStatusForAllStoresIfNecessary;
+(void)resetSyncStatusIfNecessaryForStoresOfType:(unsigned long long)arg1 ;
@end

