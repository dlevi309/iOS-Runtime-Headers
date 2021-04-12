/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

