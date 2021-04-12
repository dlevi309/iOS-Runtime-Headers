/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

@class NSString;


@protocol NCNotificationListComponent <NCLegibilitySettingsAdjusting,PLContentSizeCategoryAdjusting>
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated; 
@property (nonatomic,copy) NSString * logDescription; 
@required
-(void)reloadNotificationRequest:(id)arg1;
-(BOOL)isDeviceAuthenticated;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
-(void)setLogDescription:(id)arg1;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1;
-(void)insertNotificationRequest:(id)arg1;
-(void)setDeviceAuthenticated:(BOOL)arg1;
-(unsigned long long)notificationCount;
-(NSString *)logDescription;
-(void)removeNotificationRequest:(id)arg1;
-(void)modifyNotificationRequest:(id)arg1;
-(unsigned long long)count;

@end

