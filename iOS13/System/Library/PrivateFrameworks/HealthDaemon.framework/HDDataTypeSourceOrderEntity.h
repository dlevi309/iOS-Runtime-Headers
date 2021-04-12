/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataTypeSourceOrderEntity : HDHealthEntity
+(id)indices;
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(id)joinClausesForProperty:(id)arg1 ;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)propertyForSyncProvenance;
+(id)tableAliases;
+(BOOL)updateOrderedSourcesForType:(id)arg1 profile:(id)arg2 error:(id*)arg3 updateHandler:(/*^block*/id)arg4 ;
+(BOOL)enumerateOrderedSourceIDsForType:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4 block:(/*^block*/id)arg5 ;
+(BOOL)_updateOrderedSourcesForType:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4 updateHandler:(/*^block*/id)arg5 ;
+(BOOL)enumerateOrderedSourceIDsForType:(id)arg1 profile:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
+(BOOL)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(BOOL)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)orderedSourceIDsForType:(id)arg1 userOrdered:(BOOL*)arg2 profile:(id)arg3 error:(id*)arg4 ;
@end

