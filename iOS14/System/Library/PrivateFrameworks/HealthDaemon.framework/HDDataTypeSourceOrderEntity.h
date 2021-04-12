/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataTypeSourceOrderEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(BOOL)enumerateOrderedSourceIDsForType:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4 block:(/*^block*/id)arg5 ;
+(BOOL)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(BOOL)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)enumerateOrderedSourceIDsForType:(id)arg1 profile:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
+(id)orderedSourceIDsForType:(id)arg1 userOrdered:(BOOL*)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)propertyForSyncProvenance;
+(BOOL)_updateOrderedSourcesForType:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4 updateHandler:(/*^block*/id)arg5 ;
+(id)tableAliases;
+(long long)protectionClass;
+(BOOL)updateOrderedSourcesForType:(id)arg1 profile:(id)arg2 error:(id*)arg3 updateHandler:(/*^block*/id)arg4 ;
+(id)indices;
+(id)joinClausesForProperty:(id)arg1 ;
@end

