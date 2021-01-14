/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDServiceEntity : HDHealthEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(id)insertOrUpdateService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)healthUpdatesEnabledForDevice:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)setHealthUpdatesEnabled:(BOOL)arg1 forDevice:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
+(id)tableAliases;
+(long long)protectionClass;
+(id)_servicesWithDatabaseTransaction:(id)arg1 profile:(id)arg2 removals:(id*)arg3 ;
+(id)_servicePredicate:(id)arg1 ;
+(id)allServicesWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)deleteService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
@end

