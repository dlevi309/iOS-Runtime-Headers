/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDClinicalAuthorizationSessionEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(long long)protectionClass;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)checkConstraints;
+(id)_accountJoinClausesForProperty:(id)arg1 ;
+(id)_gatewayJoinClausesForProperty:(id)arg1 ;
@end

