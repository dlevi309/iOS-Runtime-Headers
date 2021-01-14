/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiUsageSession.h>

@interface WiFiUsageDeviceSession : WiFiUsageSession {

	BOOL _firstDisplayOn;

}
-(id)initWithInterfaceName:(id)arg1 ;
-(id)metricName;
-(void)systemWakeStateDidChange:(BOOL)arg1 wokenByWiFi:(BOOL)arg2 ;
-(void)displayStateDidChange:(BOOL)arg1 ;
@end

