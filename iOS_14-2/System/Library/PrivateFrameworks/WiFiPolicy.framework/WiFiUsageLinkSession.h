/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiUsageSession.h>

@interface WiFiUsageLinkSession : WiFiUsageSession {

	BOOL _linkUp;

}
-(id)initWithInterfaceName:(id)arg1 ;
-(id)metricName;
-(void)linkStateDidChange:(BOOL)arg1 isInvoluntary:(BOOL)arg2 linkChangeReason:(long long)arg3 linkChangeSubreason:(long long)arg4 withNetworkDetails:(id)arg5 ;
@end

