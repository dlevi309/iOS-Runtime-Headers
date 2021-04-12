/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDSharingSetupEntity : HDHealthEntity
+(long long)protectionClass;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)_sampleTypesForSetupWithPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)privateSubEntities;
+(BOOL)createShareWithProfile:(id)arg1 identifier:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateSharesWithProfile:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
@end

