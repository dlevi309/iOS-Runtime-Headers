/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNRouteRefreshPolicyRules.h>

@class NSString;

@interface MNRouteRefreshPolicyRulesTimeToLeave : NSObject <MNRouteRefreshPolicyRules> {

	unsigned long long _policy;

}

@property (nonatomic,readonly) unsigned long long policy;                 //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) BOOL canWakeClientForUpdates; 
@property (nonatomic,readonly) BOOL canWakeDeviceForUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)policy;
-(BOOL)canMakeNetworkRequestsForDestination:(id)arg1 atDate:(id)arg2 ;
-(double)timeIntervalForDestinationRefresh:(id)arg1 lastUpdate:(id)arg2 ;
-(double)maxTimeIntervalFromNowForDestinationRefresh:(id)arg1 fromDate:(id)arg2 ;
-(BOOL)canWakeClientForUpdates;
-(BOOL)canWakeDeviceForUpdates;
-(double)_timeIntervalToDestination:(id)arg1 fromDate:(id)arg2 ;
@end

