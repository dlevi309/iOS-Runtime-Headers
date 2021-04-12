/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTAgentNotificationListener <NSObject>
@optional
-(id)liveDarwinNotifications;
-(double)assertionTimeOutForNotification:(id)arg1 ofType:(long long)arg2;

@required
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3;

@end

