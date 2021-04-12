/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class UNUserNotificationCenter;

@interface RTUserNotifications : NSObject {

	UNUserNotificationCenter* _notificationCenter;

}

@property (nonatomic,retain) UNUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
-(id)init;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(UNUserNotificationCenter *)notificationCenter;
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(void)postNotificationWithTitle:(id)arg1 message:(id)arg2 ;
@end

