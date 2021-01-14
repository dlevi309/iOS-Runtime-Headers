/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataKeyEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)insertEntityWithKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(long long)protectionClass;
+(id)_entityForKey:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_keyForPersistentID:(id)arg1 database:(id)arg2 ;
+(id)_insertEntityWithKey:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)entityForKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
@end

