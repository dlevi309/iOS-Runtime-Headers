/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderAssociatedObjectEntity : HDHealthEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(long long)protectionClass;
+(long long)associateObject:(id)arg1 withBuilder:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateAssociatedUUIDsForBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
+(BOOL)removeAssociationFromBuilder:(id)arg1 toUUID:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
@end

