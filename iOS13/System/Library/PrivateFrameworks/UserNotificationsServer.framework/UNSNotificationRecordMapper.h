/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class BSCFBundle, UNSNotificationCategoryRepository;

@interface UNSNotificationRecordMapper : NSObject {

	BSCFBundle* _bundle;
	UNSNotificationCategoryRepository* _categoryRepository;

}
-(id)initWithBundle:(id)arg1 categoryRepository:(id)arg2 ;
-(id)notificationForNotificationRecord:(id)arg1 ;
-(id)notificationRequestForNotificationRecord:(id)arg1 ;
-(id)_notificationContentForNotificationRecord:(id)arg1 ;
-(id)_notificationTriggerForNotificationRecord:(id)arg1 ;
-(id)_notificationSoundForNotificationRecord:(id)arg1 ;
-(id)_notificationIconForNotificationRecord:(id)arg1 ;
@end

