/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/UNSSettingsGatewayObserver.h>
#import <libobjc.A.dylib/UNSNotificationRepositorySettingsProvider.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, UNSSettingsGateway, UNSCriticalAlertAuthorizationAlertController, UNSNotificationAuthorizationAlertController, NSObject, NSString;

@interface UNSNotificationSettingsService : NSObject <UNSSettingsGatewayObserver, UNSNotificationRepositorySettingsProvider> {

	NSMutableArray* _observers;
	UNSSettingsGateway* _settingsGateway;
	UNSCriticalAlertAuthorizationAlertController* _criticalAlertAuthorizationAlertController;
	UNSNotificationAuthorizationAlertController* _notificationAuthorizationAlertController;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 ;
-(void)settingsGateway:(id)arg1 didUpdateSectionInfoForSectionIDs:(id)arg2 ;
-(id)initWithSettingsGateway:(id)arg1 ;
-(id)notificationSettingsForBundleIdentifier:(id)arg1 ;
-(id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg1 ;
-(void)_queue_removeObserver:(id)arg1 ;
-(void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3 ;
-(id)notificationSystemSettings;
-(void)removeObserver:(id)arg1 ;
-(id)notificationSourcesForBundleIdentifiers:(id)arg1 ;
-(id)allNotificationSources;
-(void)settingsGateway:(id)arg1 didUpdateGlobalSettings:(id)arg2 ;
-(id)notificationSourceForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)setNotificationSystemSettings:(id)arg1 ;
-(void)_queue_addObserver:(id)arg1 ;
@end

