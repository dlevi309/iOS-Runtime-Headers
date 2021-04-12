/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionEntity : HDHealthEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(BOOL)setLastAnchor:(id)arg1 lastAckTime:(id)arg2 forBundleID:(id)arg3 dataCode:(long long)arg4 profile:(id)arg5 error:(id*)arg6 ;
+(id)allSubscriptionsForBundleID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)addSubscriptionWithBundleID:(id)arg1 dataCode:(long long)arg2 updateFrequency:(unsigned long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)tableAliases;
+(long long)protectionClass;
+(id)allSubscriptionsForType:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForBundleID:(id)arg1 dataCode:(long long)arg2 ;
+(id)_predicateForBundleIdentifier:(id)arg1 ;
+(id)_predicateForDataCode:(long long)arg1 ;
+(id)subscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)removeSubscriptionsWithBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setLaunchTimeHysteresis:(id)arg1 forBundleID:(id)arg2 dataCode:(long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)_subscriptionsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
@end

