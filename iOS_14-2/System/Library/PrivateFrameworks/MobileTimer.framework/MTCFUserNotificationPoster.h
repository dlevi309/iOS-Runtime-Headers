/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSMutableDictionary;

@interface MTCFUserNotificationPoster : NSObject {

	NSMutableDictionary* _notifications;

}

@property (nonatomic,retain) NSMutableDictionary * notifications;              //@synthesize notifications=_notifications - In the implementation block
+(id)sharedInstance;
+(void)postNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 bypassDND:(BOOL)arg6 handler:(/*^block*/id)arg7 ;
+(void)cancelNotificationsWithIdentifiers:(id)arg1 ;
-(id)init;
-(void)setNotifications:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)notifications;
@end

