/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
*/

#import <UserNotificationsSettings/UserNotificationsSettings-Structs.h>
#import <UserNotificationsSettings/UNNotificationSystemSettings.h>

@interface UNMutableNotificationSystemSettings : UNNotificationSystemSettings

@property (assign,nonatomic) long long showPreviewsSetting; 
@property (assign,nonatomic) long long announcementSetting; 
@property (assign,nonatomic) long long spokenNotificationSetting; 
-(void)setShowPreviewsSetting:(long long)arg1 ;
-(void)setSpokenNotificationSetting:(long long)arg1 ;
-(void)setAnnouncementSetting:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

