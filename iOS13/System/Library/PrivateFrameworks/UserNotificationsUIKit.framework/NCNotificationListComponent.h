/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

@class NSString;


@protocol NCNotificationListComponent <NCLegibilitySettingsAdjusting,PLContentSizeCategoryAdjusting>
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated; 
@property (nonatomic,copy) NSString * logDescription; 
@required
-(unsigned long long)count;
-(NSString *)logDescription;
-(unsigned long long)notificationCount;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
-(void)setDeviceAuthenticated:(BOOL)arg1;
-(void)insertNotificationRequest:(id)arg1;
-(void)modifyNotificationRequest:(id)arg1;
-(void)removeNotificationRequest:(id)arg1;
-(void)reloadNotificationRequest:(id)arg1;
-(BOOL)isDeviceAuthenticated;
-(void)setLogDescription:(id)arg1;

@end

