/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/UNSContentProtectionObserver.h>
#import <libobjc.A.dylib/UNSDefaultDataProviderFactoryObserver.h>
#import <libobjc.A.dylib/UNSNotificationRepositoryDelegate.h>
#import <libobjc.A.dylib/UNSRemoteNotificationServerObserver.h>

@protocol OS_dispatch_queue;
@class UNSApplicationLauncher, UNSApplicationService, UNSAttachmentsRepository, UNSBundleLibrarian, UNSContentProtectionManager, UNSDefaultDataProviderFactory, UNSLocalizationService, UNSUserNotificationServerConnectionListener, UNSUserNotificationServerSettingsConnectionListener, UNSUserNotificationServerRemoteNotificationConnectionListener, UNSNotificationCategoryRepository, UNSNotificationSchedulingService, UNSNotificationAuthorizationService, UNSNotificationSettingsService, UNSNotificationRepository, UNSPendingNotificationRepository, UNSPushRegistrationRepository, UNSRemoteNotificationServer, UNSNotificationScheduleRepository, UNSNotificationTopicRepository, UNSAttachmentsService, UNSLocationMonitor, UNSDaemonLauncher, BKSApplicationStateMonitor, NSSet, NSString, UNSSettingsGateway, NSObject;

@interface UNSUserNotificationServer : NSObject <LSApplicationWorkspaceObserverProtocol, UNSContentProtectionObserver, UNSDefaultDataProviderFactoryObserver, UNSNotificationRepositoryDelegate, UNSRemoteNotificationServerObserver> {

	UNSApplicationLauncher* _applicationLauncher;
	UNSApplicationService* _applicationService;
	UNSAttachmentsRepository* _attachmentsRepository;
	UNSBundleLibrarian* _librarian;
	UNSContentProtectionManager* _contentProtectionManager;
	UNSDefaultDataProviderFactory* _dataProviderFactory;
	UNSLocalizationService* _localizationService;
	UNSUserNotificationServerConnectionListener* _userNotificationServerConnectionListener;
	UNSUserNotificationServerSettingsConnectionListener* _userNotificationServerSettingsConnectionListener;
	UNSUserNotificationServerRemoteNotificationConnectionListener* _userNotificationServerRemoteNotificationConnectionListener;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSNotificationSchedulingService* _notificationSchedulingService;
	UNSNotificationAuthorizationService* _notificationAuthorizationService;
	UNSNotificationSettingsService* _notificationSettingsService;
	UNSNotificationRepository* _notificationRepository;
	UNSPendingNotificationRepository* _pendingNotificationRepository;
	UNSPushRegistrationRepository* _pushRegistrationRepository;
	UNSRemoteNotificationServer* _remoteNotificationService;
	UNSNotificationScheduleRepository* _notificationScheduleRepository;
	UNSNotificationTopicRepository* _topicRepository;
	UNSAttachmentsService* _attachmentsService;
	UNSLocationMonitor* _locationMonitor;
	UNSDaemonLauncher* _daemonLauncher;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSSet* _systemSourceBundleIdentifiers;
	NSString* _libraryDirectory;
	NSString* _directory;
	UNSSettingsGateway* _settingsGateway;
	NSObject*<OS_dispatch_queue> _installedSourceQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(void)_applicationsDidInstall:(id)arg1 ;
-(id)init;
-(void)_validateNotificationRepository;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)_timeDidChangeSignificantly;
-(void)_migrateNotificationRepository;
-(void)_installedSourceQueue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)_removeBundleLibrarianMappingsForSourceDescriptions:(id)arg1 ;
-(void)_removePushStore;
-(void)_migrateNotificationSchedule;
-(void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_migratePendingNotificationRequests;
-(void)initialSystemNotificationSourcesDidInstall:(id)arg1 applicationsDidInstall:(id)arg2 ;
-(void)_didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_triggerLocationArrowForBundleIdentifier:(id)arg1 ;
-(void)_addObserverForContentProtectionChanges;
-(void)_applicationStateDidRestore;
-(void)_removeNotificationSourceDirectories:(id)arg1 ;
-(void)_addObserverForLocaleChanges;
-(void)_migrateNotificationCategories;
-(void)_addObserverForApplicationStateMonitor;
-(void)_addObserverForBackgroundRefreshApplicationChanges;
-(BOOL)isApplicationForeground:(id)arg1 ;
-(id)_sourceDescriptionsForApplications:(id)arg1 ;
-(void)_ensureAttachmentsIntegrity;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)_backgroundRefreshApplicationsDidChange;
-(id)_loadAllSystemNotificationSourceDescriptions;
-(void)didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_addObserverForApplicationStateRestore;
-(void)_addObserverForDataProviderFactoryChanges;
-(void)_migrateUserNotificationsRepositories;
-(void)_migratePushRegistrations;
-(void)_installedSourceQueue_notificationSourcesDidInstall:(id)arg1 ;
-(void)_registerLoggers;
-(void)_migrateAttachments;
-(void)_addObserverForApplicationWorkspaceChanges;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)_localeDidChange;
-(void)_addObserverForRemoteNotificationServiceChanges;
-(void)_addObserverForSignificantTimeChanges;
@end

