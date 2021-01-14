/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HangTracer.framework/HangTracer
*/


@protocol OS_dispatch_queue;
#import <HangTracer/HangTracer-Structs.h>
@class NSObject, NSString, NSDictionary;

@interface HTPrefs : NSObject {

	BOOL _isInternal;
	BOOL _customerModeEnabled;
	BOOL _hangtracerDaemonEnabled;
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
	int _runLoopMicroHangDailyLogLimit;
	int _runLoopHangDailyLogLimit;
	int _runLoopHangPerPeriodLogLimit;
	int _runLoopLongHangDailyLogLimit;
	int _runloopHangThirdPartyDailyLogLimit;
	int _fenceHangDailyLogLimit;
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
	double _samplingPercentForMicroHangs;
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
@property (readonly) BOOL hangtracerDaemonEnabled;                                               //@synthesize hangtracerDaemonEnabled=_hangtracerDaemonEnabled - In the implementation block
@property (readonly) BOOL htTailspinEnabled;                                                     //@synthesize htTailspinEnabled=_htTailspinEnabled - In the implementation block
@property (readonly) BOOL hudEnabled;                                                            //@synthesize hudEnabled=_hudEnabled - In the implementation block
@property (readonly) BOOL shouldCollectOSSignposts;                                              //@synthesize shouldCollectOSSignposts=_shouldCollectOSSignposts - In the implementation block
@property (readonly) BOOL shouldCollectOSSignpostsDeferred;                                      //@synthesize shouldCollectOSSignpostsDeferred=_shouldCollectOSSignpostsDeferred - In the implementation block
@property (readonly) BOOL shouldSaveTailspins;                                                   //@synthesize shouldSaveTailspins=_shouldSaveTailspins - In the implementation block
@property (readonly) BOOL shouldCompressSavedTailspins;                                          //@synthesize shouldCompressSavedTailspins=_shouldCompressSavedTailspins - In the implementation block
@property (readonly) unsigned long long savedTailspinMaxMB;                                      //@synthesize savedTailspinMaxMB=_savedTailspinMaxMB - In the implementation block
@property (readonly) BOOL thirdPartyRunLoopHangLogsEnabled;                                      //@synthesize thirdPartyRunLoopHangLogsEnabled=_thirdPartyRunLoopHangLogsEnabled - In the implementation block
@property (readonly) double runloopHangPercentHeavyLogs;                                         //@synthesize runloopHangPercentHeavyLogs=_runloopHangPercentHeavyLogs - In the implementation block
@property (readonly) int runLoopMicroHangDailyLogLimit;                                          //@synthesize runLoopMicroHangDailyLogLimit=_runLoopMicroHangDailyLogLimit - In the implementation block
@property (readonly) int runLoopHangDailyLogLimit;                                               //@synthesize runLoopHangDailyLogLimit=_runLoopHangDailyLogLimit - In the implementation block
@property (readonly) int runLoopHangPerPeriodLogLimit;                                           //@synthesize runLoopHangPerPeriodLogLimit=_runLoopHangPerPeriodLogLimit - In the implementation block
@property (readonly) int runLoopLongHangDailyLogLimit;                                           //@synthesize runLoopLongHangDailyLogLimit=_runLoopLongHangDailyLogLimit - In the implementation block
@property (readonly) int runloopHangThirdPartyDailyLogLimit;                                     //@synthesize runloopHangThirdPartyDailyLogLimit=_runloopHangThirdPartyDailyLogLimit - In the implementation block
@property (readonly) int fenceHangDailyLogLimit;                                                 //@synthesize fenceHangDailyLogLimit=_fenceHangDailyLogLimit - In the implementation block
@property (readonly) unsigned long long runloopHangTimeoutDurationMSec;                          //@synthesize runloopHangTimeoutDurationMSec=_runloopHangTimeoutDurationMSec - In the implementation block
@property (readonly) unsigned long long runloopHangDurationThresholdMSec;                        //@synthesize runloopHangDurationThresholdMSec=_runloopHangDurationThresholdMSec - In the implementation block
@property (readonly) unsigned long long runloopLongHangDurationThresholdMSec;                    //@synthesize runloopLongHangDurationThresholdMSec=_runloopLongHangDurationThresholdMSec - In the implementation block
@property (readonly) unsigned long long runloopHangThirdPartyDurationThresholdMSec;              //@synthesize runloopHangThirdPartyDurationThresholdMSec=_runloopHangThirdPartyDurationThresholdMSec - In the implementation block
@property (readonly) double samplingPercentForMicroHangs;                                        //@synthesize samplingPercentForMicroHangs=_samplingPercentForMicroHangs - In the implementation block
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
-(BOOL)isInternal;
-(double)appActivationLoggingCPUUtilizationThresholdMSec;
-(BOOL)eplEnabledProfile;
-(BOOL)pdseAllowEnableTailspin;
-(void)earlyInitNecessaryPrefs;
-(NSString *)tailspinSaveFormat;
-(void)set_isInternalNoOverride:(BOOL)arg1 ;
-(int)runLoopMicroHangDailyLogLimit;
-(void)setShouldPostHTPrefsChangedNotification:(BOOL)arg1 ;
-(id)stringProperty:(HTPrefInit*)arg1 ;
-(unsigned)hudThresholdMSec;
-(BOOL)customerModeEnabled;
-(void)initPropertyMemoryLoggingIntervalSec:(HTPrefInit*)arg1 ;
-(void)initPropertyReportPeriod:(HTPrefInit*)arg1 ;
-(BOOL)pdseCATailspinKillSwitch;
-(int)pdseCATailspinPeriodDays;
-(BOOL)pdseHTRateOnlyKillSwitch;
-(int)runLoopHangPerPeriodLogLimit;
-(void)initPropertyIsInternal:(HTPrefInit*)arg1 ;
-(void)initPropertyShouldSaveAndCompressTailspins:(HTPrefInit*)arg1 ;
-(unsigned)memoryLoggingIntervalSec;
-(BOOL)hangtracerDaemonEnabled;
-(BOOL)shouldCollectOSSignposts;
-(unsigned)appActivationLoggingMaxActivationLimit;
-(void)refreshHTPrefs;
-(BOOL)thirdPartyRunLoopHangLogsEnabled;
-(BOOL)keepTailspinsLegacy;
-(BOOL)shouldIncludeNetworkState;
-(BOOL)_isInternalNoOverride;
-(int)pdseSentryPeriodDays;
-(unsigned long long)runloopHangThirdPartyDurationThresholdMSec;
-(unsigned long long)unsignedLongProperty:(HTPrefInit*)arg1 ;
-(BOOL)pdseHangTracerKillSwitch;
-(int)pdseHTThirdPartyPeriodDays;
-(int)runLoopHangDailyLogLimit;
-(BOOL)pdseHTThirdPartyKillSwitch;
-(int)pdseHTRateOnlyPeriodDays;
-(void)initNSStringProperty:(HTPrefInit*)arg1 ;
-(BOOL)shouldIncludeDiskInfo;
-(unsigned long long)runloopHangDurationThresholdMSec;
-(int)fenceHangDailyLogLimit;
-(BOOL)eplEnabled;
-(BOOL)memoryLoggingEnabled;
-(void)set_prefsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)shouldSaveTailspins;
-(int)runLoopLongHangDailyLogLimit;
-(void)setupPrefsWithQueue:(id)arg1 profilePath:(id)arg2 taskingDomainName:(CFStringRef)arg3 hangtracerDomain:(CFStringRef)arg4 setupInternalPrefs:(BOOL)arg5 ;
-(void)setKeepTailspinsLegacy:(BOOL)arg1 ;
-(CFStringRef)_htDomain;
-(double)eplTimeoutTimestampSec;
-(NSString *)_profilePath;
-(unsigned long long)reportPeriodMATU;
-(void)setShouldAllowSentryEnablement:(BOOL)arg1 ;
-(unsigned long long)runloopLongHangDurationThresholdMSec;
-(NSObject*<OS_dispatch_queue>)_prefsQueue;
-(void)set_htTaskingDomain:(CFStringRef)arg1 ;
-(void)setTailspinSaveFormat:(NSString *)arg1 ;
-(int)pdseHTPeriodDays;
-(BOOL)htTailspinEnabled;
-(int)runloopHangThirdPartyDailyLogLimit;
-(NSDictionary *)_installedHTProfileDict;
-(void)initDoubleProperty:(HTPrefInit*)arg1 ;
-(double)doubleProperty:(HTPrefInit*)arg1 ;
-(BOOL)hasInternalSettings;
-(BOOL)shouldIncludeDisplayData;
-(unsigned)unsignedIntProperty:(HTPrefInit*)arg1 ;
-(BOOL)appActivationLoggingEnabled;
-(BOOL)shouldCollectOSSignpostsDeferred;
-(BOOL)shouldPostHTPrefsChangedNotification;
-(void)initBoolProperty:(HTPrefInit*)arg1 ;
-(BOOL)slowAppActivationTailspinEnabled;
-(int)intProperty:(HTPrefInit*)arg1 ;
-(BOOL)signpostMonitoringEnabled;
-(id)prefNamed:(const CFStringRef)arg1 domain:(const CFStringRef)arg2 profile:(id)arg3 matchingSelector:(SEL)arg4 ;
-(int)slowAppActivationPerAppMaxLogLimit;
-(BOOL)shouldCompressSavedTailspins;
-(void)set_htDomain:(CFStringRef)arg1 ;
-(unsigned long long)slowAppActivationThresholdMSec;
-(int)slowAppActivationDailyLogLimit;
-(void)setupPrefsWithQueue:(id)arg1 ;
-(BOOL)pdseSentryKillSwitch;
-(void)setMemoryLoggingIntervalSec:(unsigned)arg1 ;
-(BOOL)fenceTrackingEnabled;
-(void)initPropertyHaveInternalSettings:(HTPrefInit*)arg1 ;
-(CFStringRef)_htTaskingDomain;
-(unsigned long long)runloopHangTimeoutDurationMSec;
-(double)samplingPercentForMicroHangs;
-(HTPrefInit*)prefInitList;
-(void)set_profilePath:(NSString *)arg1 ;
-(void)initUnsignedLongProperty:(HTPrefInit*)arg1 ;
-(BOOL)hudEnabled;
-(int)signpostMonitoringDailyLogLimit;
-(BOOL)shouldAllowSentryEnablement;
-(int)signpostMonitoringPerPeriodLogLimit;
-(void)initUnsignedIntProperty:(HTPrefInit*)arg1 ;
-(double)runloopHangPercentHeavyLogs;
-(void)set_installedHTProfileDict:(NSDictionary *)arg1 ;
-(void)initPropertyAppActivationLogging:(HTPrefInit*)arg1 ;
-(void)initIntProperty:(HTPrefInit*)arg1 ;
-(void)_removeAllPrefs;
-(void)dealloc;
-(BOOL)boolProperty:(HTPrefInit*)arg1 ;
-(unsigned long long)savedTailspinMaxMB;
-(void)__createInternalSettings;
@end

