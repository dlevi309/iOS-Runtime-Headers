/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDCloudSyncStoreEntity : HDHealthEntity
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)storeIdentifierForOwnerIdentifier:(id)arg1 containerIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)persistedStateForStoreUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)persistedMostRecentLastSyncDateForProfile:(id)arg1 error:(id*)arg2 ;
+(id)_propertiesForEntity;
+(BOOL)rebaseRequiredByDate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)persistState:(id)arg1 storeUUID:(id)arg2 shouldReplace:(BOOL)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(id)persistedStateForStoreUUID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)persistedStoreUUIDsForProfile:(id)arg1 error:(id*)arg2 ;
@end

