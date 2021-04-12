/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderAssociatedObjectEntity : HDHealthEntity
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)uniquedColumns;
+(long long)associateObject:(id)arg1 withBuilder:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateAssociatedUUIDsForBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
+(BOOL)removeAssociationFromBuilder:(id)arg1 toUUID:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
@end

