/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDNotificationManager;

@interface HDNanoHealthNotification : NSObject {

	HDNotificationManager* _notificationManager;

}
+(id)category;
-(id)body;
-(unsigned long long)destinations;
-(id)title;
-(void)triggerNotification;
-(id)_notificationContentWithTitle:(id)arg1 body:(id)arg2 ;
-(id)initWithNotificationManager:(id)arg1 ;
@end

