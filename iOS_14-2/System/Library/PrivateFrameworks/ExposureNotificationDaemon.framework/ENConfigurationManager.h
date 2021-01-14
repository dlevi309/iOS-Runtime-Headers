/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol ENConfigurationManagerDelegate, OS_dispatch_queue;
@class NSObject, ENConfigurationStore, ENActiveEntity, ENRegionMonitor, ENXPCTimer, ENCloudServerChannel, NSMutableDictionary;

@interface ENConfigurationManager : NSObject {

	BOOL _mobileCountryCodeOverriden;
	BOOL _prefTestHeaderEnabled;
	BOOL _prefRampTrialPeriodProfile;
	NSObject*<ENConfigurationManagerDelegate> _delegate;
	ENConfigurationStore* _configurationStore;
	ENActiveEntity* _activeEntity;
	ENRegionMonitor* _regionMonitor;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	ENXPCTimer* _serverConfigurationFetchTimer;
	ENXPCTimer* _gracePeriodConfigurationFetchTimer;
	ENCloudServerChannel* _cloudServerChannel;
	NSMutableDictionary* _regionRampModeOverride;

}

@property (assign,nonatomic) BOOL mobileCountryCodeOverriden;                                        //@synthesize mobileCountryCodeOverriden=_mobileCountryCodeOverriden - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                             //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) ENXPCTimer * serverConfigurationFetchTimer;                             //@synthesize serverConfigurationFetchTimer=_serverConfigurationFetchTimer - In the implementation block
@property (nonatomic,retain) ENXPCTimer * gracePeriodConfigurationFetchTimer;                        //@synthesize gracePeriodConfigurationFetchTimer=_gracePeriodConfigurationFetchTimer - In the implementation block
@property (nonatomic,retain) ENConfigurationStore * configurationStore;                              //@synthesize configurationStore=_configurationStore - In the implementation block
@property (nonatomic,retain) ENCloudServerChannel * cloudServerChannel;                              //@synthesize cloudServerChannel=_cloudServerChannel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * regionRampModeOverride;                           //@synthesize regionRampModeOverride=_regionRampModeOverride - In the implementation block
@property (assign,nonatomic) BOOL prefTestHeaderEnabled;                                             //@synthesize prefTestHeaderEnabled=_prefTestHeaderEnabled - In the implementation block
@property (assign,nonatomic) BOOL prefRampTrialPeriodProfile;                                        //@synthesize prefRampTrialPeriodProfile=_prefRampTrialPeriodProfile - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ENConfigurationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) ENActiveEntity * activeEntity;                                            //@synthesize activeEntity=_activeEntity - In the implementation block
@property (nonatomic,retain) ENRegionMonitor * regionMonitor;                                        //@synthesize regionMonitor=_regionMonitor - In the implementation block
+(id)staticRegionForBundleID:(id)arg1 ;
+(unsigned long long)rampModeFromServerResponse:(id)arg1 ;
+(id)iCloudServerEndpoint;
+(BOOL)verifyAppleServerResponse:(id)arg1 signatureHeader:(id)arg2 ;
+(void)_printServerConfiguration:(id)arg1 ;
+(BOOL)isRampModeEnabledFromServerResponse:(id)arg1 ;
+(double)randomSelectPercentagePerDayFromServerResponse:(id)arg1 ;
+(BOOL)serverResponse:(id)arg1 isOnRampMode:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSObject*<ENConfigurationManagerDelegate>)delegate;
-(void)activate;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_activate;
-(void)setDelegate:(NSObject*<ENConfigurationManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)dealloc;
-(ENConfigurationStore *)configurationStore;
-(BOOL)isInGracePeriodTransition;
-(ENActiveEntity *)activeEntity;
-(void)prefsChanged;
-(void)setActiveEntity:(ENActiveEntity *)arg1 ;
-(void)resetConfigurationCache;
-(ENRegionMonitor *)regionMonitor;
-(void)fetchServerConfigurationsForRegion:(id)arg1 userInitiated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithDelegate:(id)arg1 activeEntity:(id)arg2 ;
-(void)setRegionMonitor:(ENRegionMonitor *)arg1 ;
-(void)overrideRampModeForRegion:(id)arg1 rampMode:(unsigned long long)arg2 ;
-(void)regionMonitor:(id)arg1 regionDidChange:(id)arg2 ;
-(void)regionMonitor:(id)arg1 authorizationStateDidChange:(unsigned long long)arg2 ;
-(void)setCloudServerChannel:(ENCloudServerChannel *)arg1 ;
-(void)setConfigurationStore:(ENConfigurationStore *)arg1 ;
-(void)_scheduleRegionConfigurationRefresh;
-(ENXPCTimer *)serverConfigurationFetchTimer;
-(void)setServerConfigurationFetchTimer:(ENXPCTimer *)arg1 ;
-(void)_serverFetchRegionConfiguration:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)regionRampModeOverride;
-(unsigned long long)readCachedRampModeForRegion:(id)arg1 ;
-(ENCloudServerChannel *)cloudServerChannel;
-(void)_reportErrorMetricForHTTPStatus:(long long)arg1 ;
-(ENXPCTimer *)gracePeriodConfigurationFetchTimer;
-(void)setupGracePeriodFetchTimerWithDelay:(double)arg1 ;
-(void)_fetchServerConfigurationsForRegion:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processServerConfiguration:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)resetConfigurationManager;
-(void)stopGracePeriodTimer;
-(void)setGracePeriodConfigurationFetchTimer:(ENXPCTimer *)arg1 ;
-(void)updateRegionMonitorModeForCurrentRegion;
-(void)_saveAndRemoveStaleConfigurations:(id)arg1 region:(id)arg2 error:(id)arg3 ;
-(BOOL)updateRampModeForRegion:(id)arg1 rampMode:(unsigned long long)arg2 ;
-(void)setRegionRampModeOverride:(NSMutableDictionary *)arg1 ;
-(void)refreshServerConfigurationsUponProfileChange;
-(void)serverFetchRegionConfiguration:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)mobileCountryCodeOverriden;
-(void)setMobileCountryCodeOverriden:(BOOL)arg1 ;
-(BOOL)prefTestHeaderEnabled;
-(void)setPrefTestHeaderEnabled:(BOOL)arg1 ;
-(BOOL)prefRampTrialPeriodProfile;
-(void)setPrefRampTrialPeriodProfile:(BOOL)arg1 ;
@end

