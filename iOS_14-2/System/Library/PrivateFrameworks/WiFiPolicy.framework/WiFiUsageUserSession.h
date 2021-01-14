/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiUsageSession.h>

@interface WiFiUsageUserSession : WiFiUsageSession {

	BOOL _userInactive;
	BOOL _deviceLocked;

}
-(id)initWithInterfaceName:(id)arg1 ;
-(id)metricName;
-(void)lockStateDidChange:(BOOL)arg1 ;
-(void)displayStateDidChange:(BOOL)arg1 ;
@end

