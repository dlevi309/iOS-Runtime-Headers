/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol _DASActivityScheduler, OS_dispatch_queue, UNSRemoteNotificationServerObserver;
@class UNSNotificationRepository, UNSNotificationCategoryRepository, UNSAttachmentsService, UNSPushRegistrationRepository, UNSNotificationServiceExtensionManager, BSPlatform, NSObject, NSMutableSet, NSSet, NSMutableDictionary, NSString;

@interface UNSRemoteNotificationServer : NSObject <APSConnectionDelegate> {

	UNSNotificationRepository* _notificationRepository;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSAttachmentsService* _attachmentsService;
	UNSPushRegistrationRepository* _pushRegistrationRepository;
	id<_DASActivityScheduler> _duetActivityScheduler;
	UNSNotificationServiceExtensionManager* _serviceExtensionManager;
	BSPlatform* _platform;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _apsQueue;
	NSMutableSet* _cloudKitBundleIdentifiers;
	NSMutableSet* _contentAvailableBundleIdentifiers;
	NSMutableSet* _quietServiceExtensionBundleIdentifiers;
	NSMutableSet* _foregroundBundleIdentifiers;
	NSMutableSet* _installedBundleIdentifiers;
	NSMutableSet* _restrictedBundleIdentifiers;
	NSMutableSet* _runningBundleIdentifiers;
	NSMutableSet* _userNotificationEnabledBundleIdentifiers;
	NSMutableSet* _visibleUserNotificationEnabledBundleIdentifiers;
	NSSet* _backgroundAppRefreshBlackList;
	NSMutableDictionary* _bundleIdentifierToRegistration;
	NSMutableDictionary* _environmentsToConnections;
	NSMutableSet* _bundleIdentifiersNeedingToken;
	id<UNSRemoteNotificationServerObserver> _observer;

}

@property (assign,nonatomic) id<UNSRemoteNotificationServerObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newPushServiceConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)performMigration;
-(void)_queue_performMigration;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(BOOL)_queue_enforcePushTypeForMessage:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)backgroundRefreshApplicationsDidChange;
-(void)_queue_backgroundRefreshApplicationsDidChange;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg1 ;
-(void)setObserver:(id<UNSRemoteNotificationServerObserver>)arg1 ;
-(id<UNSRemoteNotificationServerObserver>)observer;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(void)_queue_didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_didCompleteInitialization;
-(void)_queue_applicationDidBecomeForeground:(id)arg1 ;
-(BOOL)_queue_allowServiceExtensionFilteringForMessage:(id)arg1 ;
-(void)_queue_applicationDidBecomeBackground:(id)arg1 ;
-(void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(BOOL)arg4 ;
-(BOOL)_queue_isUserNotificationEnabledForApplication:(id)arg1 ;
-(BOOL)_queue_isApplicationRunning:(id)arg1 ;
-(void)didCompleteInitialization;
-(void)notificationSourcesDidInstall:(id)arg1 ;
-(BOOL)_queue_isVisibleUserNotificationEnabledForApplication:(id)arg1 ;
-(void)_queue_applicationDidLaunch:(id)arg1 ;
-(void)_queue_calculateTopics;
-(void)_queue_moveTopicsForApplication:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3 ;
-(void)_queue_reloadBackgroundAppRefreshBlackList;
-(void)_queue_reloadRegistrations;
-(void)_queue_didReceiveIncomingMessage:(id)arg1 ;
-(void)didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)_queue_canDeliverMessageToBundle:(id)arg1 ;
-(void)_extensionQueue_modifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 extension:(id)arg4 enforcePushType:(BOOL)arg5 ;
-(void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2 ;
-(void)_queue_invalidateTokenForBundleIdentifier:(id)arg1 ;
-(void)_queue_didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(id)initWithNotificationRepository:(id)arg1 attachmentsService:(id)arg2 categoryRepository:(id)arg3 pushRegistrationRepository:(id)arg4 platform:(id)arg5 ;
-(BOOL)_queue_isPushEnabledForApplication:(id)arg1 ;
-(BOOL)_queue_messageIsValidForDelivery:(id)arg1 ;
-(void)_queue_tryToModifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(BOOL)arg4 ;
-(id)_queue_allTopicsForApplication:(id)arg1 ;
-(void)_scheduleContentAvailablePushActivityForMessage:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_queue_applicationDidTerminate:(id)arg1 ;
-(void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeRegistrationForBundleIdentifier:(id)arg1 ;
-(void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(BOOL)arg4 extensionStart:(id)arg5 extensionEnd:(id)arg6 ;
-(void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id)_initWithNotificationRepository:(id)arg1 attachmentsService:(id)arg2 categoryRepository:(id)arg3 pushRegistrationRepository:(id)arg4 platform:(id)arg5 queue:(id)arg6 apsQueue:(id)arg7 duetActivityScheduler:(id)arg8 serviceExtensionManager:(id)arg9 ;
-(void)dealloc;
-(BOOL)_queue_isApplicationForeground:(id)arg1 ;
@end

