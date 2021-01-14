/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
#import <libobjc.A.dylib/ApplicationObserver.h>
#import <libobjc.A.dylib/ENConfigurationManagerDelegate.h>
#import <libobjc.A.dylib/ENExposureDetectionManagerDelegate.h>
#import <libobjc.A.dylib/ENTemporaryExposureKeyManagerDelegate.h>
#import <libobjc.A.dylib/ENOnboardingManagerDelegate.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol OS_dispatch_source, OS_xpc_object, ENDaemonDelegate, OS_dispatch_queue;
@class ApplicationObserver, ENExposureDatabase, NSObject, NSMutableSet, ENActiveEntity, NSMutableDictionary, NSString, ENConfigurationManager, ENDeviceIdentityUtility, ENDifferentialPrivacyManager, ENDownloadManager, ENExposureDetectionManager, ENOnboardingManager, NSBackgroundActivityScheduler, NSMutableOrderedSet, ENRegionMonitor, CUSystemMonitor, ENTemporaryExposureKeyManager, ENTestResultManager, ENUserAlert, UNUserNotificationCenter, ENXPCTimer, SBSRemoteAlertHandle, SFClient;

@interface ENDaemon : NSObject <ApplicationObserver, ENConfigurationManagerDelegate, ENExposureDetectionManagerDelegate, ENTemporaryExposureKeyManagerDelegate, ENOnboardingManagerDelegate, SBSRemoteAlertHandleObserver, UNUserNotificationCenterDelegate> {

	ApplicationObserver* _applicationObserver;
	BOOL _activateCalled;
	BOOL _btMonitorStarted;
	ENExposureDatabase* _exposureDatabase;
	NSObject*<OS_dispatch_source> _pauseTimer;
	int _prefsChangedNotifyToken;
	int _profileChangedNotifyToken;
	unsigned long long _startTicks;
	unsigned long long _startTicksFull;
	unsigned long long _stateHandler;
	int _tccChangedNotifyToken;
	BOOL _updatePending;
	NSMutableSet* _xpcConnections;
	NSObject*<OS_xpc_object> _xpcListener;
	BOOL _automaticRegionSwitchEnabled;
	BOOL _availabilityAlertDisabled;
	BOOL _onboardingFirstTime;
	BOOL _wasInRestrictedStatus;
	BOOL _wasInDifferentActiveRegion;
	BOOL _monthlySummaryDisabled;
	BOOL _prefAggressiveScanning;
	BOOL _prefConfigurationManagerEnabled;
	BOOL _prefDeveloperServerConfiguration;
	BOOL _prefEnableNKD;
	BOOL _prefEnabled;
	BOOL _prefLoggingSensitive;
	BOOL _prefLoggingRPI;
	BOOL _prefPaused;
	BOOL _prefRegionMonitorTestMode;
	BOOL _prefServerForceDisable;
	BOOL _prefSkipExposureWindowShuffling;
	BOOL _prefSkipFileSigning;
	BOOL _prefStoreDemoMode;
	BOOL _prefTCCAllowWithoutApps;
	unsigned _onboardingTrigger;
	unsigned _prefRateLimitMaxAPICount;
	unsigned _prefRateLimitMaxAPICountV2;
	unsigned _usageUserEnabled;
	unsigned _usageUserDisabled;
	unsigned _usageUserPaused;
	unsigned _usageUserUnpaused;
	unsigned _usageUserAlertShare;
	unsigned _usageUserAlertDontShare;
	unsigned _usageUserAlertReset;
	unsigned _usageUserAlertDontReset;
	unsigned _usageManagerActivate;
	unsigned _usageGetDiagnosisKeys;
	unsigned _usageResetAllData;
	unsigned _usageExposureDetectFileActivate;
	unsigned _usageExposureDetectFileAddKeys;
	unsigned _usageExposureDetectFileFinish;
	unsigned _usageExposureDetectFileGetExposures;
	unsigned _usageExposureDetectFileGetExposureWindows;
	id<ENDaemonDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ENActiveEntity* _activeEntity;
	NSMutableDictionary* _appActivities;
	long long _travelStatus;
	NSString* _btTracingAppID;
	ENConfigurationManager* _configurationManager;
	ENDeviceIdentityUtility* _deviceIdentityUtility;
	ENDifferentialPrivacyManager* _differentialPrivacyManager;
	ENDownloadManager* _downloadManager;
	ENExposureDetectionManager* _exposureDetectionManager;
	ENOnboardingManager* _onboardingManager;
	long long _overallStatus;
	NSBackgroundActivityScheduler* _persistencePurgeScheduler;
	NSMutableOrderedSet* _previouslyTrackedApps;
	ENRegionMonitor* _regionMonitor;
	NSMutableDictionary* _remoteUISessions;
	CUSystemMonitor* _systemMonitor;
	ENTemporaryExposureKeyManager* _temporaryExposureKeyManager;
	ENTestResultManager* _testResultManager;
	ENUserAlert* _userAlert;
	UNUserNotificationCenter* _userNotificationCenter;
	ENXPCTimer* _monthlyNotificationTimer;
	ENXPCTimer* _onboardingTimer;
	double _prefDatabasePurgeInterval;
	double _prefServerConfigurationRefreshInterval;
	long long _prefDifferentialPrivacyConsent;
	NSString* _prefRegionIdentifierOverride;
	SBSRemoteAlertHandle* _buddyAlertHandle;
	SFClient* _sharingClient;

}

@property (nonatomic,copy) ENActiveEntity * activeEntity;                                              //@synthesize activeEntity=_activeEntity - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appActivities;                                      //@synthesize appActivities=_appActivities - In the implementation block
@property (assign,nonatomic) BOOL automaticRegionSwitchEnabled;                                        //@synthesize automaticRegionSwitchEnabled=_automaticRegionSwitchEnabled - In the implementation block
@property (assign,nonatomic) BOOL availabilityAlertDisabled;                                           //@synthesize availabilityAlertDisabled=_availabilityAlertDisabled - In the implementation block
@property (assign,nonatomic) long long travelStatus;                                                   //@synthesize travelStatus=_travelStatus - In the implementation block
@property (nonatomic,copy) NSString * btTracingAppID;                                                  //@synthesize btTracingAppID=_btTracingAppID - In the implementation block
@property (nonatomic,retain) ENConfigurationManager * configurationManager;                            //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) ENDeviceIdentityUtility * deviceIdentityUtility;                          //@synthesize deviceIdentityUtility=_deviceIdentityUtility - In the implementation block
@property (nonatomic,retain) ENDifferentialPrivacyManager * differentialPrivacyManager;                //@synthesize differentialPrivacyManager=_differentialPrivacyManager - In the implementation block
@property (nonatomic,retain) ENDownloadManager * downloadManager;                                      //@synthesize downloadManager=_downloadManager - In the implementation block
@property (nonatomic,retain) ENExposureDetectionManager * exposureDetectionManager;                    //@synthesize exposureDetectionManager=_exposureDetectionManager - In the implementation block
@property (nonatomic,retain) ENOnboardingManager * onboardingManager;                                  //@synthesize onboardingManager=_onboardingManager - In the implementation block
@property (assign,nonatomic) BOOL onboardingFirstTime;                                                 //@synthesize onboardingFirstTime=_onboardingFirstTime - In the implementation block
@property (assign,nonatomic) unsigned onboardingTrigger;                                               //@synthesize onboardingTrigger=_onboardingTrigger - In the implementation block
@property (assign,nonatomic) long long overallStatus;                                                  //@synthesize overallStatus=_overallStatus - In the implementation block
@property (nonatomic,retain) NSBackgroundActivityScheduler * persistencePurgeScheduler;                //@synthesize persistencePurgeScheduler=_persistencePurgeScheduler - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * previouslyTrackedApps;                              //@synthesize previouslyTrackedApps=_previouslyTrackedApps - In the implementation block
@property (nonatomic,retain) ENRegionMonitor * regionMonitor;                                          //@synthesize regionMonitor=_regionMonitor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteUISessions;                                   //@synthesize remoteUISessions=_remoteUISessions - In the implementation block
@property (nonatomic,readonly) unsigned stateMetricVersion; 
@property (nonatomic,retain) CUSystemMonitor * systemMonitor;                                          //@synthesize systemMonitor=_systemMonitor - In the implementation block
@property (nonatomic,retain) ENTemporaryExposureKeyManager * temporaryExposureKeyManager;              //@synthesize temporaryExposureKeyManager=_temporaryExposureKeyManager - In the implementation block
@property (nonatomic,retain) ENTestResultManager * testResultManager;                                  //@synthesize testResultManager=_testResultManager - In the implementation block
@property (nonatomic,retain) ENUserAlert * userAlert;                                                  //@synthesize userAlert=_userAlert - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * userNotificationCenter;                        //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL wasInRestrictedStatus;                                               //@synthesize wasInRestrictedStatus=_wasInRestrictedStatus - In the implementation block
@property (assign,nonatomic) BOOL wasInDifferentActiveRegion;                                          //@synthesize wasInDifferentActiveRegion=_wasInDifferentActiveRegion - In the implementation block
@property (assign,nonatomic) BOOL monthlySummaryDisabled;                                              //@synthesize monthlySummaryDisabled=_monthlySummaryDisabled - In the implementation block
@property (nonatomic,retain) ENXPCTimer * monthlyNotificationTimer;                                    //@synthesize monthlyNotificationTimer=_monthlyNotificationTimer - In the implementation block
@property (nonatomic,retain) ENXPCTimer * onboardingTimer;                                             //@synthesize onboardingTimer=_onboardingTimer - In the implementation block
@property (assign,nonatomic) BOOL prefAggressiveScanning;                                              //@synthesize prefAggressiveScanning=_prefAggressiveScanning - In the implementation block
@property (assign,nonatomic) BOOL prefConfigurationManagerEnabled;                                     //@synthesize prefConfigurationManagerEnabled=_prefConfigurationManagerEnabled - In the implementation block
@property (assign,nonatomic) double prefDatabasePurgeInterval;                                         //@synthesize prefDatabasePurgeInterval=_prefDatabasePurgeInterval - In the implementation block
@property (assign,nonatomic) BOOL prefDeveloperServerConfiguration;                                    //@synthesize prefDeveloperServerConfiguration=_prefDeveloperServerConfiguration - In the implementation block
@property (assign,nonatomic) BOOL prefEnableNKD;                                                       //@synthesize prefEnableNKD=_prefEnableNKD - In the implementation block
@property (assign,nonatomic) double prefServerConfigurationRefreshInterval;                            //@synthesize prefServerConfigurationRefreshInterval=_prefServerConfigurationRefreshInterval - In the implementation block
@property (assign,nonatomic) long long prefDifferentialPrivacyConsent;                                 //@synthesize prefDifferentialPrivacyConsent=_prefDifferentialPrivacyConsent - In the implementation block
@property (assign,nonatomic) BOOL prefEnabled;                                                         //@synthesize prefEnabled=_prefEnabled - In the implementation block
@property (assign,nonatomic) BOOL prefLoggingSensitive;                                                //@synthesize prefLoggingSensitive=_prefLoggingSensitive - In the implementation block
@property (assign,nonatomic) BOOL prefLoggingRPI;                                                      //@synthesize prefLoggingRPI=_prefLoggingRPI - In the implementation block
@property (assign,nonatomic) BOOL prefPaused;                                                          //@synthesize prefPaused=_prefPaused - In the implementation block
@property (assign,nonatomic) unsigned prefRateLimitMaxAPICount;                                        //@synthesize prefRateLimitMaxAPICount=_prefRateLimitMaxAPICount - In the implementation block
@property (assign,nonatomic) unsigned prefRateLimitMaxAPICountV2;                                      //@synthesize prefRateLimitMaxAPICountV2=_prefRateLimitMaxAPICountV2 - In the implementation block
@property (nonatomic,copy) NSString * prefRegionIdentifierOverride;                                    //@synthesize prefRegionIdentifierOverride=_prefRegionIdentifierOverride - In the implementation block
@property (assign,nonatomic) BOOL prefRegionMonitorTestMode;                                           //@synthesize prefRegionMonitorTestMode=_prefRegionMonitorTestMode - In the implementation block
@property (assign,nonatomic) BOOL prefServerForceDisable;                                              //@synthesize prefServerForceDisable=_prefServerForceDisable - In the implementation block
@property (assign,nonatomic) BOOL prefSkipExposureWindowShuffling;                                     //@synthesize prefSkipExposureWindowShuffling=_prefSkipExposureWindowShuffling - In the implementation block
@property (assign,nonatomic) BOOL prefSkipFileSigning;                                                 //@synthesize prefSkipFileSigning=_prefSkipFileSigning - In the implementation block
@property (assign,nonatomic) BOOL prefStoreDemoMode;                                                   //@synthesize prefStoreDemoMode=_prefStoreDemoMode - In the implementation block
@property (assign,nonatomic) BOOL prefTCCAllowWithoutApps;                                             //@synthesize prefTCCAllowWithoutApps=_prefTCCAllowWithoutApps - In the implementation block
@property (assign,nonatomic) unsigned usageUserEnabled;                                                //@synthesize usageUserEnabled=_usageUserEnabled - In the implementation block
@property (assign,nonatomic) unsigned usageUserDisabled;                                               //@synthesize usageUserDisabled=_usageUserDisabled - In the implementation block
@property (assign,nonatomic) unsigned usageUserPaused;                                                 //@synthesize usageUserPaused=_usageUserPaused - In the implementation block
@property (assign,nonatomic) unsigned usageUserUnpaused;                                               //@synthesize usageUserUnpaused=_usageUserUnpaused - In the implementation block
@property (assign,nonatomic) unsigned usageUserAlertShare;                                             //@synthesize usageUserAlertShare=_usageUserAlertShare - In the implementation block
@property (assign,nonatomic) unsigned usageUserAlertDontShare;                                         //@synthesize usageUserAlertDontShare=_usageUserAlertDontShare - In the implementation block
@property (assign,nonatomic) unsigned usageUserAlertReset;                                             //@synthesize usageUserAlertReset=_usageUserAlertReset - In the implementation block
@property (assign,nonatomic) unsigned usageUserAlertDontReset;                                         //@synthesize usageUserAlertDontReset=_usageUserAlertDontReset - In the implementation block
@property (assign,nonatomic) unsigned usageManagerActivate;                                            //@synthesize usageManagerActivate=_usageManagerActivate - In the implementation block
@property (assign,nonatomic) unsigned usageGetDiagnosisKeys;                                           //@synthesize usageGetDiagnosisKeys=_usageGetDiagnosisKeys - In the implementation block
@property (assign,nonatomic) unsigned usageResetAllData;                                               //@synthesize usageResetAllData=_usageResetAllData - In the implementation block
@property (assign,nonatomic) unsigned usageExposureDetectFileActivate;                                 //@synthesize usageExposureDetectFileActivate=_usageExposureDetectFileActivate - In the implementation block
@property (assign,nonatomic) unsigned usageExposureDetectFileAddKeys;                                  //@synthesize usageExposureDetectFileAddKeys=_usageExposureDetectFileAddKeys - In the implementation block
@property (assign,nonatomic) unsigned usageExposureDetectFileFinish;                                   //@synthesize usageExposureDetectFileFinish=_usageExposureDetectFileFinish - In the implementation block
@property (assign,nonatomic) unsigned usageExposureDetectFileGetExposures;                             //@synthesize usageExposureDetectFileGetExposures=_usageExposureDetectFileGetExposures - In the implementation block
@property (assign,nonatomic) unsigned usageExposureDetectFileGetExposureWindows;                       //@synthesize usageExposureDetectFileGetExposureWindows=_usageExposureDetectFileGetExposureWindows - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertHandle * buddyAlertHandle;                                  //@synthesize buddyAlertHandle=_buddyAlertHandle - In the implementation block
@property (nonatomic,retain) SFClient * sharingClient;                                                 //@synthesize sharingClient=_sharingClient - In the implementation block
@property (assign,nonatomic,__weak) id<ENDaemonDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UNUserNotificationCenter *)userNotificationCenter;
-(ENConfigurationManager *)configurationManager;
-(void)setConfigurationManager:(ENConfigurationManager *)arg1 ;
-(void)_invalidate;
-(id)init;
-(id<ENDaemonDelegate>)delegate;
-(void)setUserNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CUSystemMonitor *)systemMonitor;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_activate;
-(void)setDelegate:(id<ENDaemonDelegate>)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSString *)description;
-(void)applicationsDidInstall:(id)arg1 ;
-(ENDownloadManager *)downloadManager;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)setSystemMonitor:(CUSystemMonitor *)arg1 ;
-(void)setDownloadManager:(ENDownloadManager *)arg1 ;
-(void)_update;
-(void)invalidate;
-(void)_scheduleUpdate;
-(ENOnboardingManager *)onboardingManager;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setPreviouslyTrackedApps:(NSMutableOrderedSet *)arg1 ;
-(long long)getOverallStatus;
-(ENActiveEntity *)activeEntity;
-(BOOL)_writePreferenceActiveEntity:(id)arg1 ;
-(id)_readPreferenceActiveEntity;
-(void)_disableAvailabilityAlertIfNeeded;
-(void)setMonthlySummaryDisabled:(BOOL)arg1 ;
-(void)_xpcListenerEvent:(id)arg1 ;
-(void)prefsChanged;
-(void)_tccChanged;
-(unsigned)stateMetricVersion;
-(void)_regionMonitorEnsureStarted;
-(void)_configurationManagerEnsureStarted;
-(void)pauseUpdate;
-(void)_bluetoothMonitorEnsureStopped;
-(void)_bluetoothTracingEnsureStopped;
-(void)_configurationManagerEnsureStopped;
-(void)_databasesEnsureClosed;
-(void)_exposureManagersEnsureStopped;
-(void)_regionMonitorEnsureStopped;
-(void)notifyUserWithStatus:(long long)arg1 ;
-(void)monthlyTriggerActivateWithIntervalOverride:(unsigned)arg1 ;
-(void)xpcReportStatus;
-(long long)overallStatus;
-(void)postENOffNotification;
-(void)setActiveEntity:(ENActiveEntity *)arg1 ;
-(void)_fetchPrefRegionConfig:(id)arg1 oldCustomCountryCode:(id)arg2 ;
-(BOOL)monthlySummaryDisabled;
-(unsigned)usageResetAllData;
-(void)setUsageResetAllData:(unsigned)arg1 ;
-(id)getExposureDatabaseAndReturnError:(id*)arg1 ;
-(ENTemporaryExposureKeyManager *)temporaryExposureKeyManager;
-(ENRegionMonitor *)regionMonitor;
-(void)onboardingTriggerDeactivate;
-(void)_turnOffEN;
-(id)_getBundleIDFromBundle:(CFBundleRef)arg1 ;
-(void)startServerConfigurationFetchForRegion:(id)arg1 ;
-(void)monthlyTriggerDeactivate;
-(BOOL)_shouldDisableMonthlySummary;
-(ENXPCTimer *)monthlyNotificationTimer;
-(void)postMonthlySummaryNotificationForAppBundleIdentifier:(id)arg1 ;
-(void)setMonthlyNotificationTimer:(ENXPCTimer *)arg1 ;
-(void)fetchServerConfigurationForAppBundleIdentifier:(id)arg1 infoDictionary:(id)arg2 ;
-(BOOL)_bluetoothMonitorShouldRun;
-(void)_bluetoothMonitorEnsureStarted;
-(void)_bluetoothTracingEnsureStarted;
-(void)_databasesEnsureOpened;
-(void)_exposureManagersEnsureStarted;
-(void)_differentialPrivacyEnsureStarted;
-(void)_differentialPrivacyEnsureStopped;
-(void)_schedulePeriodicPersistencePurge;
-(void)_updateOverallStatus;
-(void)_postUserNotificationWithRequest:(id)arg1 authorizationFailureHandler:(/*^block*/id)arg2 ;
-(SBSRemoteAlertHandle *)buddyAlertHandle;
-(void)setBuddyAlertHandle:(SBSRemoteAlertHandle *)arg1 ;
-(void)tearDownAlertHandle;
-(SFClient *)sharingClient;
-(void)setSharingClient:(SFClient *)arg1 ;
-(id)_readPreferenceRegionPendingOnboarding;
-(void)_deferConsentForPendingRegion;
-(void)_enApplicationDidInstall:(id)arg1 ;
-(void)_enApplicationDidUninstall:(id)arg1 ;
-(void)bluetoothPowerStateChanged;
-(void)_bluetoothTracingStop;
-(void)setRegionMonitor:(ENRegionMonitor *)arg1 ;
-(id)regionForBundleInfo:(id)arg1 ;
-(void)_exposureNotificationRegionConfigurationChanged:(id)arg1 ;
-(void)fetchServerConfigurationForRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)postAnalyticsOptInNotificationForRegion:(id)arg1 ;
-(BOOL)_writePreferenceRegionPendingOnboarding:(id)arg1 ;
-(void)postOnboardingNotificationForRegion:(id)arg1 ;
-(void)onboardingTriggerRetry:(unsigned)arg1 ;
-(BOOL)tccAccessForBundleID:(id)arg1 ;
-(id)_getInfoDictFromAppProxy:(id)arg1 ;
-(void)_exposureNotificationRegionConfigurationRemoved:(id)arg1 ;
-(void)_periodicPersistencePurge;
-(id)_getDelegateAndReturnError:(id*)arg1 ;
-(BOOL)_isNKDActive;
-(id)_getDownloadEndpointsAndReturnError:(id*)arg1 ;
-(id)advertisementDatabaseQuerySessionWithAttenuationThreshold:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)_postExposureNotificationForClassification:(id)arg1 status:(long long)arg2 region:(id)arg3 ;
-(void)postExposureNotification:(id)arg1 ;
-(void)presentBuddyForRegion:(id)arg1 errorHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)legacyHistoryPath;
-(id)loadLegacyHistorySinceTime:(double)arg1 ;
-(ENXPCTimer *)onboardingTimer;
-(void)setOnboardingTimer:(ENXPCTimer *)arg1 ;
-(BOOL)isOnboardingNeeded;
-(void)_xpcConnectionAccept:(id)arg1 ;
-(BOOL)prefSkipFileSigning;
-(void)xpcPreAuthorizedDiagnosisKeysAvailable;
-(void)configurationManager:(id)arg1 exposureNotificationRegionConfigurationChanged:(id)arg2 ;
-(void)configurationManager:(id)arg1 exposureNotificationRegionConfigurationRemovedForRegion:(id)arg2 ;
-(void)configurationManager:(id)arg1 errorDetected:(unsigned)arg2 ;
-(id)exposureDetectionManager:(id)arg1 advertisementDatabaseQuerySessionWithAttenuationThreshold:(unsigned char)arg2 error:(id*)arg3 ;
-(id)activeRegionForExposureDetectionManager:(id)arg1 ;
-(void)exposureDetectionManager:(id)arg1 errorDetected:(unsigned)arg2 ;
-(void)exposureDetectionManager:(id)arg1 finishedSessionWithResult:(id)arg2 ;
-(id)temporaryExposureKeyManager:(id)arg1 retrieveTEKHistoryIncludingActive:(BOOL)arg2 generateNewTEK:(BOOL)arg3 ;
-(void)onboardingManagerDidObserveDeviceUnlock:(id)arg1 ;
-(id)_getInfoDictFromBundle:(CFBundleRef)arg1 ;
-(void)_resetDataWithFlags:(unsigned)arg1 ;
-(void)_setActiveRegionForApp:(id)arg1 infoDict:(id)arg2 ;
-(unsigned)appDequeueActivityFlagsWithBundleID:(id)arg1 ;
-(void)appLaunchWithBundleID:(id)arg1 activity:(unsigned)arg2 ;
-(void)postExposureSummaryAccessNotificationWithAppBundleIdentifier:(id)arg1 string:(id)arg2 ;
-(void)_migrateLegacyHistoryIfNecessary;
-(id)loadHistorySinceTime:(double)arg1 ;
-(void)xpcConnectionInvalidated:(id)arg1 ;
-(NSMutableDictionary *)appActivities;
-(void)setAppActivities:(NSMutableDictionary *)arg1 ;
-(BOOL)automaticRegionSwitchEnabled;
-(void)setAutomaticRegionSwitchEnabled:(BOOL)arg1 ;
-(BOOL)availabilityAlertDisabled;
-(void)setAvailabilityAlertDisabled:(BOOL)arg1 ;
-(long long)travelStatus;
-(void)setTravelStatus:(long long)arg1 ;
-(NSString *)btTracingAppID;
-(void)setBtTracingAppID:(NSString *)arg1 ;
-(ENDeviceIdentityUtility *)deviceIdentityUtility;
-(void)setDeviceIdentityUtility:(ENDeviceIdentityUtility *)arg1 ;
-(ENDifferentialPrivacyManager *)differentialPrivacyManager;
-(void)setDifferentialPrivacyManager:(ENDifferentialPrivacyManager *)arg1 ;
-(ENExposureDetectionManager *)exposureDetectionManager;
-(void)setExposureDetectionManager:(ENExposureDetectionManager *)arg1 ;
-(void)setOnboardingManager:(ENOnboardingManager *)arg1 ;
-(BOOL)onboardingFirstTime;
-(void)setOnboardingFirstTime:(BOOL)arg1 ;
-(unsigned)onboardingTrigger;
-(void)setOnboardingTrigger:(unsigned)arg1 ;
-(void)setOverallStatus:(long long)arg1 ;
-(NSBackgroundActivityScheduler *)persistencePurgeScheduler;
-(void)setPersistencePurgeScheduler:(NSBackgroundActivityScheduler *)arg1 ;
-(NSMutableOrderedSet *)previouslyTrackedApps;
-(NSMutableDictionary *)remoteUISessions;
-(void)setRemoteUISessions:(NSMutableDictionary *)arg1 ;
-(void)setTemporaryExposureKeyManager:(ENTemporaryExposureKeyManager *)arg1 ;
-(ENTestResultManager *)testResultManager;
-(void)setTestResultManager:(ENTestResultManager *)arg1 ;
-(ENUserAlert *)userAlert;
-(void)setUserAlert:(ENUserAlert *)arg1 ;
-(BOOL)wasInRestrictedStatus;
-(void)setWasInRestrictedStatus:(BOOL)arg1 ;
-(BOOL)wasInDifferentActiveRegion;
-(void)setWasInDifferentActiveRegion:(BOOL)arg1 ;
-(BOOL)prefAggressiveScanning;
-(void)setPrefAggressiveScanning:(BOOL)arg1 ;
-(BOOL)prefConfigurationManagerEnabled;
-(void)setPrefConfigurationManagerEnabled:(BOOL)arg1 ;
-(double)prefDatabasePurgeInterval;
-(void)setPrefDatabasePurgeInterval:(double)arg1 ;
-(BOOL)prefDeveloperServerConfiguration;
-(void)setPrefDeveloperServerConfiguration:(BOOL)arg1 ;
-(BOOL)prefEnableNKD;
-(void)setPrefEnableNKD:(BOOL)arg1 ;
-(double)prefServerConfigurationRefreshInterval;
-(void)setPrefServerConfigurationRefreshInterval:(double)arg1 ;
-(long long)prefDifferentialPrivacyConsent;
-(void)setPrefDifferentialPrivacyConsent:(long long)arg1 ;
-(BOOL)prefEnabled;
-(void)setPrefEnabled:(BOOL)arg1 ;
-(BOOL)prefLoggingSensitive;
-(void)setPrefLoggingSensitive:(BOOL)arg1 ;
-(BOOL)prefLoggingRPI;
-(void)setPrefLoggingRPI:(BOOL)arg1 ;
-(BOOL)prefPaused;
-(void)setPrefPaused:(BOOL)arg1 ;
-(unsigned)prefRateLimitMaxAPICount;
-(void)setPrefRateLimitMaxAPICount:(unsigned)arg1 ;
-(unsigned)prefRateLimitMaxAPICountV2;
-(void)setPrefRateLimitMaxAPICountV2:(unsigned)arg1 ;
-(NSString *)prefRegionIdentifierOverride;
-(void)setPrefRegionIdentifierOverride:(NSString *)arg1 ;
-(BOOL)prefRegionMonitorTestMode;
-(void)setPrefRegionMonitorTestMode:(BOOL)arg1 ;
-(BOOL)prefServerForceDisable;
-(void)setPrefServerForceDisable:(BOOL)arg1 ;
-(BOOL)prefSkipExposureWindowShuffling;
-(void)setPrefSkipExposureWindowShuffling:(BOOL)arg1 ;
-(void)setPrefSkipFileSigning:(BOOL)arg1 ;
-(BOOL)prefStoreDemoMode;
-(void)setPrefStoreDemoMode:(BOOL)arg1 ;
-(BOOL)prefTCCAllowWithoutApps;
-(void)setPrefTCCAllowWithoutApps:(BOOL)arg1 ;
-(unsigned)usageUserEnabled;
-(void)setUsageUserEnabled:(unsigned)arg1 ;
-(unsigned)usageUserDisabled;
-(void)setUsageUserDisabled:(unsigned)arg1 ;
-(unsigned)usageUserPaused;
-(void)setUsageUserPaused:(unsigned)arg1 ;
-(unsigned)usageUserUnpaused;
-(void)setUsageUserUnpaused:(unsigned)arg1 ;
-(unsigned)usageUserAlertShare;
-(void)setUsageUserAlertShare:(unsigned)arg1 ;
-(unsigned)usageUserAlertDontShare;
-(void)setUsageUserAlertDontShare:(unsigned)arg1 ;
-(unsigned)usageUserAlertReset;
-(void)setUsageUserAlertReset:(unsigned)arg1 ;
-(unsigned)usageUserAlertDontReset;
-(void)setUsageUserAlertDontReset:(unsigned)arg1 ;
-(unsigned)usageManagerActivate;
-(void)setUsageManagerActivate:(unsigned)arg1 ;
-(unsigned)usageGetDiagnosisKeys;
-(void)setUsageGetDiagnosisKeys:(unsigned)arg1 ;
-(unsigned)usageExposureDetectFileActivate;
-(void)setUsageExposureDetectFileActivate:(unsigned)arg1 ;
-(unsigned)usageExposureDetectFileAddKeys;
-(void)setUsageExposureDetectFileAddKeys:(unsigned)arg1 ;
-(unsigned)usageExposureDetectFileFinish;
-(void)setUsageExposureDetectFileFinish:(unsigned)arg1 ;
-(unsigned)usageExposureDetectFileGetExposures;
-(void)setUsageExposureDetectFileGetExposures:(unsigned)arg1 ;
-(unsigned)usageExposureDetectFileGetExposureWindows;
-(void)setUsageExposureDetectFileGetExposureWindows:(unsigned)arg1 ;
@end
