/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDTaskServerClassProvider.h>
#import <libobjc.A.dylib/HDApplicationStateMonitorProvider.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/HDHealthDaemon.h>

@protocol OS_dispatch_queue, HDNanoAlertSuppressionService, HDDaemonTester;
@class HDBackgroundTaskScheduler, HDPluginManager, HDPrimaryProfile, _HKBehavior, NSString, NSObject, HDContentProtectionManager, HDCloudSyncCoordinator, HDPeriodicActivity, HDProcessStateManager, HDProfileManager, NSMutableArray, NSDictionary, HDAnalyticsSubmissionCoordinator, HDAutoBugCaptureReporter, HDRemoteFeatureAvailabilityAssetManager, HDMaintenanceWorkCoordinator, HDQueryManager, HDDaemonConnectionManager, HDTaskServerRegistry, HDDevicePowerMonitor, HDXPCAlarmScheduler, HDXPCEventManager, HDWorkoutPluginDaemonExtension, NSURL;

@interface HDDaemon : NSObject <HDTaskServerClassProvider, HDApplicationStateMonitorProvider, HDDiagnosticObject, LSApplicationWorkspaceObserverProtocol, HDHealthDaemon> {

	_HKBehavior* _behavior;
	NSString* _healthDirectoryPath;
	NSObject*<OS_dispatch_queue> _queue;
	int _languageChangeNotifyToken;
	HDBackgroundTaskScheduler* _backgroundTaskScheduler;
	HDContentProtectionManager* _contentProtectionManager;
	HDCloudSyncCoordinator* _cloudSyncCoordinator;
	HDPeriodicActivity* _periodicActivity;
	HDPluginManager* _pluginManager;
	HDProcessStateManager* _processStateManager;
	HDProfileManager* _profileManager;
	HDPrimaryProfile* _primaryProfile;
	MGNotificationTokenStructRef _deviceNameChangesToken;
	os_unfair_lock_s _daemonReadyLock;
	NSMutableArray* _daemonReadyBlocks;
	long long _numberOfDaemonReadyObserversBeforeReady;
	long long _numberOfDaemonReadyObserversAfterReady;
	BOOL _daemonReady;
	atomic_flag _didStart;
	NSMutableArray* _daemonActivatedBlocks;
	NSDictionary* _daemonExtensionsByIdentifier;
	BOOL _shouldEnqueueMaintenanceWork;
	NSString* _medicalIDDirectoryPath;
	HDAnalyticsSubmissionCoordinator* _analyticsSubmissionCoordinator;
	HDAutoBugCaptureReporter* _autoBugCaptureReporter;
	id<HDNanoAlertSuppressionService> _alertSuppressionService;
	HDRemoteFeatureAvailabilityAssetManager* _remoteFeatureAvailabilityAssetManager;
	HDMaintenanceWorkCoordinator* _maintenanceWorkCoordinator;
	HDQueryManager* _queryManager;
	id<HDDaemonTester> _daemonTester;
	HDDaemonConnectionManager* _connectionManager;
	HDTaskServerRegistry* _taskServerRegistry;
	HDDevicePowerMonitor* _devicePowerMonitor;
	HDXPCAlarmScheduler* _alarmScheduler;
	HDXPCEventManager* _xpcEventManager;

}

@property (assign,nonatomic,__weak) id<HDDaemonTester> daemonTester;                                                         //@synthesize daemonTester=_daemonTester - In the implementation block
@property (assign,nonatomic) BOOL shouldEnqueueMaintenanceWork;                                                              //@synthesize shouldEnqueueMaintenanceWork=_shouldEnqueueMaintenanceWork - In the implementation block
@property (nonatomic,readonly) HDDaemonConnectionManager * connectionManager;                                                //@synthesize connectionManager=_connectionManager - In the implementation block
@property (nonatomic,readonly) HDTaskServerRegistry * taskServerRegistry;                                                    //@synthesize taskServerRegistry=_taskServerRegistry - In the implementation block
@property (nonatomic,readonly) HDDevicePowerMonitor * devicePowerMonitor;                                                    //@synthesize devicePowerMonitor=_devicePowerMonitor - In the implementation block
@property (nonatomic,readonly) HDXPCAlarmScheduler * alarmScheduler;                                                         //@synthesize alarmScheduler=_alarmScheduler - In the implementation block
@property (nonatomic,readonly) HDXPCEventManager * xpcEventManager;                                                          //@synthesize xpcEventManager=_xpcEventManager - In the implementation block
@property (nonatomic,readonly) HDWorkoutPluginDaemonExtension * workoutPluginExtension; 
@property (readonly) _HKBehavior * behavior; 
@property (copy,readonly) NSString * healthDirectoryPath; 
@property (copy,readonly) NSURL * healthDirectoryURL; 
@property (copy,readonly) NSString * medicalIDDirectoryPath;                                                                 //@synthesize medicalIDDirectoryPath=_medicalIDDirectoryPath - In the implementation block
@property (nonatomic,readonly) HDAnalyticsSubmissionCoordinator * analyticsSubmissionCoordinator;                            //@synthesize analyticsSubmissionCoordinator=_analyticsSubmissionCoordinator - In the implementation block
@property (nonatomic,readonly) HDAutoBugCaptureReporter * autoBugCaptureReporter;                                            //@synthesize autoBugCaptureReporter=_autoBugCaptureReporter - In the implementation block
@property (nonatomic,retain) id<HDNanoAlertSuppressionService> alertSuppressionService;                                      //@synthesize alertSuppressionService=_alertSuppressionService - In the implementation block
@property (nonatomic,readonly) HDCloudSyncCoordinator * cloudSyncCoordinator;                                                //@synthesize cloudSyncCoordinator=_cloudSyncCoordinator - In the implementation block
@property (nonatomic,readonly) HDContentProtectionManager * contentProtectionManager; 
@property (nonatomic,readonly) HDRemoteFeatureAvailabilityAssetManager * remoteFeatureAvailabilityAssetManager;              //@synthesize remoteFeatureAvailabilityAssetManager=_remoteFeatureAvailabilityAssetManager - In the implementation block
@property (nonatomic,readonly) HDMaintenanceWorkCoordinator * maintenanceWorkCoordinator;                                    //@synthesize maintenanceWorkCoordinator=_maintenanceWorkCoordinator - In the implementation block
@property (nonatomic,readonly) HDPrimaryProfile * primaryProfile;                                                            //@synthesize primaryProfile=_primaryProfile - In the implementation block
@property (nonatomic,readonly) HDProcessStateManager * processStateManager; 
@property (nonatomic,readonly) HDProfileManager * profileManager; 
@property (nonatomic,readonly) HDQueryManager * queryManager;                                                                //@synthesize queryManager=_queryManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDPluginManager * pluginManager; 
-(id)taskServerClasses;
-(HDPluginManager *)pluginManager;
-(void)terminateClean:(BOOL)arg1 reason:(id)arg2 ;
-(id)healthDomainAccessorWithPairedDevice:(id)arg1 ;
-(HDDevicePowerMonitor *)devicePowerMonitor;
-(HDCloudSyncCoordinator *)cloudSyncCoordinator;
-(HDMaintenanceWorkCoordinator *)maintenanceWorkCoordinator;
-(void)_terminationCleanup;
-(id)init;
-(id)mainQueue;
-(HDProfileManager *)profileManager;
-(void)_localeOrLanguageChanged:(id)arg1 ;
-(void)unitTest_queryServerDidInit:(id)arg1 ;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)start;
-(id)healthDirectorySizeInBytes;
-(id)_bundleIdentifiersToTerminateAfterObliteration;
-(void)invalidateAllServersForProfile:(id)arg1 ;
-(NSURL *)healthDirectoryURL;
-(_HKBehavior *)behavior;
-(void)unitTest_didCreateProfile:(id)arg1 ;
-(id)initWithHealthDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 ;
-(id)_newReferenceOntologyAsset;
-(id<HDNanoAlertSuppressionService>)alertSuppressionService;
-(HDRemoteFeatureAvailabilityAssetManager *)remoteFeatureAvailabilityAssetManager;
-(id)healthLiteUserDefaultsDomain;
-(id)_newCloudSyncCoordinator;
-(void)setAlertSuppressionService:(id<HDNanoAlertSuppressionService>)arg1 ;
-(void)_handleSigterm;
-(void)_handleLaunchServicesEvent:(id)arg1 name:(id)arg2 ;
-(void)_updateCurrentDeviceName;
-(id)_newProcessStateManager;
-(id)_newMaintenanceWorkCoordinator;
-(void)_postDaemonLaunchDarwinNotification;
-(void)setShouldEnqueueMaintenanceWork:(BOOL)arg1 ;
-(HDContentProtectionManager *)contentProtectionManager;
-(void)exitClean:(BOOL)arg1 reason:(id)arg2 ;
-(HDXPCAlarmScheduler *)alarmScheduler;
-(void)_handleDistributedNotificationWithName:(const char*)arg1 event:(id)arg2 ;
-(void)_setUpLaunchEventHandlers;
-(void)_handleDarwinNotificationWithName:(const char*)arg1 event:(id)arg2 ;
-(id)daemonExtensionWithIdentifier:(id)arg1 ;
-(HDDaemonConnectionManager *)connectionManager;
-(id)diagnosticDescription;
-(void)_terminateAndKillClientsForObliteration:(id)arg1 ;
-(void)_notifyDaemonReadyObservers;
-(void)_unregisterLaunchEventDynamicallyForNotification:(const char*)arg1 ;
-(HDTaskServerRegistry *)taskServerRegistry;
-(id)_newBehavior;
-(BOOL)shouldEnqueueMaintenanceWork;
-(id)_newPluginManager;
-(id)nanoPairedDeviceRegistry;
-(void)invalidateAndWait;
-(void)unregisterForLaunchNotification:(const char*)arg1 ;
-(void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(/*^block*/id)arg4 ;
-(void)registerForLaunchNotification:(const char*)arg1 ;
-(id)_newContentProtectionManager;
-(HDAnalyticsSubmissionCoordinator *)analyticsSubmissionCoordinator;
-(void)setDaemonTester:(id<HDDaemonTester>)arg1 ;
-(HDWorkoutPluginDaemonExtension *)workoutPluginExtension;
-(id)createApplicationStateMonitorWithBundleIDs:(id)arg1 states:(unsigned)arg2 elevatedPriority:(BOOL)arg3 ;
-(NSString *)medicalIDDirectoryPath;
-(void)_notifyDaemonActivatedObservers;
-(id)_newAnalyticsSubmissionCoordinator;
-(id)daemonExtensionsConformingToProtocol:(id)arg1 ;
-(HDProcessStateManager *)processStateManager;
-(HDAutoBugCaptureReporter *)autoBugCaptureReporter;
-(id<HDDaemonTester>)daemonTester;
-(id)_newPrimaryProfile;
-(HDQueryManager *)queryManager;
-(void)unitTest_taskServerDidInit:(id)arg1 ;
-(void)_setupMemoryWarningHandler;
-(id)_newBackgroundTaskScheduler;
-(void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setUpSignalHandlers;
-(void)_setUpDarwinNotificationEventHandler;
-(void)_registerForDeviceNameChanges;
-(id)_newAutoBugCaptureReporter;
-(void)_resetPrivacySettings;
-(void)registerForDaemonReady:(id)arg1 ;
-(BOOL)_shouldInitializeDaemon;
-(NSString *)healthDirectoryPath;
-(HDXPCEventManager *)xpcEventManager;
-(id)pairedSyncCoordinatorWithServiceName:(id)arg1 ;
-(id)IDSServiceWithIdentifier:(id)arg1 ;
-(void)_registerLaunchEventDynamicallyForNotification:(const char*)arg1 ;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(void)_setUpDistributedNotificationEventHandler;
-(void)registerDaemonActivatedObserver:(id)arg1 queue:(id)arg2 ;
-(id)_newConnectionManager;
-(id)createApplicationStateMonitor;
-(void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2 ;
-(id)_setupSignal:(int)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithContainerDirectoryPath:(id)arg1 ;
-(void)dealloc;
-(void)obliterateAndTerminateProfiles:(id)arg1 options:(unsigned long long)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_newProfileManager;
-(HDPrimaryProfile *)primaryProfile;
@end

