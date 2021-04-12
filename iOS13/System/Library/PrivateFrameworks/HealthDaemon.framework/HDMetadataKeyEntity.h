/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataKeyEntity : HDHealthEntity
+(long long)protectionClass;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)_entityForKey:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_insertEntityWithKey:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)entityForKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)insertEntityWithKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)_keyForPersistentID:(id)arg1 database:(id)arg2 ;
@end

