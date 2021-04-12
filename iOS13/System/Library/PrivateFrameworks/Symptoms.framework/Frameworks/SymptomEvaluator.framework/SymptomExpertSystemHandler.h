/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_Sy9 coreTelephonyRelayContext;
	SCD_Struct_Sy9 wifiRelayContext;
	SCD_Struct_Sy9 wifiScalarRelayContext;
	SCD_Struct_Sy9 cellRelayContext;
	SCD_Struct_Sy9 cellScalarRelayContext;
	SCD_Struct_Sy9 systemRelayContext;
	SCD_Struct_Sy9 systemScalarRelayContext;
	SCD_Struct_Sy9 systemSymptomRelayContext;
	SCD_Struct_Sy9 hardwareRelayContext;
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
	NSObject*<OS_dispatch_source> _clipsAWDObserverTimer;
	NSObject*<OS_dispatch_source> _loadDefaultRulesTimer;
	NSObject*<OS_dispatch_source> _loggingProfileTimeoutTimer;
	NSMutableDictionary* _clipsFactsWaitTimers;
	ProbeManager* _probeManager;
	NSDate* _completedInitializationDate;
	SDRDiagnosticReporter* _sdrReporter;
	NSXPCConnection* _privateConnection;
	SymptomsFileCleaner* _abcCleaner;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
+(BOOL)noteSymptom:(id)arg1 ;
+(id)libtraceInfo:(id)arg1 ;
+(id)internalStateDictionary;
+(BOOL)parseEndpoint:(id)arg1 intoURL:(id*)arg2 host:(id*)arg3 scheme:(id*)arg4 path:(id*)arg5 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)handleEvent:(id)arg1 ;
-(void)observer:(id)arg1 didChangeConfiguration:(id)arg2 type:(id)arg3 ;
-(BOOL)internalBuild;
-(unsigned long long)stepper;
-(void)setStepper:(unsigned long long)arg1 ;
-(void)setInternalBuild:(BOOL)arg1 ;
-(void)_dumpState;
-(BOOL)postAWDEvent:(id)arg1 ;
-(ProbeManager *)probeManager;
-(void)setProbeManager:(ProbeManager *)arg1 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(BOOL)carrierSeedBuild;
-(BOOL)customerSeedBuild;
-(void)setDiagnosingStrobeInterval:(long long)arg1 ;
-(void)setMaximumDiagnosingTime:(long long)arg1 ;
-(void)setCaseSignatures:(NSMutableArray *)arg1 ;
-(void)setIncomingSymptoms:(NSMutableArray *)arg1 ;
-(void)setProcessedSymptoms:(NSMutableArray *)arg1 ;
-(void)setDiagnosticSessionOutput:(NSMutableDictionary *)arg1 ;
-(void)setObfuscations:(NSMutableDictionary *)arg1 ;
-(void)setClipsFactsWaitTimers:(NSMutableDictionary *)arg1 ;
-(void)setSdrReporter:(SDRDiagnosticReporter *)arg1 ;
-(void)_completeInitialization;
-(void)_removeDebuggabilityFolder;
-(void)_performSeedCleanup;
-(void)stopAWDObserving:(/*^block*/id)arg1 ;
-(void)resetPreviousObfuscations;
-(void)releaseAllRelayFacts;
-(void)_removeAllObservers;
-(void)registerAllCLIPSCallbacks;
-(void)cancelAllWaitingForFactTimers;
-(void)unloadAWDObservedModules;
-(BOOL)loadDefaultRules;
-(void)startLoadDefaultRulesTimer:(double)arg1 ;
-(void)_addAllObservers;
-(void)setDefaultFacts;
-(void)runEngine;
-(void)setUrlDetector:(NSDataDetector *)arg1 ;
-(void)setDiagSessionExpectedEnd:(NSDate *)arg1 ;
-(void)setLastSymptomRun:(NSDate *)arg1 ;
-(long long)diagnosingStrobeInterval;
-(NSDate *)lastSymptomRun;
-(long long)maximumDiagnosingTime;
-(void)cancelDiagnosticSession:(id)arg1 ;
-(void)_bringStateToRunning;
-(void)_bringStateToIdle;
-(void)_addExternalRelayObservers;
-(void)onDisruptiveFlowChange:(id)arg1 ;
-(void)operatorNameChangedForSubscription:(id)arg1 ;
-(void)signalStrengthChangedForSubscription:(id)arg1 ;
-(void)processWiFiAssociationChange:(BOOL)arg1 atTime:(id)arg2 ;
-(void)_removeExternalRelayObservers;
-(void)_administrativeDisable;
-(void)setAbcCleaner:(SymptomsFileCleaner *)arg1 ;
-(BOOL)didInstallProfileForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 toEBFProfiles:(id)arg3 ;
-(void)retractFact:(void*)arg1 moduleName:(id)arg2 run:(BOOL)arg3 ;
-(void)assertRelayFact:(id)arg1 forRelayKey:(id)arg2 moduleName:(id)arg3 ;
-(void*)assertFactString:(id)arg1 moduleName:(id)arg2 run:(BOOL)arg3 ;
-(BOOL)loadModule:(id)arg1 requiresBasebandModule:(BOOL)arg2 ;
-(void)_bringStateToDiagnosing;
-(void)processRelayStateChange:(id)arg1 key:(id)arg2 relay:(id)arg3 scalar:(BOOL)arg4 ;
-(void)_administrativeEnable;
-(void)setLoggingProfileTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setApSleep:(NSNumber *)arg1 ;
-(id)symptomDictionaryForSymptom:(id)arg1 domain:(id)arg2 type:(id)arg3 ;
-(void)_processLibnetcoreSymptom:(id)arg1 symptomName:(id)arg2 ;
-(BOOL)urlIsAppleDomain:(id)arg1 ;
-(void)_processSymptomsdEnergyBackgroundRRCExcActivity:(id)arg1 symptomName:(id)arg2 ;
-(void)_processSymptomsdFlowCountExceededThreshold:(id)arg1 symptomName:(id)arg2 ;
-(void)_processSymptomsdMbufPeak:(id)arg1 symptomName:(id)arg2 ;
-(void)_processSymptomsdRnfSymptom:(id)arg1 symptomName:(id)arg2 categoryType:(id)arg3 ;
-(void)_processSymptomsdWiFiShimSymptom:(id)arg1 symptomName:(id)arg2 ;
-(void)_processSymptomsdEnergyBackgroundFullActivityMap:(id)arg1 symptomName:(id)arg2 ;
-(void)_processUIPerformanceThunderingHerdCase:(id)arg1 symptomName:(id)arg2 ;
-(void)_processSymptomsdExcessiveFailedConnections:(id)arg1 symptomName:(id)arg2 ;
-(id)arbitratorDictionaryForSymptom:(id)arg1 procName:(id)arg2 interfaceType:(id)arg3 eventCount:(id)arg4 duration:(id)arg5 ;
-(NSMutableDictionary *)diagnosticSessionOutput;
-(void)_processAnomalousFlowSymptom:(id)arg1 symptomName:(id)arg2 categoryType:(id)arg3 ;
-(BOOL)isAWDEventEligibleForCLIPSIngestion:(id)arg1 ;
-(NSMutableDictionary *)awdCLIPSMapping;
-(id)awdCLIPSModuleDictForModule:(id)arg1 ;
-(void)processIncomingOTAUpdate:(id)arg1 ;
-(void)ingestPendingOTAUpdates;
-(void)startAWDObserverTimer;
-(void)_airplaySymptom:(id)arg1 ;
-(void)_symptomsdSymptom:(id)arg1 ;
-(void)_usageUpdaterSymptom:(id)arg1 ;
-(void)_libtraceOSLog:(id)arg1 ;
-(id)internalStateDictionary;
-(void)startDiagnosticSessionWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 subTypeContext:(id)arg4 processID:(id)arg5 processName:(id)arg6 bundleID:(id)arg7 interfaceType:(id)arg8 threshold:(id)arg9 sessionDuration:(id)arg10 ;
-(void)startDiagnosticSessionWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 subTypeContext:(id)arg4 processID:(id)arg5 processName:(id)arg6 bundleID:(id)arg7 interfaceType:(id)arg8 threshold:(id)arg9 sessionDuration:(id)arg10 triggerRemoteCase:(id)arg11 ;
-(void)snapshotDiagnosticSessionWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 subTypeContext:(id)arg4 processID:(id)arg5 processName:(id)arg6 bundleID:(id)arg7 interfaceType:(id)arg8 threshold:(id)arg9 sessionDuration:(id)arg10 ;
-(void)addDiagnosticSession:(id)arg1 hasDictionary:(id)arg2 endSession:(id)arg3 ;
-(void)endDiagnosticSession:(id)arg1 ;
-(void)logSessionEventProbe:(id)arg1 endpoint:(id)arg2 interface:(id)arg3 status:(id)arg4 ;
-(void)logSessionEventSymptom:(id)arg1 process:(id)arg2 endpoint:(id)arg3 interface:(id)arg4 ;
-(void)logSessionEventMessage:(id)arg1 ;
-(void)waitForFactWithTemplateName:(id)arg1 module:(id)arg2 timeout:(id)arg3 ;
-(void)cancelWaitForFactWithTemplateName:(id)arg1 ;
-(void)adjustStrobeTimerInterval:(id)arg1 maximum:(id)arg2 ;
-(id)interfaceTypeForName:(id)arg1 ;
-(id)awdObserveModule:(id)arg1 requiredModules:(id)arg2 unloadModule:(id)arg3 ;
-(void)unloadModule:(id)arg1 ;
-(void)deactivateModule:(id)arg1 ;
-(id)getBatteryPercentage:(id)arg1 ;
-(void)requestCoreTelephonyDumpViaDiagnosticExtension:(id)arg1 folderPrefix:(id)arg2 dumpReason:(id)arg3 ;
-(void)setAwdCLIPSMapping:(NSMutableDictionary *)arg1 ;
-(void)setAwdCLIPSModules:(NSMutableArray *)arg1 ;
-(id)serviceToFactString:(id)arg1 type:(long long)arg2 ;
-(void)retractService:(id)arg1 type:(long long)arg2 ;
-(void)setDiagnosticSessionIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)caseSignatures;
-(void)sendCaseSignaturesToSDRWithSessionID:(id)arg1 ;
-(NSString *)diagnosticSessionIdentifier;
-(void)checkObfuscationsInAllCaseSignatures;
-(NSRange)rangeOfValueForSlotName:(id)arg1 in:(id)arg2 ;
-(id)obfuscatedPrimaryComponent:(id)arg1 obfuscationType:(id)arg2 ;
-(id)obfuscatedEndpoint:(id)arg1 ;
-(NSMutableDictionary *)clipsFactsWaitTimers;
-(NSMutableArray *)awdCLIPSModules;
-(id)deParamsDictForDiagnosticExtension:(id)arg1 withDEParams:(id)arg2 ;
-(NSMutableDictionary *)obfuscations;
-(id)primaryComponent:(id)arg1 obfuscationType:(id)arg2 ;
-(id)obfuscatedSubcomponent:(id)arg1 fromPrimaryEntry:(id)arg2 withKey:(id)arg3 obfuscation:(id)arg4 ;
-(void)startAWDObserving:(id)arg1 ;
-(id)symptomsAWDObserver;
-(void)setObservingAWDMetrics:(BOOL)arg1 ;
-(void)probeStatusUpdate:(id)arg1 ;
-(void)probeOutputFilePaths:(id)arg1 forDiagSessionUUID:(id)arg2 ;
-(void)serviceAdded:(id)arg1 type:(long long)arg2 ;
-(void)serviceUpdated:(id)arg1 type:(long long)arg2 ;
-(void)serviceRemoved:(id)arg1 type:(long long)arg2 ;
-(void)probeFactString:(id)arg1 module:(id)arg2 goIntoDiagnosing:(BOOL)arg3 run:(BOOL)arg4 ;
-(void)clipsConsoleOutput:(id)arg1 consoleChannel:(const char*)arg2 forEngine:(id)arg3 ;
-(void)fileCleanupComplete;
-(void)_configdSymptom:(id)arg1 ;
-(void)_libnetcoreSymptom:(id)arg1 ;
-(void)_processSymptomsdNoDefaultRoute:(id)arg1 symptomName:(id)arg2 ;
-(id)pendingOTACLIPSUpdates;
-(void)retractFacts:(id)arg1 runAfterLastFact:(BOOL)arg2 ;
-(void)assertFactAndRun:(id)arg1 module:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)assertFactAsSymptom:(id)arg1 module:(id)arg2 ;
-(NSDataDetector *)urlDetector;
-(NSNumber *)apSleep;
-(NSMutableArray *)incomingSymptoms;
-(NSMutableArray *)processedSymptoms;
-(NSDate *)diagSessionExpectedEnd;
-(BOOL)observingAWDMetrics;
-(AnalyticsConfigurationObserver *)analyticsConfigObserver;
-(void)setAnalyticsConfigObserver:(AnalyticsConfigurationObserver *)arg1 ;
-(NSObject*<OS_dispatch_source>)clipsReleaseMemoryTimer;
-(void)setClipsReleaseMemoryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)clipsAWDObserverTimer;
-(void)setClipsAWDObserverTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)loadDefaultRulesTimer;
-(void)setLoadDefaultRulesTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)loggingProfileTimeoutTimer;
-(NSDate *)completedInitializationDate;
-(void)setCompletedInitializationDate:(NSDate *)arg1 ;
-(SDRDiagnosticReporter *)sdrReporter;
-(NSXPCConnection *)privateConnection;
-(void)setPrivateConnection:(NSXPCConnection *)arg1 ;
-(SymptomsFileCleaner *)abcCleaner;
-(void)setCarrierSeedBuild:(BOOL)arg1 ;
-(BOOL)internalOrCarrierSeedBuild;
-(void)setInternalOrCarrierSeedBuild:(BOOL)arg1 ;
-(void)setCustomerSeedBuild:(BOOL)arg1 ;
@end

