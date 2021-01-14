/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)launchTimeForBundleID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)tableAliases;
+(long long)protectionClass;
+(id)_predicateForBundleID:(id)arg1 ;
+(BOOL)removeBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_launchTimesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)setLaunchTime:(id)arg1 forBundleID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
@end

