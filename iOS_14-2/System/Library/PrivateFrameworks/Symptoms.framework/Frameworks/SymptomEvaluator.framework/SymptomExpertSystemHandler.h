/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/ExpertSystemHandlerCore.h>
#import <libobjc.A.dylib/ProbeManagerDelegate.h>
#import <libobjc.A.dylib/CLIPSShimDelegate.h>
#import <SymptomEvaluator/SymptomsFileCleanerDelegate.h>
#import <SymptomEvaluator/SymptomsAWDObserverDelegate.h>
#import <libobjc.A.dylib/AnalyticsConfigurationObserverDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyShimDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, SymptomExpertSystemState, NSArray, SystemSettingsRelay, PowerStateRelay, NetworkAnalyticsStateRelay, CellFallbackHandler, SystemProperties, NSDate, CoreTelephonyShim, MotionStateRelay, NSString, CLIPSShim, NSNumber, NSMutableArray, NSDataDetector, AnalyticsConfigurationObserver, NSObject, ProbeManager, SDRDiagnosticReporter, NSXPCConnection, SymptomsFileCleaner;

@interface SymptomExpertSystemHandler : ExpertSystemHandlerCore <ProbeManagerDelegate, CLIPSShimDelegate, SymptomsFileCleanerDelegate, SymptomsAWDObserverDelegate, AnalyticsConfigurationObserverDelegate, CoreTelephonyShimDelegate> {

	NSMutableDictionary* _interfaceNameToType;
	SymptomExpertSystemState* currentState;
	NSArray* states;
	id relayReadyObserver;
	SystemSettingsRelay* settingsRelay;
	PowerStateRelay* powerRelay;
	NetworkAnalyticsStateRelay* cellRelay;
	NetworkAnalyticsStateRelay* wifiRelay;
	CellFallbackHandler* rnfRelay;
	SystemProperties* systemPropsRelay;
	unsigned administrativeState;
	unsigned relayObservingState;
	NSMutableDictionary* relayToFacts;
	NSDate* lastWiFiAssociationTime;
	CoreTelephonyShim* ctShim;
	MotionStateRelay* motionRelay;
	SCD_Struct_Sy12 coreTelephonyRelayContext;
	SCD_Struct_Sy12 wifiRelayContext;
	SCD_Struct_Sy12 wifiScalarRelayContext;
	SCD_Struct_Sy12 cellRelayContext;
	SCD_Struct_Sy12 cellScalarRelayContext;
	SCD_Struct_Sy12 systemRelayContext;
	SCD_Struct_Sy12 systemScalarRelayContext;
	SCD_Struct_Sy12 systemSymptomRelayContext;
	SCD_Struct_Sy12 hardwareRelayContext;
	NSString* _airdropID;
	unsigned long long _asyncKVOCount;
	BOOL _pendingEngineRun;
	CLIPSShim* ruleEngine;
	BOOL _loadedCLIPSRulesAndFacts;
	BOOL _failedToLoadDefaultRules;
	BOOL _didScheduleCleanupTask;
	NSString* _pendingOTACLIPSUpdate;
	NSString* _pendingOTACLIPSUpdateVersion;
	NSString* _pendingOTACLIPSUpdateModule;
	NSMutableDictionary* _pendingOTACLIPSUpdates;
	unsigned long long idsNoteMessageCount;
	NSDate* idsNoteMessageLastCLIPSIngestible;
	BOOL _observingAutoBugCaptureEnabled;
	BOOL _observingAutoFeedbackAssistantEnabled;
	BOOL _observingInstalledVisibleProfiles;
	BOOL _observingAWDMetrics;
	BOOL _internalBuild;
	BOOL _carrierSeedBuild;
	BOOL _internalOrCarrierSeedBuild;
	BOOL _customerSeedBuild;
	BOOL _vendorBuild;
	unsigned long long _stepper;
	NSNumber* _apSleep;
	NSMutableArray* _incomingSymptoms;
	NSMutableArray* _processedSymptoms;
	NSString* _diagnosticSessionIdentifier;
	NSMutableArray* _caseSignatures;
	NSMutableDictionary* _diagnosticSessionOutput;
	NSDate* _lastSymptomRun;
	NSMutableDictionary* _obfuscations;
	NSDataDetector* _urlDetector;
	NSDate* _diagSessionExpectedEnd;
	long long _diagnosingStrobeInterval;
	long long _maximumDiagnosingTime;
	AnalyticsConfigurationObserver* _analyticsConfigObserver;
	NSMutableDictionary* _awdCLIPSMapping;
	NSMutableArray* _awdCLIPSModules;
	NSObject*<OS_dispatch_source> _clipsReleaseMemoryTimer;
	NSObject*<OS_dispatch_source> _clipsResetTimer;
	NSObject*<OS_dispatch_source> _clipsAWDObserverTimer;
	NSObject*<OS_dispatch_source> _loadDefaultRulesTimer;
	NSObject*<OS_dispatch_source> _loggingProfileTimeoutTimer;
	NSMutableDictionary* _clipsFactsWaitTimers;
	ProbeManager* _probeManager;
	NSDate* _completedInitializationDate;
	SDRDiagnosticReporter* _sdrReporter;
	NSXPCConnection* _privateConnection;
	SymptomsFileCleaner* _abcCleaner;
	NSMutableDictionary* _libtraceOSLogWhiteList;
	NSString* _activeDataSIMOperatorName;
	NSString* _lastActiveDataSIMOperatorName;
	unsigned long long _activeDataSIMSignalBars;
	unsigned long long _lastActiveDataSIMSignalBars;

}

@property (assign) unsigned long long stepper;                                                      //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) NSMutableArray * incomingSymptoms;                                     //@synthesize incomingSymptoms=_incomingSymptoms - In the implementation block
@property (nonatomic,retain) NSMutableArray * processedSymptoms;                                    //@synthesize processedSymptoms=_processedSymptoms - In the implementation block
@property (nonatomic,retain) NSString * diagnosticSessionIdentifier;                                //@synthesize diagnosticSessionIdentifier=_diagnosticSessionIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * caseSignatures;                                       //@synthesize caseSignatures=_caseSignatures - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * diagnosticSessionOutput;                         //@synthesize diagnosticSessionOutput=_diagnosticSessionOutput - In the implementation block
@property (nonatomic,retain) NSDate * lastSymptomRun;                                               //@synthesize lastSymptomRun=_lastSymptomRun - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * obfuscations;                                    //@synthesize obfuscations=_obfuscations - In the implementation block
@property (nonatomic,retain) NSDataDetector * urlDetector;                                          //@synthesize urlDetector=_urlDetector - In the implementation block
@property (nonatomic,retain) NSDate * diagSessionExpectedEnd;                                       //@synthesize diagSessionExpectedEnd=_diagSessionExpectedEnd - In the implementation block
@property (assign,nonatomic) long long diagnosingStrobeInterval;                                    //@synthesize diagnosingStrobeInterval=_diagnosingStrobeInterval - In the implementation block
@property (assign,nonatomic) long long maximumDiagnosingTime;                                       //@synthesize maximumDiagnosingTime=_maximumDiagnosingTime - In the implementation block
@property (assign,nonatomic) BOOL observingAWDMetrics;                                              //@synthesize observingAWDMetrics=_observingAWDMetrics - In the implementation block
@property (nonatomic,retain) AnalyticsConfigurationObserver * analyticsConfigObserver;              //@synthesize analyticsConfigObserver=_analyticsConfigObserver - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * awdCLIPSMapping;                                 //@synthesize awdCLIPSMapping=_awdCLIPSMapping - In the implementation block
@property (nonatomic,retain) NSMutableArray * awdCLIPSModules;                                      //@synthesize awdCLIPSModules=_awdCLIPSModules - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> clipsReleaseMemoryTimer;                 //@synthesize clipsReleaseMemoryTimer=_clipsReleaseMemoryTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> clipsResetTimer;                         //@synthesize clipsResetTimer=_clipsResetTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> clipsAWDObserverTimer;                   //@synthesize clipsAWDObserverTimer=_clipsAWDObserverTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> loadDefaultRulesTimer;                   //@synthesize loadDefaultRulesTimer=_loadDefaultRulesTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> loggingProfileTimeoutTimer;              //@synthesize loggingProfileTimeoutTimer=_loggingProfileTimeoutTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clipsFactsWaitTimers;                            //@synthesize clipsFactsWaitTimers=_clipsFactsWaitTimers - In the implementation block
@property (nonatomic,retain) ProbeManager * probeManager;                                           //@synthesize probeManager=_probeManager - In the implementation block
@property (nonatomic,retain) NSDate * completedInitializationDate;                                  //@synthesize completedInitializationDate=_completedInitializationDate - In the implementation block
@property (nonatomic,retain) SDRDiagnosticReporter * sdrReporter;                                   //@synthesize sdrReporter=_sdrReporter - In the implementation block
@property (nonatomic,retain) NSXPCConnection * privateConnection;                                   //@synthesize privateConnection=_privateConnection - In the implementation block
@property (nonatomic,retain) SymptomsFileCleaner * abcCleaner;                                      //@synthesize abcCleaner=_abcCleaner - In the implementation block
@property (nonatomic,retain) NSNumber * apSleep;                                                    //@synthesize apSleep=_apSleep - In the implementation block
@property (assign,nonatomic) BOOL internalBuild;                                                    //@synthesize internalBuild=_internalBuild - In the implementation block
@property (assign,nonatomic) BOOL carrierSeedBuild;                                                 //@synthesize carrierSeedBuild=_carrierSeedBuild - In the implementation block
@property (assign,nonatomic) BOOL internalOrCarrierSeedBuild;                                       //@synthesize internalOrCarrierSeedBuild=_internalOrCarrierSeedBuild - In the implementation block
@property (assign,nonatomic) BOOL customerSeedBuild;                                                //@synthesize customerSeedBuild=_customerSeedBuild - In the implementation block
@property (assign,nonatomic) BOOL vendorBuild;                                                      //@synthesize vendorBuild=_vendorBuild - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * libtraceOSLogWhiteList;                          //@synthesize libtraceOSLogWhiteList=_libtraceOSLogWhiteList - In the implementation block
@property (nonatomic,retain) NSString * activeDataSIMOperatorName;                                  //@synthesize activeDataSIMOperatorName=_activeDataSIMOperatorName - In the implementation block
@property (nonatomic,retain) NSString * lastActiveDataSIMOperatorName;                              //@synthesize lastActiveDataSIMOperatorName=_lastActiveDataSIMOperatorName - In the implementation block
@property (assign,nonatomic) unsigned long long activeDataSIMSignalBars;                            //@synthesize activeDataSIMSignalBars=_activeDataSIMSignalBars - In the implementation block
@property (assign,nonatomic) unsigned long long lastActiveDataSIMSignalBars;                        //@synthesize lastActiveDataSIMSignalBars=_lastActiveDataSIMSignalBars - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)noteSymptom:(id)arg1 ;
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
+(BOOL)parseEndpoint:(id)arg1 intoURL:(id*)arg2 host:(id*)arg3 scheme:(id*)arg4 path:(id*)arg5 ;
+(id)internalStateDictionary;
+(id)libtraceInfo:(id)arg1 ;
-(void)_dumpState;
-(NSNumber *)apSleep;
-(void)runEngine;
-(BOOL)internalBuild;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)setIncomingSymptoms:(NSMutableArray *)arg1 ;
-(void)cancelAllWaitingForFactTimers;
-(long long)maximumDiagnosingTime;
-(void)checkObfuscationsInAllCaseSignatures;
-(void)setCaseSignatures:(NSMutableArray *)arg1 ;
-(void*)assertFactString:(id)arg1 moduleName:(id)arg2 run:(BOOL)arg3 ;
-(void)cancelDiagnosticSession:(id)arg1 ;
-(unsigned long long)stepper;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_bringStateToRunning;
-(id)pendingOTACLIPSUpdates;
-(void)setDiagnosticSessionOutput:(NSMutableDictionary *)arg1 ;
-(void)setAnalyticsConfigObserver:(AnalyticsConfigurationObserver *)arg1 ;
-(void)_symptomsdSymptom:(id)arg1 ;
-(NSMutableDictionary *)diagnosticSessionOutput;
-(NSObject*<OS_dispatch_source>)clipsResetTimer;
-(id)deParamsDictForDiagnosticExtension:(id)arg1 withDEParams:(id)arg2 ;
-(id)init;
-(void)signalStrengthChangedForSubscription:(id)arg1 ;
-(void)startAWDObserverTimer;
-(void)handleEvent:(id)arg1 ;
-(void)_bringStateToDiagnosing;
-(BOOL)urlIsAppleDomain:(id)arg1 ;
-(void)setClipsAWDObserverTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)awdObserveModule:(id)arg1 requiredModules:(id)arg2 unloadModule:(id)arg3 ;
-(void)fileCleanupComplete;
-(void)setDiagSessionExpectedEnd:(NSDate *)arg1 ;
-(void)processIncomingOTAUpdate:(id)arg1 ;
-(void)probeStatusUpdate:(id)arg1 ;
-(void)_performSeedCleanup;
-(id)interfaceTypeForName:(id)arg1 ;
-(void)_processSymptomsdFlowCountExceededThreshold:(id)arg1 symptomName:(id)arg2 ;
-(void)assertFactAsSymptom:(id)arg1 module:(id)arg2 ;
-(void)_completeInitialization;
-(id)getSignalBars;
-(NSMutableDictionary *)obfuscations;
-(void)setSdrReporter:(SDRDiagnosticReporter *)arg1 ;
-(void)unloadAWDObservedModules;
-(void)_airplaySymptom:(id)arg1 ;
-(void)waitForFactWithTemplateName:(id)arg1 module:(id)arg2 timeout:(id)arg3 ;
-(void)addDiagnosticSession:(id)arg1 hasDictionary:(id)arg2 endSession:(id)arg3 ;
-(void)_libnetcoreSymptom:(id)arg1 ;
-(void)setCustomerSeedBuild:(BOOL)arg1 ;
-(void)setApSleep:(NSNumber *)arg1 ;
-(id)awdCLIPSModuleDictForModule:(id)arg1 ;
-(void)startDiagnosticSessionWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 subTypeContext:(id)arg4 processID:(id)arg5 processName:(id)arg6 bundleID:(id)arg7 interfaceType:(id)arg8 threshold:(id)arg9 sessionDuration:(id)arg10 triggerRemoteCase:(id)arg11 ;
-(NSMutableArray *)caseSignatures;
-(void)_processSymptomsdMbufPeak:(id)arg1 symptomName:(id)arg2 ;
-(void)startDiagnosticSessionWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 subTypeContext:(id)arg4 processID:(id)arg5 processName:(id)arg6 bundleID:(id)arg7 interfaceType:(id)arg8 threshold:(id)arg9 sessionDuration:(id)arg10 ;
-(void)_bringStateToIdle;
-(ProbeManager *)probeManager;
-(void)setActiveDataSIMOperatorName:(NSString *)arg1 ;
-(unsigned long long)lastActiveDataSIMSignalBars;
-(void)deactivateModule:(id)arg1 ;
-(NSDate *)lastSymptomRun;
-(BOOL)customerSeedBuild;
-(id)serviceToFactString:(id)arg1 type:(long long)arg2 ;
-(void)_processSymptomsdNoDefaultRoute:(id)arg1 symptomName:(id)arg2 ;
-(void)setInternalOrCarrierSeedBuild:(BOOL)arg1 ;
-(void)unloadModule:(id)arg1 ;
-(void)_administrativeEnable;
-(void)requestCoreTelephonyDumpViaDiagnosticExtension:(id)arg1 folderPrefix:(id)arg2 dumpReason:(id)arg3 ;
-(void)setClipsFactsWaitTimers:(NSMutableDictionary *)arg1 ;
-(void)setStepper:(unsigned long long)arg1 ;
-(void)_addExternalRelayObservers;
-(void)resetPreviousObfuscations;
-(void)_libtraceOSLog:(id)arg1 ;
-(void)setLastActiveDataSIMSignalBars:(unsigned long long)arg1 ;
-(id)getOperatorName;
-(void)_processAnomalousFlowSymptom:(id)arg1 symptomName:(id)arg2 categoryType:(id)arg3 ;
-(void)_configdSymptom:(id)arg1 ;
-(void)setProcessedSymptoms:(NSMutableArray *)arg1 ;
-(void)setClipsResetTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setObfuscations:(NSMutableDictionary *)arg1 ;
-(void)operatorNameChangedForSubscription:(id)arg1 ;
-(void)setActiveDataSIMSignalBars:(unsigned long long)arg1 ;
-(void)_processUIPerformanceThunderingHerdCase:(id)arg1 symptomName:(id)arg2 ;
-(void)setClipsReleaseMemoryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)assertFactAndRun:(id)arg1 module:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)obfuscatedPrimaryComponent:(id)arg1 obfuscationType:(id)arg2 ;
-(AnalyticsConfigurationObserver *)analyticsConfigObserver;
-(void)_removeDebuggabilityFolder;
-(unsigned long long)activeDataSIMSignalBars;
-(SDRDiagnosticReporter *)sdrReporter;
-(BOOL)carrierSeedBuild;
-(NSString *)lastActiveDataSIMOperatorName;
-(void)_administrativeDisable;
-(void)setLoggingProfileTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)endDiagnosticSession:(id)arg1 ;
-(void)serviceAdded:(id)arg1 type:(long long)arg2 ;
-(id)symptomDictionaryForSymptom:(id)arg1 domain:(id)arg2 type:(id)arg3 ;
-(void)setVendorBuild:(BOOL)arg1 ;
-(void)retractService:(id)arg1 type:(long long)arg2 ;
-(void)setLastSymptomRun:(NSDate *)arg1 ;
-(void)ingestPendingOTAUpdates;
-(NSDataDetector *)urlDetector;
-(void)processRelayStateChange:(id)arg1 key:(id)arg2 relay:(id)arg3 scalar:(BOOL)arg4 ;
-(id)internalStateDictionary;
-(id)primaryComponent:(id)arg1 obfuscationType:(id)arg2 ;
-(void)observer:(id)arg1 didChangeConfiguration:(id)arg2 type:(id)arg3 ;
-(void)probeOutputFilePaths:(id)arg1 forDiagSessionUUID:(id)arg2 ;
-(void)processWiFiAssociationChange:(BOOL)arg1 atTime:(id)arg2 ;
-(id)obfuscatedSubcomponent:(id)arg1 fromPrimaryEntry:(id)arg2 withKey:(id)arg3 obfuscation:(id)arg4 ;
-(void)assertRelayFact:(id)arg1 forRelayKey:(id)arg2 moduleName:(id)arg3 ;
-(void)logSessionEventMessage:(id)arg1 ;
-(void)setObservingAWDMetrics:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)loggingProfileTimeoutTimer;
-(void)setLoadDefaultRulesTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)observingAWDMetrics;
-(void)sendCaseSignaturesToSDRWithSessionID:(id)arg1 ;
-(void)setDiagnosingStrobeInterval:(long long)arg1 ;
-(void)logSessionEventSymptom:(id)arg1 process:(id)arg2 endpoint:(id)arg3 interface:(id)arg4 ;
-(void)onDisruptiveFlowChange:(id)arg1 ;
-(void)setAbcCleaner:(SymptomsFileCleaner *)arg1 ;
-(NSMutableArray *)awdCLIPSModules;
-(void)_processSymptomsdEnergyBackgroundFullActivityMap:(id)arg1 symptomName:(id)arg2 ;
-(void)_processSymptomsdEnergyBackgroundRRCExcActivity:(id)arg1 symptomName:(id)arg2 ;
-(NSMutableArray *)incomingSymptoms;
-(NSMutableDictionary *)libtraceOSLogWhiteList;
-(void)setAwdCLIPSModules:(NSMutableArray *)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 toEBFProfiles:(id)arg3 ;
-(void)logSessionEventProbe:(id)arg1 endpoint:(id)arg2 interface:(id)arg3 status:(id)arg4 ;
-(void)cancelWaitForFactWithTemplateName:(id)arg1 ;
-(void)setAwdCLIPSMapping:(NSMutableDictionary *)arg1 ;
-(NSDate *)completedInitializationDate;
-(BOOL)postAWDEvent:(id)arg1 ;
-(void)_processSymptomsdExcessiveFailedConnections:(id)arg1 symptomName:(id)arg2 ;
-(BOOL)loadModule:(id)arg1 requiresBasebandModule:(BOOL)arg2 ;
-(void)retractFacts:(id)arg1 runAfterLastFact:(BOOL)arg2 ;
-(SymptomsFileCleaner *)abcCleaner;
-(void)_processSymptomsdRnfSymptom:(id)arg1 symptomName:(id)arg2 categoryType:(id)arg3 ;
-(id)symptomsAWDObserver;
-(BOOL)vendorBuild;
-(void)setProbeManager:(ProbeManager *)arg1 ;
-(NSDate *)diagSessionExpectedEnd;
-(void)stopAWDObserving:(/*^block*/id)arg1 ;
-(BOOL)loadDefaultRules;
-(void)registerAllCLIPSCallbacks;
-(void)serviceRemoved:(id)arg1 type:(long long)arg2 ;
-(void)setCarrierSeedBuild:(BOOL)arg1 ;
-(void)clipsConsoleOutput:(id)arg1 consoleChannel:(const char*)arg2 forEngine:(id)arg3 ;
-(NSObject*<OS_dispatch_source>)clipsAWDObserverTimer;
-(void)setDiagnosticSessionIdentifier:(NSString *)arg1 ;
-(void)setUrlDetector:(NSDataDetector *)arg1 ;
-(NSString *)diagnosticSessionIdentifier;
-(void)serviceUpdated:(id)arg1 type:(long long)arg2 ;
-(void)snapshotDiagnosticSessionWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 subTypeContext:(id)arg4 processID:(id)arg5 processName:(id)arg6 bundleID:(id)arg7 interfaceType:(id)arg8 threshold:(id)arg9 sessionDuration:(id)arg10 ;
-(void)setMaximumDiagnosingTime:(long long)arg1 ;
-(NSMutableArray *)processedSymptoms;
-(void)retractFact:(void*)arg1 moduleName:(id)arg2 run:(BOOL)arg3 ;
-(BOOL)internalOrCarrierSeedBuild;
-(void)_usageUpdaterSymptom:(id)arg1 ;
-(void)startAWDObserving:(id)arg1 ;
-(BOOL)didInstallProfileForKey:(id)arg1 ;
-(void)_processSymptomsdWiFiShimSymptom:(id)arg1 symptomName:(id)arg2 ;
-(NSXPCConnection *)privateConnection;
-(NSObject*<OS_dispatch_source>)loadDefaultRulesTimer;
-(void)_processLibnetcoreSymptom:(id)arg1 symptomName:(id)arg2 ;
-(NSRange)rangeOfValueForSlotName:(id)arg1 in:(id)arg2 ;
-(void)setInternalBuild:(BOOL)arg1 ;
-(void)_removeExternalRelayObservers;
-(NSString *)activeDataSIMOperatorName;
-(void)setDefaultFacts;
-(NSMutableDictionary *)awdCLIPSMapping;
-(long long)diagnosingStrobeInterval;
-(void)setLastActiveDataSIMOperatorName:(NSString *)arg1 ;
-(id)arbitratorDictionaryForSymptom:(id)arg1 procName:(id)arg2 interfaceType:(id)arg3 eventCount:(id)arg4 duration:(id)arg5 ;
-(void)setCompletedInitializationDate:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)clipsReleaseMemoryTimer;
-(void)setLibtraceOSLogWhiteList:(NSMutableDictionary *)arg1 ;
-(void)_addAllObservers;
-(void)startLoadDefaultRulesTimer:(double)arg1 ;
-(void)probeFactString:(id)arg1 module:(id)arg2 goIntoDiagnosing:(BOOL)arg3 run:(BOOL)arg4 ;
-(void)_removeAllObservers;
-(id)obfuscatedEndpoint:(id)arg1 ;
-(void)releaseAllRelayFacts;
-(void)dealloc;
-(NSMutableDictionary *)clipsFactsWaitTimers;
-(BOOL)isAWDEventEligibleForCLIPSIngestion:(id)arg1 ;
-(void)setPrivateConnection:(NSXPCConnection *)arg1 ;
-(id)getBatteryPercentage:(id)arg1 ;
-(void)adjustStrobeTimerInterval:(id)arg1 maximum:(id)arg2 ;
@end

