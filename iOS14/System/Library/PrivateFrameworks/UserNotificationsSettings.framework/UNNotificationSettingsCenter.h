/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 ;
-(id)init;
-(id<UNNotificationSettingsCenterDelegate>)delegate;
-(void)setDelegate:(id<UNNotificationSettingsCenterDelegate>)arg1 ;
-(void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3 ;
-(id)notificationSystemSettings;
-(id)allNotificationSources;
-(id)_init;
-(void)dealloc;
-(void)setNotificationSystemSettings:(id)arg1 ;
-(id)notificationSourceWithIdentifier:(id)arg1 ;
-(id)notificationSourcesWithIdentifiers:(id)arg1 ;
-(void)settingsServiceConnection:(id)arg1 didUpdateNotificationSourcesWithIdentifiers:(id)arg2 ;
-(void)settingsServiceConnection:(id)arg1 didUpdateNotificationSystemSettings:(id)arg2 ;
@end

