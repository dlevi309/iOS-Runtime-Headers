/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionEntity : HDHealthEntity
+(long long)protectionClass;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)uniquedColumns;
+(id)tableAliases;
+(id)subscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)allSubscriptionsForType:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)allSubscriptionsForBundleID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)removeSubscriptionsWithBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)addSubscriptionWithBundleID:(id)arg1 dataCode:(long long)arg2 updateFrequency:(unsigned long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)setLaunchTimeHysteresis:(id)arg1 forBundleID:(id)arg2 dataCode:(long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)setLastAnchor:(id)arg1 lastAckTime:(id)arg2 forBundleID:(id)arg3 dataCode:(long long)arg4 profile:(id)arg5 error:(id*)arg6 ;
+(id)_predicateForBundleID:(id)arg1 dataCode:(long long)arg2 ;
+(id)_predicateForDataCode:(long long)arg1 ;
+(id)_subscriptionsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForBundleIdentifier:(id)arg1 ;
@end

