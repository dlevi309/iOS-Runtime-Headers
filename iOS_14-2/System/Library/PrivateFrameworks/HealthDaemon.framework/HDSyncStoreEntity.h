/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncStoreEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)existingSyncStoreEntityWithUUID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)allSyncStoreEntitiesOfType:(long long)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)syncStoreEntityWithUUID:(id)arg1 type:(long long)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(long long)protectionClass;
+(id)_predicateWithStoreUUID:(id)arg1 type:(long long)arg2 ;
-(long long)syncProvenance;
@end

