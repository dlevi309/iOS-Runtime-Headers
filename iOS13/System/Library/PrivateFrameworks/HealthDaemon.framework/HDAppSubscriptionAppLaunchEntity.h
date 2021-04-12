/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity
+(long long)protectionClass;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)tableAliases;
+(id)launchTimeForBundleID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)removeBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)setLaunchTime:(id)arg1 forBundleID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_predicateForBundleID:(id)arg1 ;
+(id)_launchTimesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
@end

