/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSMutableDictionary;

@interface MTCFUserNotificationPoster : NSObject {

	NSMutableDictionary* _notifications;

}

@property (nonatomic,retain) NSMutableDictionary * notifications;              //@synthesize notifications=_notifications - In the implementation block
+(id)sharedInstance;
+(void)cancelNotificationsWithIdentifiers:(id)arg1 ;
+(void)postNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 bypassDND:(BOOL)arg6 handler:(/*^block*/id)arg7 ;
-(id)init;
-(NSMutableDictionary *)notifications;
-(void)setNotifications:(NSMutableDictionary *)arg1 ;
@end

