/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncStoreEntity : HDHealthEntity
+(long long)protectionClass;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)syncStoreEntityWithUUID:(id)arg1 type:(long long)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(id)_predicateWithStoreUUID:(id)arg1 type:(long long)arg2 ;
+(id)existingSyncStoreEntityWithUUID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(long long)syncProvenance;
@end

