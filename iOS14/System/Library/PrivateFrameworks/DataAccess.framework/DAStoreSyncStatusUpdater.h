/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@interface DAStoreSyncStatusUpdater : NSObject
+(void)_updateStatusForCalendar:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(BOOL)arg5 ;
+(unsigned long long)_ekAccountErrorFromURLError:(id)arg1 ;
+(void)resetSyncStatusIfNecessaryForStoresOfType:(unsigned long long)arg1 ;
+(void)_updateStatusForStoreWithExternalID:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(BOOL)arg5 ;
+(unsigned long long)_accountErrorCodeForNSError:(id)arg1 ;
+(void)syncEndedForCalendarWithExternalID:(id)arg1 withError:(id)arg2 ;
+(void)_updateStatusForSource:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(BOOL)arg5 ;
+(unsigned long long)_ekAccountErrorFromDAErrorCode:(long long)arg1 ;
+(void)syncStartedForStoreWithExternalID:(id)arg1 ;
+(void)resetSyncStatusForAllStoresIfNecessary;
+(id)_mappedAccountErrorFromError:(id)arg1 ;
+(unsigned long long)_ekAccountErrorFromSubCalErrorCode:(long long)arg1 ;
+(unsigned long long)_ekAccountErrorFromDAValidationErrorCode:(unsigned long long)arg1 ;
+(void)syncStartedForCalendarWithExternalID:(id)arg1 ;
+(BOOL)_isCanceledError:(id)arg1 ;
+(void)_updateStatusForCalendarWithExternalID:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(BOOL)arg5 ;
+(unsigned long long)_ekAccountErrorFromCoreDAVErrorCode:(int)arg1 ;
+(unsigned long long)_ekAccountErrorFromCoreDAVHTTPStatusCode:(long long)arg1 ;
+(id)_eventStorePurger;
+(id)_eventStore;
+(void)syncEndedForStoreWithExternalID:(id)arg1 withError:(id)arg2 ;
+(unsigned long long)_codeForLastSyncError:(id)arg1 userInfo:(id*)arg2 ;
@end

