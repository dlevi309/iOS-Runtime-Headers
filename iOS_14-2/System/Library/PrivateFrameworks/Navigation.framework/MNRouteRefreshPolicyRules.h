/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNRouteRefreshPolicyRules <NSObject>
@property (nonatomic,readonly) unsigned long long policy; 
@property (nonatomic,readonly) BOOL canWakeClientForUpdates; 
@property (nonatomic,readonly) BOOL canWakeDeviceForUpdates; 
@required
-(unsigned long long)policy;
-(BOOL)canMakeNetworkRequestsForDestination:(id)arg1 atDate:(id)arg2;
-(double)timeIntervalForDestinationRefresh:(id)arg1 lastUpdate:(id)arg2;
-(double)maxTimeIntervalFromNowForDestinationRefresh:(id)arg1 fromDate:(id)arg2;
-(BOOL)canWakeClientForUpdates;
-(BOOL)canWakeDeviceForUpdates;

@end

