/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDServiceEntity : HDHealthEntity
+(long long)protectionClass;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)uniquedColumns;
+(id)tableAliases;
+(id)_servicePredicate:(id)arg1 ;
+(id)_servicesInDatabase:(id)arg1 profile:(id)arg2 removals:(id*)arg3 ;
+(id)insertOrUpdateService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)allServicesWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)healthUpdatesEnabledForDevice:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)setHealthUpdatesEnabled:(BOOL)arg1 forDevice:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
@end

