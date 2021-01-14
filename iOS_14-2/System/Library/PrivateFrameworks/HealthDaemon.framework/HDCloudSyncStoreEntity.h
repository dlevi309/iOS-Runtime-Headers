/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDCloudSyncStoreEntity : HDHealthEntity
+(id)databaseTable;
+(id)persistedStateForStoreUUID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(id)_propertiesForEntity;
+(BOOL)rebaseRequiredByDate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)storeIdentifierForOwnerIdentifier:(id)arg1 containerIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(long long)protectionClass;
+(id)persistedStateForStoreUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)persistedStoreUUIDsForProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)persistState:(id)arg1 storeUUID:(id)arg2 shouldReplace:(BOOL)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(id)persistedMostRecentLastSyncDateForProfile:(id)arg1 error:(id*)arg2 ;
@end

