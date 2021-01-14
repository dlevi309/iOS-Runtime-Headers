/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataValueEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)_predicateForEntityWithObjectID:(id)arg1 ;
+(id)_predicateForEntityWithKeyID:(id)arg1 ;
+(BOOL)_insertMetadataValueWithKeyID:(long long)arg1 objectID:(long long)arg2 value:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)deleteStatementForObjectMetadataWithTransaction:(id)arg1 ;
+(long long)protectionClass;
+(id)indices;
@end

