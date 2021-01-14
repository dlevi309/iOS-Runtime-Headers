/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class BSCFBundle, UNSNotificationCategoryRepository;

@interface UNSNotificationRecordMapper : NSObject {

	BSCFBundle* _bundle;
	UNSNotificationCategoryRepository* _categoryRepository;

}
-(id)notificationRequestForNotificationRecord:(id)arg1 ;
-(id)_notificationIconForNotificationRecord:(id)arg1 ;
-(id)notificationForNotificationRecord:(id)arg1 ;
-(id)_notificationTriggerForNotificationRecord:(id)arg1 ;
-(id)_notificationContentForNotificationRecord:(id)arg1 ;
-(id)_notificationSoundForNotificationRecord:(id)arg1 ;
-(id)initWithBundle:(id)arg1 categoryRepository:(id)arg2 ;
@end

