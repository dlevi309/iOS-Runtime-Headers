/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNRouteRefreshPolicyRules.h>

@class NSString;

@interface MNRouteRefreshPolicyRulesDefault : NSObject <MNRouteRefreshPolicyRules> {

	unsigned long long _policy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long policy;                 //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) BOOL canWakeClientForUpdates; 
@property (nonatomic,readonly) BOOL canWakeDeviceForUpdates; 
-(id)init;
-(unsigned long long)policy;
-(BOOL)canMakeNetworkRequestsForDestination:(id)arg1 atDate:(id)arg2 ;
-(double)timeIntervalForDestinationRefresh:(id)arg1 lastUpdate:(id)arg2 ;
-(double)maxTimeIntervalFromNowForDestinationRefresh:(id)arg1 fromDate:(id)arg2 ;
-(BOOL)canWakeClientForUpdates;
-(BOOL)canWakeDeviceForUpdates;
@end

