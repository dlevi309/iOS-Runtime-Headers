/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class UNUserNotificationCenter;

@interface RTUserNotifications : NSObject {

	UNUserNotificationCenter* _notificationCenter;

}

@property (nonatomic,retain) UNUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(UNUserNotificationCenter *)notificationCenter;
-(void)postNotificationWithTitle:(id)arg1 message:(id)arg2 ;
@end

