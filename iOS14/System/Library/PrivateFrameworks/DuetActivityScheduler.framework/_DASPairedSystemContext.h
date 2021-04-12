/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/


@protocol _CDContext, OS_dispatch_queue, _DKKnowledgeQuerying, OS_dispatch_source, OS_os_log;
@class NSObject, NSString, NSUserDefaults, NSMutableDictionary, NSArray, NSMutableSet, NSDictionary;

@interface _DASPairedSystemContext : NSObject {

	BOOL _previousPluginStatus;
	int _previousMaxThermalPressure;
	int _recentTrafficSyncRequests;
	int _remoteForecastDeletionToken;
	id<_CDContext> _context;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSString* _identifier;
	NSUserDefaults* _persistence;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _onConditionsChange;
	/*^block*/id _onApplicationStateChange;
	double _previousDefaultThreshold;
	double _previousSyncThreshold;
	double _previousBatteryLevel;
	NSMutableDictionary* _watchKitAppStatus;
	NSString* _foregroundWatchApp;
	NSMutableDictionary* _recentlyBackgroundedApps;
	NSArray* _previousExclusiveIdentifiers;
	NSMutableSet* _previousForegroundApps;
	NSDictionary* _remoteAppLaunchCount;
	NSMutableDictionary* _launchedAppCount;
	NSObject*<OS_dispatch_source> _appUsageRefreshTimer;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) id<_CDContext> context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;                       //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;                         //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUserDefaults * persistence;                                    //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                      //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id onConditionsChange;                                             //@synthesize onConditionsChange=_onConditionsChange - In the implementation block
@property (nonatomic,copy) id onApplicationStateChange;                                       //@synthesize onApplicationStateChange=_onApplicationStateChange - In the implementation block
@property (assign,nonatomic) int previousMaxThermalPressure;                                  //@synthesize previousMaxThermalPressure=_previousMaxThermalPressure - In the implementation block
@property (assign,nonatomic) double previousDefaultThreshold;                                 //@synthesize previousDefaultThreshold=_previousDefaultThreshold - In the implementation block
@property (assign,nonatomic) double previousSyncThreshold;                                    //@synthesize previousSyncThreshold=_previousSyncThreshold - In the implementation block
@property (assign,nonatomic) double previousBatteryLevel;                                     //@synthesize previousBatteryLevel=_previousBatteryLevel - In the implementation block
@property (assign,nonatomic) BOOL previousPluginStatus;                                       //@synthesize previousPluginStatus=_previousPluginStatus - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * watchKitAppStatus;                         //@synthesize watchKitAppStatus=_watchKitAppStatus - In the implementation block
@property (assign,nonatomic) int recentTrafficSyncRequests;                                   //@synthesize recentTrafficSyncRequests=_recentTrafficSyncRequests - In the implementation block
@property (retain) NSString * foregroundWatchApp;                                             //@synthesize foregroundWatchApp=_foregroundWatchApp - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recentlyBackgroundedApps;                  //@synthesize recentlyBackgroundedApps=_recentlyBackgroundedApps - In the implementation block
@property (retain) NSArray * previousExclusiveIdentifiers;                                    //@synthesize previousExclusiveIdentifiers=_previousExclusiveIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * previousForegroundApps;                           //@synthesize previousForegroundApps=_previousForegroundApps - In the implementation block
@property (retain) NSDictionary * remoteAppLaunchCount;                                       //@synthesize remoteAppLaunchCount=_remoteAppLaunchCount - In the implementation block
@property (retain) NSMutableDictionary * launchedAppCount;                                    //@synthesize launchedAppCount=_launchedAppCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> appUsageRefreshTimer;              //@synthesize appUsageRefreshTimer=_appUsageRefreshTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                        //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) int remoteForecastDeletionToken;                                 //@synthesize remoteForecastDeletionToken=_remoteForecastDeletionToken - In the implementation block
+(void)initialize;
+(id)stringForPriority:(unsigned long long)arg1 ;
+(id)contextWithClientIdentifier:(id)arg1 callbackQueue:(id)arg2 systemConditionChangeCallback:(/*^block*/id)arg3 trafficCancelationHandler:(/*^block*/id)arg4 ;
+(id)stringForThermalLevel:(int)arg1 ;
-(NSUserDefaults *)persistence;
-(void)setPersistence:(NSUserDefaults *)arg1 ;
-(void)setPreviousPluginStatus:(BOOL)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 context:(id)arg2 knowledgeStore:(id)arg3 callbackQueue:(id)arg4 systemConditionChangeCallback:(/*^block*/id)arg5 trafficCancelationHander:(/*^block*/id)arg6 ;
-(int)watchBatteryLevel;
-(BOOL)shouldBypassApplicationUsage:(id)arg1 ;
-(void)setPreviousExclusiveIdentifiers:(NSArray *)arg1 ;
-(double)previousBatteryLevel;
-(void)setPreviousBatteryLevel:(double)arg1 ;
-(BOOL)thirdPartyAppPolicyAllowsSendingTrafficForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2 furtherChecksNecessary:(BOOL*)arg3 ;
-(void)setPreviousMaxThermalPressure:(int)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)updateAppUsageHistory;
-(NSObject*<OS_dispatch_source>)appUsageRefreshTimer;
-(NSMutableSet *)previousForegroundApps;
-(void)handleWatchAppBackgrounded;
-(double)previousDefaultThreshold;
-(void)setForegroundWatchApp:(NSString *)arg1 ;
-(BOOL)previousPluginStatus;
-(NSString *)foregroundWatchApp;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(int)previousMaxThermalPressure;
-(NSMutableDictionary *)recentlyBackgroundedApps;
-(id<_CDContext>)context;
-(void)setRecentTrafficSyncRequests:(int)arg1 ;
-(double)usageLikelihoodForApplication:(id)arg1 ;
-(void)setWatchKitAppStatus:(NSMutableDictionary *)arg1 ;
-(BOOL)batteryLevelsAllowSendingTrafficeForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2 ;
-(NSArray *)previousExclusiveIdentifiers;
-(void)setWatchKitStatus:(BOOL)arg1 forApplication:(id)arg2 ;
-(void)registerForContextChanges;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)pairedDeviceStream;
-(int)recentTrafficSyncRequests;
-(NSMutableDictionary *)watchKitAppStatus;
-(void)handleAppStateChange;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)resetBudgetForRecentlyBackgroundedAppSyncTraffic;
-(BOOL)foregroundApplicationsAllowSendingTrafficForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2 furtherChecksNecessary:(BOOL*)arg3 ;
-(BOOL)allowsSendingTrafficeForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2 isReunionOrInitialSync:(BOOL)arg3 responseValidityDuration:(double*)arg4 ;
-(void)setOnApplicationStateChange:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setPreviousDefaultThreshold:(double)arg1 ;
-(void)setLaunchedAppCount:(NSMutableDictionary *)arg1 ;
-(void)setRecentlyBackgroundedApps:(NSMutableDictionary *)arg1 ;
-(BOOL)allowSyncTrafficForRecentlyBackgroundedApp;
-(BOOL)isWatchPluggedIn;
-(void)deleteRemoteHistogram;
-(BOOL)thermalLevelsAllowSendingTrafficeForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2 ;
-(int)remoteForecastDeletionToken;
-(BOOL)isAnyThirdPartyApp:(id)arg1 ;
-(void)setPreviousSyncThreshold:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSString *)identifier;
-(void)handleConditionChange;
-(double)usageThresholdForPriority:(unsigned long long)arg1 batteryLevel:(int)arg2 isPluggedIn:(BOOL)arg3 ;
-(NSMutableDictionary *)launchedAppCount;
-(void)setRemoteForecastDeletionToken:(int)arg1 ;
-(id)onConditionsChange;
-(void)setRemoteAppLaunchCount:(NSDictionary *)arg1 ;
-(void)setAppUsageRefreshTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)readBudgetForRecentlyBackgroundedAppSyncTraffic;
-(void)setOnConditionsChange:(id)arg1 ;
-(double)previousSyncThreshold;
-(void)setPreviousForegroundApps:(NSMutableSet *)arg1 ;
-(NSDictionary *)remoteAppLaunchCount;
-(id)onApplicationStateChange;
-(BOOL)didHandleExclusiveAppChange;
-(void)setContext:(id<_CDContext>)arg1 ;
@end

