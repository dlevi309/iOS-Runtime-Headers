/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
*/

#import <libobjc.A.dylib/UNUserNotificationSettingsServiceConnectionObserver.h>

@protocol UNNotificationSettingsCenterDelegate;
@class NSString;

@interface UNNotificationSettingsCenter : NSObject <UNUserNotificationSettingsServiceConnectionObserver> {

	id<UNNotificationSettingsCenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UNNotificationSettingsCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentNotificationSettingsCenter;
-(id)init;
-(void)dealloc;
-(id<UNNotificationSettingsCenterDelegate>)delegate;
-(void)setDelegate:(id<UNNotificationSettingsCenterDelegate>)arg1 ;
-(id)_init;
-(id)notificationSourceWithIdentifier:(id)arg1 ;
-(id)notificationSystemSettings;
-(id)allNotificationSources;
-(void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 ;
-(void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3 ;
-(void)setNotificationSystemSettings:(id)arg1 ;
-(id)notificationSourcesWithIdentifiers:(id)arg1 ;
-(void)settingsServiceConnection:(id)arg1 didUpdateNotificationSourcesWithIdentifiers:(id)arg2 ;
-(void)settingsServiceConnection:(id)arg1 didUpdateNotificationSystemSettings:(id)arg2 ;
@end

