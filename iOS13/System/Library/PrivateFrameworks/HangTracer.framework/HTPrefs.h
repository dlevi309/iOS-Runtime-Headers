/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HangTracer.framework/HangTracer
*/


@protocol OS_dispatch_queue;
#import <HangTracer/HangTracer-Structs.h>
@class NSObject, NSString, NSDictionary;

@interface HTPrefs : NSObject {

	BOOL _isInternal;
	BOOL _customerModeEnabled;
	BOOL _hangtracerEnabled;
	BOOL _htTailspinEnabled;
	BOOL _hudEnabled;
	BOOL _shouldCollectOSSignposts;
	BOOL _shouldCollectOSSignpostsDeferred;
	BOOL _shouldSaveTailspins;
	BOOL _shouldCompressSavedTailspins;
	BOOL _thirdPartyRunLoopHangLogsEnabled;
	BOOL _shouldIncludeDiskInfo;
	BOOL _shouldIncludeDisplayData;
	BOOL _shouldIncludeNetworkState;
	BOOL _fenceTrackingEnabled;
	BOOL _slowAppActivationTailspinEnabled;
	BOOL _signpostMonitoringEnabled;
	BOOL _appActivationLoggingEnabled;
	BOOL _memoryLoggingEnabled;
	BOOL _pdseHangTracerKillSwitch;
	BOOL _pdseHTRateOnlyKillSwitch;
	BOOL _pdseHTThirdPartyKillSwitch;
	BOOL _pdseSentryKillSwitch;
	BOOL _pdseCATailspinKillSwitch;
	BOOL _pdseAllowEnableTailspin;
	BOOL _eplEnabledProfile;
	BOOL _eplEnabled;
	BOOL _hasInternalSettings;
	BOOL _keepTailspinsLegacy;
	BOOL _shouldPostHTPrefsChangedNotification;
	BOOL _shouldAllowSentryEnablement;
	BOOL __isInternalNoOverride;
	int _runLoopHangDailyLogLimit;
	int _runLoopHangPerPeriodLogLimit;
	int _runLoopLongHangDailyLogLimit;
	int _runloopHangThirdPartyDailyLogLimit;
	int _slowAppActivationPerAppMaxLogLimit;
	int _slowAppActivationDailyLogLimit;
	int _signpostMonitoringDailyLogLimit;
	int _signpostMonitoringPerPeriodLogLimit;
	unsigned _appActivationLoggingMaxActivationLimit;
	unsigned _memoryLoggingIntervalSec;
	int _pdseHTPeriodDays;
	int _pdseHTRateOnlyPeriodDays;
	int _pdseHTThirdPartyPeriodDays;
	int _pdseSentryPeriodDays;
	int _pdseCATailspinPeriodDays;
	unsigned _hudThresholdMSec;
	HTPrefInit* _prefInitList;
	unsigned long long _savedTailspinMaxMB;
	double _runloopHangPercentHeavyLogs;
	unsigned long long _runloopHangTimeoutDurationMSec;
	unsigned long long _runloopHangDurationThresholdMSec;
	unsigned long long _runloopLongHangDurationThresholdMSec;
	unsigned long long _runloopHangThirdPartyDurationThresholdMSec;
	unsigned long long _slowAppActivationThresholdMSec;
	double _appActivationLoggingCPUUtilizationThresholdMSec;
	double _eplTimeoutTimestampSec;
	unsigned long long _reportPeriodMATU;
	NSObject*<OS_dispatch_queue> __prefsQueue;
	NSString* _tailspinSaveFormat;
	NSDictionary* __installedHTProfileDict;
	NSString* __profilePath;
	CFStringRef __htTaskingDomain;
	CFStringRef __htDomain;

}

@property (retain) NSObject*<OS_dispatch_queue> _prefsQueue;                                     //@synthesize _prefsQueue=__prefsQueue - In the implementation block
@property (retain) NSString * tailspinSaveFormat;                                                //@synthesize tailspinSaveFormat=_tailspinSaveFormat - In the implementation block
@property (assign) BOOL keepTailspinsLegacy;                                                     //@synthesize keepTailspinsLegacy=_keepTailspinsLegacy - In the implementation block
@property (retain) NSDictionary * _installedHTProfileDict;                                       //@synthesize _installedHTProfileDict=__installedHTProfileDict - In the implementation block
@property (retain) NSString * _profilePath;                                                      //@synthesize _profilePath=__profilePath - In the implementation block
@property (assign) CFStringRef _htTaskingDomain;                                                 //@synthesize _htTaskingDomain=__htTaskingDomain - In the implementation block
@property (assign) CFStringRef _htDomain;                                                        //@synthesize _htDomain=__htDomain - In the implementation block
@property (assign) BOOL shouldPostHTPrefsChangedNotification;                                    //@synthesize shouldPostHTPrefsChangedNotification=_shouldPostHTPrefsChangedNotification - In the implementation block
@property (assign) BOOL shouldAllowSentryEnablement;                                             //@synthesize shouldAllowSentryEnablement=_shouldAllowSentryEnablement - In the implementation block
@property (assign) BOOL _isInternalNoOverride;                                                   //@synthesize _isInternalNoOverride=__isInternalNoOverride - In the implementation block
@property (readonly) HTPrefInit* prefInitList;                                                   //@synthesize prefInitList=_prefInitList - In the implementation block
@property (assign) unsigned memoryLoggingIntervalSec;                                            //@synthesize memoryLoggingIntervalSec=_memoryLoggingIntervalSec - In the implementation block
@property (readonly) BOOL isInternal;                                                            //@synthesize isInternal=_isInternal - In the implementation block
@property (readonly) BOOL customerModeEnabled;                                                   //@synthesize customerModeEnabled=_customerModeEnabled - In the implementation block
@property (readonly) BOOL hangtracerEnabled;                                                     //@synthesize hangtracerEnabled=_hangtracerEnabled - In the implementation block
@property (readonly) BOOL htTailspinEnabled;                                                     //@synthesize htTailspinEnabled=_htTailspinEnabled - In the implementation block
@property (readonly) BOOL hudEnabled;                                                            //@synthesize hudEnabled=_hudEnabled - In the implementation block
@property (readonly) BOOL shouldCollectOSSignposts;                                              //@synthesize shouldCollectOSSignposts=_shouldCollectOSSignposts - In the implementation block
@property (readonly) BOOL shouldCollectOSSignpostsDeferred;                                      //@synthesize shouldCollectOSSignpostsDeferred=_shouldCollectOSSignpostsDeferred - In the implementation block
@property (readonly) BOOL shouldSaveTailspins;                                                   //@synthesize shouldSaveTailspins=_shouldSaveTailspins - In the implementation block
@property (readonly) BOOL shouldCompressSavedTailspins;                                          //@synthesize shouldCompressSavedTailspins=_shouldCompressSavedTailspins - In the implementation block
@property (readonly) unsigned long long savedTailspinMaxMB;                                      //@synthesize savedTailspinMaxMB=_savedTailspinMaxMB - In the implementation block
@property (readonly) BOOL thirdPartyRunLoopHangLogsEnabled;                                      //@synthesize thirdPartyRunLoopHangLogsEnabled=_thirdPartyRunLoopHangLogsEnabled - In the implementation block
@property (readonly) double runloopHangPercentHeavyLogs;                                         //@synthesize runloopHangPercentHeavyLogs=_runloopHangPercentHeavyLogs - In the implementation block
@property (readonly) int runLoopHangDailyLogLimit;                                               //@synthesize runLoopHangDailyLogLimit=_runLoopHangDailyLogLimit - In the implementation block
@property (readonly) int runLoopHangPerPeriodLogLimit;                                           //@synthesize runLoopHangPerPeriodLogLimit=_runLoopHangPerPeriodLogLimit - In the implementation block
@property (readonly) int runLoopLongHangDailyLogLimit;                                           //@synthesize runLoopLongHangDailyLogLimit=_runLoopLongHangDailyLogLimit - In the implementation block
@property (readonly) int runloopHangThirdPartyDailyLogLimit;                                     //@synthesize runloopHangThirdPartyDailyLogLimit=_runloopHangThirdPartyDailyLogLimit - In the implementation block
@property (readonly) unsigned long long runloopHangTimeoutDurationMSec;                          //@synthesize runloopHangTimeoutDurationMSec=_runloopHangTimeoutDurationMSec - In the implementation block
@property (readonly) unsigned long long runloopHangDurationThresholdMSec;                        //@synthesize runloopHangDurationThresholdMSec=_runloopHangDurationThresholdMSec - In the implementation block
@property (readonly) unsigned long long runloopLongHangDurationThresholdMSec;                    //@synthesize runloopLongHangDurationThresholdMSec=_runloopLongHangDurationThresholdMSec - In the implementation block
@property (readonly) unsigned long long runloopHangThirdPartyDurationThresholdMSec;              //@synthesize runloopHangThirdPartyDurationThresholdMSec=_runloopHangThirdPartyDurationThresholdMSec - In the implementation block
@property (readonly) BOOL shouldIncludeDiskInfo;                                                 //@synthesize shouldIncludeDiskInfo=_shouldIncludeDiskInfo - In the implementation block
@property (readonly) BOOL shouldIncludeDisplayData;                                              //@synthesize shouldIncludeDisplayData=_shouldIncludeDisplayData - In the implementation block
@property (readonly) BOOL shouldIncludeNetworkState;                                             //@synthesize shouldIncludeNetworkState=_shouldIncludeNetworkState - In the implementation block
@property (readonly) BOOL fenceTrackingEnabled;                                                  //@synthesize fenceTrackingEnabled=_fenceTrackingEnabled - In the implementation block
@property (readonly) BOOL slowAppActivationTailspinEnabled;                                      //@synthesize slowAppActivationTailspinEnabled=_slowAppActivationTailspinEnabled - In the implementation block
@property (readonly) unsigned long long slowAppActivationThresholdMSec;                          //@synthesize slowAppActivationThresholdMSec=_slowAppActivationThresholdMSec - In the implementation block
@property (readonly) int slowAppActivationPerAppMaxLogLimit;                                     //@synthesize slowAppActivationPerAppMaxLogLimit=_slowAppActivationPerAppMaxLogLimit - In the implementation block
@property (readonly) int slowAppActivationDailyLogLimit;                                         //@synthesize slowAppActivationDailyLogLimit=_slowAppActivationDailyLogLimit - In the implementation block
@property (readonly) BOOL signpostMonitoringEnabled;                                             //@synthesize signpostMonitoringEnabled=_signpostMonitoringEnabled - In the implementation block
@property (readonly) int signpostMonitoringDailyLogLimit;                                        //@synthesize signpostMonitoringDailyLogLimit=_signpostMonitoringDailyLogLimit - In the implementation block
@property (readonly) int signpostMonitoringPerPeriodLogLimit;                                    //@synthesize signpostMonitoringPerPeriodLogLimit=_signpostMonitoringPerPeriodLogLimit - In the implementation block
@property (readonly) BOOL appActivationLoggingEnabled;                                           //@synthesize appActivationLoggingEnabled=_appActivationLoggingEnabled - In the implementation block
@property (readonly) double appActivationLoggingCPUUtilizationThresholdMSec;                     //@synthesize appActivationLoggingCPUUtilizationThresholdMSec=_appActivationLoggingCPUUtilizationThresholdMSec - In the implementation block
@property (readonly) unsigned appActivationLoggingMaxActivationLimit;                            //@synthesize appActivationLoggingMaxActivationLimit=_appActivationLoggingMaxActivationLimit - In the implementation block
@property (readonly) BOOL memoryLoggingEnabled;                                                  //@synthesize memoryLoggingEnabled=_memoryLoggingEnabled - In the implementation block
@property (readonly) BOOL pdseHangTracerKillSwitch;                                              //@synthesize pdseHangTracerKillSwitch=_pdseHangTracerKillSwitch - In the implementation block
@property (readonly) BOOL pdseHTRateOnlyKillSwitch;                                              //@synthesize pdseHTRateOnlyKillSwitch=_pdseHTRateOnlyKillSwitch - In the implementation block
@property (readonly) BOOL pdseHTThirdPartyKillSwitch;                                            //@synthesize pdseHTThirdPartyKillSwitch=_pdseHTThirdPartyKillSwitch - In the implementation block
@property (readonly) BOOL pdseSentryKillSwitch;                                                  //@synthesize pdseSentryKillSwitch=_pdseSentryKillSwitch - In the implementation block
@property (readonly) BOOL pdseCATailspinKillSwitch;                                              //@synthesize pdseCATailspinKillSwitch=_pdseCATailspinKillSwitch - In the implementation block
@property (readonly) BOOL pdseAllowEnableTailspin;                                               //@synthesize pdseAllowEnableTailspin=_pdseAllowEnableTailspin - In the implementation block
@property (readonly) int pdseHTPeriodDays;                                                       //@synthesize pdseHTPeriodDays=_pdseHTPeriodDays - In the implementation block
@property (readonly) int pdseHTRateOnlyPeriodDays;                                               //@synthesize pdseHTRateOnlyPeriodDays=_pdseHTRateOnlyPeriodDays - In the implementation block
@property (readonly) int pdseHTThirdPartyPeriodDays;                                             //@synthesize pdseHTThirdPartyPeriodDays=_pdseHTThirdPartyPeriodDays - In the implementation block
@property (readonly) int pdseSentryPeriodDays;                                                   //@synthesize pdseSentryPeriodDays=_pdseSentryPeriodDays - In the implementation block
@property (readonly) int pdseCATailspinPeriodDays;                                               //@synthesize pdseCATailspinPeriodDays=_pdseCATailspinPeriodDays - In the implementation block
@property (readonly) BOOL eplEnabledProfile;                                                     //@synthesize eplEnabledProfile=_eplEnabledProfile - In the implementation block
@property (readonly) BOOL eplEnabled;                                                            //@synthesize eplEnabled=_eplEnabled - In the implementation block
@property (readonly) double eplTimeoutTimestampSec;                                              //@synthesize eplTimeoutTimestampSec=_eplTimeoutTimestampSec - In the implementation block
@property (readonly) unsigned long long reportPeriodMATU;                                        //@synthesize reportPeriodMATU=_reportPeriodMATU - In the implementation block
@property (readonly) BOOL hasInternalSettings;                                                   //@synthesize hasInternalSettings=_hasInternalSettings - In the implementation block
@property (readonly) unsigned hudThresholdMSec;                                                  //@synthesize hudThresholdMSec=_hudThresholdMSec - In the implementation block
+(id)sharedPrefs;
-(void)dealloc;
-(BOOL)isInternal;
-(BOOL)hudEnabled;
-(id)stringProperty:(HTPrefInit*)arg1 ;
-(id)prefNamed:(const CFStringRef)arg1 domain:(const CFStringRef)arg2 profile:(id)arg3 matchingSelector:(SEL)arg4 ;
-(BOOL)boolProperty:(HTPrefInit*)arg1 ;
-(void)setShouldPostHTPrefsChangedNotification:(BOOL)arg1 ;
-(int)intProperty:(HTPrefInit*)arg1 ;
-(unsigned)unsignedIntProperty:(HTPrefInit*)arg1 ;
-(unsigned long long)unsignedLongProperty:(HTPrefInit*)arg1 ;
-(double)doubleProperty:(HTPrefInit*)arg1 ;
-(void)setMemoryLoggingIntervalSec:(unsigned)arg1 ;
-(void)initBoolProperty:(HTPrefInit*)arg1 ;
-(void)initUnsignedIntProperty:(HTPrefInit*)arg1 ;
-(void)initNSStringProperty:(HTPrefInit*)arg1 ;
-(void)initPropertyShouldSaveAndCompressTailspins:(HTPrefInit*)arg1 ;
-(void)initDoubleProperty:(HTPrefInit*)arg1 ;
-(void)initIntProperty:(HTPrefInit*)arg1 ;
-(void)initUnsignedLongProperty:(HTPrefInit*)arg1 ;
-(void)initPropertyAppActivationLogging:(HTPrefInit*)arg1 ;
-(void)initPropertyMemoryLoggingIntervalSec:(HTPrefInit*)arg1 ;
-(void)initPropertyReportPeriod:(HTPrefInit*)arg1 ;
-(void)initPropertyHaveInternalSettings:(HTPrefInit*)arg1 ;
-(void)earlyInitNecessaryPrefs;
-(HTPrefInit*)prefInitList;
-(BOOL)shouldPostHTPrefsChangedNotification;
-(void)initPropertyIsInternal:(HTPrefInit*)arg1 ;
-(void)setupPrefsWithQueue:(id)arg1 profilePath:(id)arg2 taskingDomainName:(CFStringRef)arg3 hangtracerDomain:(CFStringRef)arg4 setupInternalPrefs:(BOOL)arg5 ;
-(void)__createInternalSettings;
-(BOOL)hangtracerEnabled;
-(void)refreshHTPrefs;
-(void)setupPrefsWithQueue:(id)arg1 ;
-(void)_removeAllPrefs;
-(BOOL)customerModeEnabled;
-(BOOL)htTailspinEnabled;
-(BOOL)shouldCollectOSSignposts;
-(BOOL)shouldCollectOSSignpostsDeferred;
-(BOOL)shouldSaveTailspins;
-(BOOL)shouldCompressSavedTailspins;
-(unsigned long long)savedTailspinMaxMB;
-(BOOL)thirdPartyRunLoopHangLogsEnabled;
-(double)runloopHangPercentHeavyLogs;
-(int)runLoopHangDailyLogLimit;
-(int)runLoopHangPerPeriodLogLimit;
-(int)runLoopLongHangDailyLogLimit;
-(int)runloopHangThirdPartyDailyLogLimit;
-(unsigned long long)runloopHangTimeoutDurationMSec;
-(unsigned long long)runloopHangDurationThresholdMSec;
-(unsigned long long)runloopLongHangDurationThresholdMSec;
-(unsigned long long)runloopHangThirdPartyDurationThresholdMSec;
-(BOOL)shouldIncludeDiskInfo;
-(BOOL)shouldIncludeDisplayData;
-(BOOL)shouldIncludeNetworkState;
-(BOOL)fenceTrackingEnabled;
-(BOOL)slowAppActivationTailspinEnabled;
-(unsigned long long)slowAppActivationThresholdMSec;
-(int)slowAppActivationPerAppMaxLogLimit;
-(int)slowAppActivationDailyLogLimit;
-(BOOL)signpostMonitoringEnabled;
-(int)signpostMonitoringDailyLogLimit;
-(int)signpostMonitoringPerPeriodLogLimit;
-(BOOL)appActivationLoggingEnabled;
-(double)appActivationLoggingCPUUtilizationThresholdMSec;
-(unsigned)appActivationLoggingMaxActivationLimit;
-(BOOL)memoryLoggingEnabled;
-(unsigned)memoryLoggingIntervalSec;
-(BOOL)pdseHangTracerKillSwitch;
-(BOOL)pdseHTRateOnlyKillSwitch;
-(BOOL)pdseHTThirdPartyKillSwitch;
-(BOOL)pdseSentryKillSwitch;
-(BOOL)pdseCATailspinKillSwitch;
-(BOOL)pdseAllowEnableTailspin;
-(int)pdseHTPeriodDays;
-(int)pdseHTRateOnlyPeriodDays;
-(int)pdseHTThirdPartyPeriodDays;
-(int)pdseSentryPeriodDays;
-(int)pdseCATailspinPeriodDays;
-(BOOL)eplEnabledProfile;
-(BOOL)eplEnabled;
-(double)eplTimeoutTimestampSec;
-(unsigned long long)reportPeriodMATU;
-(BOOL)hasInternalSettings;
-(unsigned)hudThresholdMSec;
-(NSObject*<OS_dispatch_queue>)_prefsQueue;
-(void)set_prefsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)tailspinSaveFormat;
-(void)setTailspinSaveFormat:(NSString *)arg1 ;
-(BOOL)keepTailspinsLegacy;
-(void)setKeepTailspinsLegacy:(BOOL)arg1 ;
-(NSDictionary *)_installedHTProfileDict;
-(void)set_installedHTProfileDict:(NSDictionary *)arg1 ;
-(NSString *)_profilePath;
-(void)set_profilePath:(NSString *)arg1 ;
-(CFStringRef)_htTaskingDomain;
-(void)set_htTaskingDomain:(CFStringRef)arg1 ;
-(CFStringRef)_htDomain;
-(void)set_htDomain:(CFStringRef)arg1 ;
-(BOOL)shouldAllowSentryEnablement;
-(void)setShouldAllowSentryEnablement:(BOOL)arg1 ;
-(BOOL)_isInternalNoOverride;
-(void)set_isInternalNoOverride:(BOOL)arg1 ;
@end

