/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDTaskServerClassProvider.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDXPCListenerDelegate.h>
#import <libobjc.A.dylib/HDHealthDaemon.h>

@protocol OS_dispatch_queue, HDNanoAlertSuppressionService, HDDaemonTester;
@class HDBackgroundTaskScheduler, HDPluginManager, HDPrimaryProfile, _HKBehavior, NSString, NSMutableSet, NSObject, HDContentProtectionManager, HDCloudSyncCoordinator, HDPeriodicActivity, HDProcessStateManager, HDProfileManager, NSMutableArray, NSDictionary, HDAnalyticsSubmissionCoordinator, HDFeatureAvailabilityAssetManager, HDMaintenanceWorkCoordinator, HDQueryManager, HDXPCListener, HDTaskServerRegistry, HDDevicePowerMonitor, HDXPCAlarmScheduler, HDWorkoutPluginDaemonExtension, NSURL;

@interface HDDaemon : NSObject <HDTaskServerClassProvider, HDDiagnosticObject, HDXPCListenerDelegate, HDHealthDaemon> {

	_HKBehavior* _behavior;
	NSString* _healthDirectoryPath;
	os_unfair_lock_s _endpointLock;
	NSMutableSet* _endpoints;
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
	NSDictionary* _daemonExtensionsByIdentifier;
	NSString* _medicalIDDirectoryPath;
	HDAnalyticsSubmissionCoordinator* _analyticsSubmissionCoordinator;
	id<HDNanoAlertSuppressionService> _alertSuppressionService;
	HDFeatureAvailabilityAssetManager* _featureAvailabilityAssetManager;
	HDMaintenanceWorkCoordinator* _maintenanceWorkCoordinator;
	HDQueryManager* _queryManager;
	HDXPCListener* _serviceListener;
	HDTaskServerRegistry* _taskServerRegistry;
	HDDevicePowerMonitor* _devicePowerMonitor;
	HDXPCAlarmScheduler* _alarmScheduler;
	id<HDDaemonTester> _daemonTester;

}

@property (nonatomic,readonly) HDXPCListener * serviceListener;                                                  //@synthesize serviceListener=_serviceListener - In the implementation block
@property (nonatomic,readonly) HDContentProtectionManager * contentProtectionManager; 
@property (nonatomic,readonly) HDTaskServerRegistry * taskServerRegistry;                                        //@synthesize taskServerRegistry=_taskServerRegistry - In the implementation block
@property (nonatomic,readonly) HDDevicePowerMonitor * devicePowerMonitor;                                        //@synthesize devicePowerMonitor=_devicePowerMonitor - In the implementation block
@property (nonatomic,readonly) HDXPCAlarmScheduler * alarmScheduler;                                             //@synthesize alarmScheduler=_alarmScheduler - In the implementation block
@property (nonatomic,readonly) HDWorkoutPluginDaemonExtension * workoutPluginExtension; 
@property (assign,nonatomic,__weak) id<HDDaemonTester> daemonTester;                                             //@synthesize daemonTester=_daemonTester - In the implementation block
@property (readonly) _HKBehavior * behavior; 
@property (copy,readonly) NSString * healthDirectoryPath; 
@property (copy,readonly) NSURL * healthDirectoryURL; 
@property (copy,readonly) NSString * medicalIDDirectoryPath;                                                     //@synthesize medicalIDDirectoryPath=_medicalIDDirectoryPath - In the implementation block
@property (nonatomic,retain) HDAnalyticsSubmissionCoordinator * analyticsSubmissionCoordinator;                  //@synthesize analyticsSubmissionCoordinator=_analyticsSubmissionCoordinator - In the implementation block
@property (nonatomic,retain) id<HDNanoAlertSuppressionService> alertSuppressionService;                          //@synthesize alertSuppressionService=_alertSuppressionService - In the implementation block
@property (nonatomic,readonly) HDCloudSyncCoordinator * cloudSyncCoordinator;                                    //@synthesize cloudSyncCoordinator=_cloudSyncCoordinator - In the implementation block
@property (nonatomic,readonly) HDFeatureAvailabilityAssetManager * featureAvailabilityAssetManager;              //@synthesize featureAvailabilityAssetManager=_featureAvailabilityAssetManager - In the implementation block
@property (nonatomic,readonly) HDMaintenanceWorkCoordinator * maintenanceWorkCoordinator;                        //@synthesize maintenanceWorkCoordinator=_maintenanceWorkCoordinator - In the implementation block
@property (nonatomic,readonly) HDPrimaryProfile * primaryProfile;                                                //@synthesize primaryProfile=_primaryProfile - In the implementation block
@property (nonatomic,readonly) HDProcessStateManager * processStateManager; 
@property (nonatomic,readonly) HDProfileManager * profileManager; 
@property (nonatomic,readonly) HDQueryManager * queryManager;                                                    //@synthesize queryManager=_queryManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDPluginManager * pluginManager; 
-(id)init;
-(void)dealloc;
-(id)mainQueue;
-(void)start;
-(HDXPCListener *)serviceListener;
-(_HKBehavior *)behavior;
-(id)_setupSignal:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)invalidateAndWait;
-(HDPluginManager *)pluginManager;
-(void)_setUpSignalHandlers;
-(HDPrimaryProfile *)primaryProfile;
-(HDXPCAlarmScheduler *)alarmScheduler;
-(id)diagnosticDescription;
-(void)registerForDaemonReady:(id)arg1 ;
-(HDMaintenanceWorkCoordinator *)maintenanceWorkCoordinator;
-(void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2 ;
-(id)taskServerClasses;
-(id)nanoPairedDeviceRegistry;
-(id)pairedSyncCoordinatorWithServiceName:(id)arg1 ;
-(id)IDSServiceWithIdentifier:(id)arg1 ;
-(id)healthDomainAccessorWithPairedDevice:(id)arg1 ;
-(void)unitTest_queryServerDidInit:(id)arg1 ;
-(HDProcessStateManager *)processStateManager;
-(NSString *)medicalIDDirectoryPath;
-(id)healthLiteUserDefaultsDomain;
-(HDContentProtectionManager *)contentProtectionManager;
-(void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(HDProfileManager *)profileManager;
-(HDAnalyticsSubmissionCoordinator *)analyticsSubmissionCoordinator;
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(HDCloudSyncCoordinator *)cloudSyncCoordinator;
-(id)initWithHealthDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 ;
-(id)_newBehavior;
-(BOOL)_shouldInitializeDaemon;
-(id)_newPluginManager;
-(id)_newContentProtectionManager;
-(id)_newProcessStateManager;
-(id)_newBackgroundTaskScheduler;
-(id)_newPrimaryProfile;
-(void)unitTest_didCreateProfile:(id)arg1 ;
-(id)_newProfileManager;
-(id)_newCloudSyncCoordinator;
-(id)_newAnalyticsSubmissionCoordinator;
-(void)_registerForDeviceNameChanges;
-(void)_notifyDaemonReadyObservers;
-(void)_setUpLaunchEventHandlers;
-(void)_localeOrLanguageChanged:(id)arg1 ;
-(id)createXPCListenerWithMachServiceName:(id)arg1 ;
-(id)_bundleIdentifiersToTerminateAfterObliteration;
-(void)terminateClean:(BOOL)arg1 reason:(id)arg2 ;
-(void)_terminationCleanup;
-(void)exitClean:(BOOL)arg1 reason:(id)arg2 ;
-(void)_handleSigterm;
-(void)_setUpNotifydEventHandler;
-(void)_setUpDistnotedEventHandler;
-(void)_setupMemoryWarningHandler;
-(void)_resetPrivacySettings;
-(void)_handleLaunchServicesEvent:(id)arg1 name:(id)arg2 ;
-(void)_unregisterLaunchEventDynamicallyForNotification:(const char*)arg1 ;
-(void)_registerLaunchEventDynamicallyForNotification:(const char*)arg1 ;
-(NSURL *)healthDirectoryURL;
-(void)_updateCurrentDeviceName;
-(id)daemonExtensionWithIdentifier:(id)arg1 ;
-(void)registerForLaunchNotification:(const char*)arg1 ;
-(void)unregisterForLaunchNotification:(const char*)arg1 ;
-(id)daemonExtensionsConformingToProtocol:(id)arg1 ;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(id<HDNanoAlertSuppressionService>)alertSuppressionService;
-(void)setAlertSuppressionService:(id<HDNanoAlertSuppressionService>)arg1 ;
-(id)initWithContainerDirectoryPath:(id)arg1 ;
-(void)endpointInvalidated:(id)arg1 ;
-(void)invalidateAllServersForProfile:(id)arg1 ;
-(void)setDaemonTester:(id<HDDaemonTester>)arg1 ;
-(void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(/*^block*/id)arg4 ;
-(id)healthDirectorySizeInBytes;
-(NSString *)healthDirectoryPath;
-(HDWorkoutPluginDaemonExtension *)workoutPluginExtension;
-(id)_newReferenceOntologyAsset;
-(void)unitTest_taskServerDidInit:(id)arg1 ;
-(void)setAnalyticsSubmissionCoordinator:(HDAnalyticsSubmissionCoordinator *)arg1 ;
-(HDFeatureAvailabilityAssetManager *)featureAvailabilityAssetManager;
-(HDQueryManager *)queryManager;
-(HDTaskServerRegistry *)taskServerRegistry;
-(HDDevicePowerMonitor *)devicePowerMonitor;
-(id<HDDaemonTester>)daemonTester;
@end

