/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NPWaldoDelegate, OS_dispatch_source, OS_dispatch_queue;
@class NSDictionary, NSArray, NSString, NSNumber, NSURL, NPLocation, NSDate, NSPNetworkAgent, NPKeyBag, NPWaldoLocationManager, NSMutableDictionary, NPTuscanyEdge, NSObject, NWNetworkAgentRegistration, NSUUID, NSData;

@interface NPWaldo : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _currentNetworkCharacteristics;
	NSArray* _edges;
	NSArray* _allOnRamps;
	BOOL _shouldSave;
	BOOL _reprocessPending;
	BOOL _daypassRefreshInProgress;
	BOOL _reprocessCancelled;
	unsigned _generation;
	NSString* _identifier;
	long long _source;
	NSNumber* _timestamp;
	NSNumber* _version;
	NSString* _dayPassHostname;
	NSNumber* _dayPassHostnamePrependLabel;
	NSNumber* _dayPassPort;
	NSNumber* _dayPassRequestTimeout;
	NSString* _dayPassLeafOID;
	NSNumber* _dayPassRevocationFailClosed;
	NSNumber* _dayPassExtendedValidation;
	NSNumber* _dayPassEnableSessionTicket;
	NSArray* _dayPassSoftExpiry;
	NSNumber* _enableLatencyDerivation;
	NSNumber* _latencyFactorA;
	NSNumber* _latencyFactorB;
	NSNumber* _latencyFactorX;
	NSNumber* _edgeFairnessFactor;
	NSNumber* _locationCheckInterval;
	NSNumber* _locationTTL;
	NSNumber* _locationToleranceDistance;
	NSNumber* _viewSize;
	NSNumber* _probePause;
	NSNumber* _probeTFO;
	NSNumber* _probeNoTFOCookie;
	NSNumber* _probeTimeout;
	NSNumber* _retryPause;
	NSNumber* _signatureLimit;
	NSNumber* _observedRTTSampleSize;
	NSNumber* _reprocessSamplingInterval;
	NSNumber* _reprocessSampleSize;
	NSNumber* _connectionIdleTimeoutMaximum;
	NSString* _tag;
	NSURL* _telemetryURL;
	NSString* _telemetryService;
	NSNumber* _useGeohashFromServer;
	NSNumber* _edgeSelectionEnabled;
	NSNumber* _edgeSelectionAlpha;
	NSNumber* _edgeSelectionWindowSize;
	NSNumber* _enableIPv6;
	NSNumber* _requireTFO;
	NSNumber* _TFOLeeway;
	NSNumber* _edgesGeneration;
	NSNumber* _usedEdgesGeneration;
	long long _currentEdgeIndex;
	NSString* _hostname;
	id<NPWaldoDelegate> _delegate;
	NPLocation* _cachedLocation;
	NSDate* _locationCheckTimestamp;
	NSDate* _locationExpiration;
	NPWaldo* _defaults;
	NSPNetworkAgent* _agent;
	NPKeyBag* _keybag;
	NPWaldoLocationManager* _locationManager;
	NSMutableDictionary* _networkInformation;
	NSArray* _currentEdges;
	NPTuscanyEdge* _nextEdge;
	NSObject*<OS_dispatch_source> _reprocessSamplingTimer;
	NWNetworkAgentRegistration* _agentRegistration;
	NSUUID* _configurationIdentifier;
	NSObject*<OS_dispatch_queue> _reprocessQueue;
	NSData* _updateHash;

}

@property (retain) NSMutableDictionary * networkInformation;                          //@synthesize networkInformation=_networkInformation - In the implementation block
@property (retain) NSArray * allOnRamps; 
@property (assign) BOOL daypassRefreshInProgress;                                     //@synthesize daypassRefreshInProgress=_daypassRefreshInProgress - In the implementation block
@property (readonly) NSArray * currentEdges;                                          //@synthesize currentEdges=_currentEdges - In the implementation block
@property (assign) long long currentEdgeIndex;                                        //@synthesize currentEdgeIndex=_currentEdgeIndex - In the implementation block
@property (readonly) NPTuscanyEdge * nextEdge;                                        //@synthesize nextEdge=_nextEdge - In the implementation block
@property (readonly) NSArray * currentEdgeList; 
@property (assign) BOOL reprocessCancelled;                                           //@synthesize reprocessCancelled=_reprocessCancelled - In the implementation block
@property (assign) unsigned generation;                                               //@synthesize generation=_generation - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> reprocessSamplingTimer;              //@synthesize reprocessSamplingTimer=_reprocessSamplingTimer - In the implementation block
@property (retain) NWNetworkAgentRegistration * agentRegistration;                    //@synthesize agentRegistration=_agentRegistration - In the implementation block
@property (retain) NSUUID * configurationIdentifier;                                  //@synthesize configurationIdentifier=_configurationIdentifier - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> reprocessQueue;                     //@synthesize reprocessQueue=_reprocessQueue - In the implementation block
@property (readonly) id latencyComparator; 
@property (retain) NSData * updateHash;                                               //@synthesize updateHash=_updateHash - In the implementation block
@property (assign) BOOL reResolve; 
@property (readonly) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long source;                                                //@synthesize source=_source - In the implementation block
@property (copy) NSNumber * timestamp;                                                //@synthesize timestamp=_timestamp - In the implementation block
@property (copy) NSNumber * version;                                                  //@synthesize version=_version - In the implementation block
@property (copy) NSString * dayPassHostname;                                          //@synthesize dayPassHostname=_dayPassHostname - In the implementation block
@property (copy) NSNumber * dayPassHostnamePrependLabel;                              //@synthesize dayPassHostnamePrependLabel=_dayPassHostnamePrependLabel - In the implementation block
@property (copy) NSNumber * dayPassPort;                                              //@synthesize dayPassPort=_dayPassPort - In the implementation block
@property (copy) NSNumber * dayPassRequestTimeout;                                    //@synthesize dayPassRequestTimeout=_dayPassRequestTimeout - In the implementation block
@property (copy) NSString * dayPassLeafOID;                                           //@synthesize dayPassLeafOID=_dayPassLeafOID - In the implementation block
@property (copy) NSNumber * dayPassRevocationFailClosed;                              //@synthesize dayPassRevocationFailClosed=_dayPassRevocationFailClosed - In the implementation block
@property (copy) NSNumber * dayPassExtendedValidation;                                //@synthesize dayPassExtendedValidation=_dayPassExtendedValidation - In the implementation block
@property (copy) NSNumber * dayPassEnableSessionTicket;                               //@synthesize dayPassEnableSessionTicket=_dayPassEnableSessionTicket - In the implementation block
@property (copy) NSArray * dayPassSoftExpiry;                                         //@synthesize dayPassSoftExpiry=_dayPassSoftExpiry - In the implementation block
@property (copy) NSNumber * enableLatencyDerivation;                                  //@synthesize enableLatencyDerivation=_enableLatencyDerivation - In the implementation block
@property (copy) NSNumber * latencyFactorA;                                           //@synthesize latencyFactorA=_latencyFactorA - In the implementation block
@property (copy) NSNumber * latencyFactorB;                                           //@synthesize latencyFactorB=_latencyFactorB - In the implementation block
@property (copy) NSNumber * latencyFactorX;                                           //@synthesize latencyFactorX=_latencyFactorX - In the implementation block
@property (copy) NSNumber * edgeFairnessFactor;                                       //@synthesize edgeFairnessFactor=_edgeFairnessFactor - In the implementation block
@property (copy) NSNumber * locationCheckInterval;                                    //@synthesize locationCheckInterval=_locationCheckInterval - In the implementation block
@property (copy) NSNumber * locationTTL;                                              //@synthesize locationTTL=_locationTTL - In the implementation block
@property (copy) NSNumber * locationToleranceDistance;                                //@synthesize locationToleranceDistance=_locationToleranceDistance - In the implementation block
@property (copy) NSNumber * viewSize;                                                 //@synthesize viewSize=_viewSize - In the implementation block
@property (copy) NSNumber * probePause;                                               //@synthesize probePause=_probePause - In the implementation block
@property (copy) NSNumber * probeTFO;                                                 //@synthesize probeTFO=_probeTFO - In the implementation block
@property (copy) NSNumber * probeNoTFOCookie;                                         //@synthesize probeNoTFOCookie=_probeNoTFOCookie - In the implementation block
@property (copy) NSNumber * probeTimeout;                                             //@synthesize probeTimeout=_probeTimeout - In the implementation block
@property (copy) NSNumber * retryPause;                                               //@synthesize retryPause=_retryPause - In the implementation block
@property (copy) NSNumber * signatureLimit;                                           //@synthesize signatureLimit=_signatureLimit - In the implementation block
@property (copy) NSNumber * observedRTTSampleSize;                                    //@synthesize observedRTTSampleSize=_observedRTTSampleSize - In the implementation block
@property (copy) NSNumber * reprocessSamplingInterval;                                //@synthesize reprocessSamplingInterval=_reprocessSamplingInterval - In the implementation block
@property (copy) NSNumber * reprocessSampleSize;                                      //@synthesize reprocessSampleSize=_reprocessSampleSize - In the implementation block
@property (copy) NSNumber * connectionIdleTimeoutMaximum;                             //@synthesize connectionIdleTimeoutMaximum=_connectionIdleTimeoutMaximum - In the implementation block
@property (copy) NSString * tag;                                                      //@synthesize tag=_tag - In the implementation block
@property (copy) NSURL * telemetryURL;                                                //@synthesize telemetryURL=_telemetryURL - In the implementation block
@property (copy) NSString * telemetryService;                                         //@synthesize telemetryService=_telemetryService - In the implementation block
@property (copy) NSNumber * useGeohashFromServer;                                     //@synthesize useGeohashFromServer=_useGeohashFromServer - In the implementation block
@property (copy) NSNumber * edgeSelectionEnabled;                                     //@synthesize edgeSelectionEnabled=_edgeSelectionEnabled - In the implementation block
@property (copy) NSNumber * edgeSelectionAlpha;                                       //@synthesize edgeSelectionAlpha=_edgeSelectionAlpha - In the implementation block
@property (copy) NSNumber * edgeSelectionWindowSize;                                  //@synthesize edgeSelectionWindowSize=_edgeSelectionWindowSize - In the implementation block
@property (copy) NSNumber * enableIPv6;                                               //@synthesize enableIPv6=_enableIPv6 - In the implementation block
@property (copy) NSArray * edges; 
@property (copy) NSNumber * requireTFO;                                               //@synthesize requireTFO=_requireTFO - In the implementation block
@property (copy) NSNumber * TFOLeeway;                                                //@synthesize TFOLeeway=_TFOLeeway - In the implementation block
@property (readonly) BOOL isIPv6Enabled; 
@property (copy) NSNumber * edgesGeneration;                                          //@synthesize edgesGeneration=_edgesGeneration - In the implementation block
@property (copy) NSNumber * usedEdgesGeneration;                                      //@synthesize usedEdgesGeneration=_usedEdgesGeneration - In the implementation block
@property (readonly) NPTuscanyEdge * currentEdge; 
@property (readonly) unsigned long long edgeCount; 
@property (readonly) BOOL hasEdges; 
@property (readonly) long long dayPassFetchCount; 
@property (readonly) NSDate * currentNetworkLastUsed; 
@property (nonatomic,retain) NSString * hostname;                                     //@synthesize hostname=_hostname - In the implementation block
@property (__weak) id<NPWaldoDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL shouldSave;                                                   //@synthesize shouldSave=_shouldSave - In the implementation block
@property (readonly) NSDate * expirationDate; 
@property (readonly) unsigned long long probeSize; 
@property (nonatomic,retain) NPLocation * cachedLocation;                             //@synthesize cachedLocation=_cachedLocation - In the implementation block
@property (nonatomic,retain) NSDate * locationCheckTimestamp;                         //@synthesize locationCheckTimestamp=_locationCheckTimestamp - In the implementation block
@property (nonatomic,retain) NSDate * locationExpiration;                             //@synthesize locationExpiration=_locationExpiration - In the implementation block
@property (nonatomic,retain) NPWaldo * defaults;                                      //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) NSPNetworkAgent * agent;                                 //@synthesize agent=_agent - In the implementation block
@property (nonatomic,retain) NPKeyBag * keybag;                                       //@synthesize keybag=_keybag - In the implementation block
@property (nonatomic,retain) NPWaldoLocationManager * locationManager;                //@synthesize locationManager=_locationManager - In the implementation block
@property (assign) BOOL reprocessPending;                                             //@synthesize reprocessPending=_reprocessPending - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createEndpointFromHostList:(id)arg1 defaultPortString:(id)arg2 allowIPv6:(BOOL)arg3 ;
-(void)link;
-(void)setProbeTFO:(NSNumber *)arg1 ;
-(void)setDefaults:(NPWaldo *)arg1 ;
-(NSNumber *)probeTFO;
-(void)setKeybag:(NPKeyBag *)arg1 ;
-(BOOL)reprocessCancelled;
-(NPKeyBag *)keybag;
-(id)edgeAtIndex:(long long)arg1 ;
-(void)establishTrustWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setGeneration:(unsigned)arg1 ;
-(NSData *)updateHash;
-(void)setUpdateHash:(NSData *)arg1 ;
-(NSNumber *)locationTTL;
-(void)setEnableLatencyDerivation:(NSNumber *)arg1 ;
-(NPWaldo *)defaults;
-(void)setEnableIPv6:(NSNumber *)arg1 ;
-(unsigned)generation;
-(void)setDayPassExtendedValidation:(NSNumber *)arg1 ;
-(void)setReprocessPending:(BOOL)arg1 ;
-(void)setLocationCheckTimestamp:(NSDate *)arg1 ;
-(id)createEdgeLatenciesToProbeWithEdgeIndex:(unsigned long long)arg1 startSampleCount:(unsigned long long*)arg2 ;
-(BOOL)reprocessWithNewRTT:(unsigned long long)arg1 reProbe:(BOOL*)arg2 ;
-(void)setDayPassHostname:(NSString *)arg1 ;
-(NSDate *)locationExpiration;
-(void)setLocationManager:(NPWaldoLocationManager *)arg1 ;
-(NSObject*<OS_dispatch_source>)reprocessSamplingTimer;
-(NPWaldoLocationManager *)locationManager;
-(void)setLocationToleranceDistance:(NSNumber *)arg1 ;
-(BOOL)isEndpointProbed:(id)arg1 parameters:(networkParameters*)arg2 latencies:(id)arg3 checkSampleSize:(BOOL)arg4 incompleteLatency:(id*)arg5 ;
-(void)setCachedLocation:(NPLocation *)arg1 ;
-(NSNumber *)usedEdgesGeneration;
-(void)startProbingEdges:(id)arg1 atIndex:(unsigned long long)arg2 doneCount:(unsigned long long)arg3 sampleCount:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setEdgesGeneration:(NSNumber *)arg1 ;
-(NWNetworkAgentRegistration *)agentRegistration;
-(NSNumber *)viewSize;
-(void)setDaypassRefreshInProgress:(BOOL)arg1 ;
-(BOOL)shouldFetchWaldo;
-(BOOL)reprocessPending;
-(void)setConfigurationIdentifier:(NSUUID *)arg1 ;
-(NSPNetworkAgent *)agent;
-(id)init;
-(void)setTag:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)reprocessQueue;
-(void)setAgentRegistration:(NWNetworkAgentRegistration *)arg1 ;
-(BOOL)isLatenciesCompleteForNetwork:(id)arg1 ;
-(void)setAgent:(NSPNetworkAgent *)arg1 ;
-(void)rebuildLatencyMapAllSignatures:(BOOL)arg1 ;
-(NSNumber *)probePause;
-(id<NPWaldoDelegate>)delegate;
-(void)incrementSessionCounters;
-(void)setLatencyFactorX:(NSNumber *)arg1 ;
-(void)setProbeTimeout:(NSNumber *)arg1 ;
-(NSURL *)telemetryURL;
-(void)setAllOnRamps:(NSArray *)arg1 ;
-(NPTuscanyEdge *)currentEdge;
-(NSNumber *)locationCheckInterval;
-(void)setLocationCheckInterval:(NSNumber *)arg1 ;
-(NSNumber *)timestamp;
-(void)timestampNetworkSignature:(id)arg1 ;
-(NSNumber *)retryPause;
-(id)copyEdgeList:(id)arg1 ;
-(id)edgeContainingOnRamp:(id)arg1 ;
-(NSNumber *)edgeFairnessFactor;
-(void)setTFOLeeway:(NSNumber *)arg1 ;
-(void)linkAllSignatures:(BOOL)arg1 ;
-(BOOL)hasEdges;
-(void)encodeWithCoder:(id)arg1 ;
-(void)reprocessEdgeAtIndex:(unsigned long long)arg1 networkSignature:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)refreshDayPassesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLocationExpiration:(NSDate *)arg1 ;
-(void)ageOutLatencyMap;
-(NSString *)tag;
-(NSArray *)currentEdgeList;
-(NSNumber *)edgeSelectionWindowSize;
-(void)setTelemetryService:(NSString *)arg1 ;
-(long long)getFallbackReasonForLatencies:(id)arg1 ;
-(unsigned long long)edgeCount;
-(void)setReResolve:(BOOL)arg1 ;
-(NSString *)dayPassHostname;
-(BOOL)isIPv6Enabled;
-(NSNumber *)dayPassPort;
-(void)setCurrentEdgeIndex:(long long)arg1 ;
-(NSNumber *)connectionIdleTimeoutMaximum;
-(BOOL)shouldSave;
-(void)setLocationTTL:(NSNumber *)arg1 ;
-(void)setDayPassSoftExpiry:(NSArray *)arg1 ;
-(void)setReprocessSamplingInterval:(NSNumber *)arg1 ;
-(void)mergeEdgeList:(id)arg1 forNetworkSignature:(id)arg2 ;
-(NSDate *)locationCheckTimestamp;
-(void)setConnectionIdleTimeoutMaximum:(NSNumber *)arg1 ;
-(NSNumber *)reprocessSamplingInterval;
-(NSArray *)edges;
-(NSNumber *)TFOLeeway;
-(NSNumber *)latencyFactorB;
-(id)copyStateIncludeDistance:(BOOL)arg1 ;
-(void)merge:(id)arg1 missingSettingsOnly:(BOOL)arg2 ;
-(void)setObservedRTTSampleSize:(NSNumber *)arg1 ;
-(void)setDayPassPort:(NSNumber *)arg1 ;
-(void)updateEdgeSelection:(unsigned long long)arg1 ;
-(void)setDelegate:(id<NPWaldoDelegate>)arg1 ;
-(void)setUseGeohashFromServer:(NSNumber *)arg1 ;
-(void)setShouldSave:(BOOL)arg1 ;
-(void)cleanupStaleKeys;
-(BOOL)reResolve;
-(id)description;
-(NSNumber *)locationToleranceDistance;
-(NSArray *)dayPassSoftExpiry;
-(void)setHostname:(NSString *)arg1 ;
-(void)resortEdgeListForCurrentNetworkSignature;
-(NSUUID *)configurationIdentifier;
-(NSString *)hostname;
-(void)setDayPassRequestTimeout:(NSNumber *)arg1 ;
-(NSNumber *)probeTimeout;
-(id)currentNetworkInfo;
-(NSDate *)expirationDate;
-(void)setRetryPause:(NSNumber *)arg1 ;
-(void)setRequireTFO:(NSNumber *)arg1 ;
-(void)resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)validateEdgeList:(id)arg1 ;
-(void)setSignatureLimit:(NSNumber *)arg1 ;
-(long long)currentEdgeIndex;
-(void)setUsedEdgesGeneration:(NSNumber *)arg1 ;
-(void)setViewSize:(NSNumber *)arg1 ;
-(void)setEdgeSelectionWindowSize:(NSNumber *)arg1 ;
-(NSNumber *)dayPassExtendedValidation;
-(NPTuscanyEdge *)nextEdge;
-(id)initFromKeychainWithIdentifier:(id)arg1 ;
-(NSNumber *)edgeSelectionAlpha;
-(void)setReprocessCancelled:(BOOL)arg1 ;
-(void)setProbePause:(NSNumber *)arg1 ;
-(void)removeFromKeychain;
-(void)getDayPassRTT;
-(void)setEdgeFairnessFactor:(NSNumber *)arg1 ;
-(id)copyEdgeSelectionTelemetry;
-(NSDate *)currentNetworkLastUsed;
-(void)setReprocessSampleSize:(NSNumber *)arg1 ;
-(long long)getCurrentNetworkInterfaceType;
-(BOOL)daypassRefreshInProgress;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)telemetryService;
-(NSNumber *)observedRTTSampleSize;
-(NSArray *)allOnRamps;
-(NSNumber *)edgesGeneration;
-(void)logLatencyInfoToStdout:(BOOL)arg1 logAll:(BOOL)arg2 logEdgeSelection:(BOOL)arg3 ;
-(NSNumber *)dayPassHostnamePrependLabel;
-(id)initWithIdentifier:(id)arg1 timestamp:(id)arg2 fromDictionary:(id)arg3 source:(long long)arg4 ;
-(NSNumber *)enableIPv6;
-(void)linkLatenciesAllSignatures:(BOOL)arg1 ;
-(void)setLatencyFactorB:(NSNumber *)arg1 ;
-(void)setCurrentNetworkCharacteristics:(id)arg1 ;
-(void)cancelProbes;
-(NSNumber *)latencyFactorX;
-(void)reprocessWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)dayPassLeafOID;
-(NSNumber *)latencyFactorA;
-(void)setLatencyFactorA:(NSNumber *)arg1 ;
-(void)loadObservedRTTSamples:(id)arg1 ;
-(void)setEdgeSelectionAlpha:(NSNumber *)arg1 ;
-(void)pushKeybagToKernel;
-(long long)dayPassFetchCount;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSArray *)currentEdges;
-(void)updateNetworkAgentWithKeybag:(id)arg1 networkInfo:(id)arg2 ;
-(NSNumber *)enableLatencyDerivation;
-(void)reprocessLatencies:(id)arg1 sampleCount:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)identifier;
-(void)setProbeNoTFOCookie:(NSNumber *)arg1 ;
-(NSNumber *)useGeohashFromServer;
-(id)copyEdgeListRTTAverage:(id)arg1 observed:(BOOL)arg2 shortDescription:(BOOL)arg3 ;
-(id)onRampForIndex:(id)arg1 ;
-(void)setDayPassLeafOID:(NSString *)arg1 ;
-(void)saveToKeychain;
-(NSNumber *)dayPassRevocationFailClosed;
-(void)logEdgeList:(id)arg1 debug:(BOOL)arg2 toStdout:(BOOL)arg3 ;
-(void)setDayPassHostnamePrependLabel:(NSNumber *)arg1 ;
-(void)setEdgeSelectionEnabled:(NSNumber *)arg1 ;
-(void)setNetworkInformation:(NSMutableDictionary *)arg1 ;
-(void)setDayPassRevocationFailClosed:(NSNumber *)arg1 ;
-(void)handleUsageReport:(id)arg1 ;
-(id)copyLatencyInfoDictionary:(BOOL)arg1 copyAll:(BOOL)arg2 ;
-(void)setEdges:(NSArray *)arg1 ;
-(NSNumber *)dayPassRequestTimeout;
-(void)teardownNetworkAgent;
-(void)removeDayPassesFromKernel;
-(void)pushKeybagToKernelUpdateGeneration:(BOOL)arg1 ;
-(NSNumber *)version;
-(void)updateMetaDataNeedProbe:(BOOL)arg1 refresh:(BOOL)arg2 push:(BOOL)arg3 minRTT:(unsigned long long)arg4 ;
-(NPLocation *)cachedLocation;
-(NSNumber *)requireTFO;
-(NSMutableDictionary *)networkInformation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reprocessAdHocWithEdgeIndex:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(void)initializeEdgeSelection;
-(unsigned long long)probeSize;
-(NSNumber *)edgeSelectionEnabled;
-(long long)indexOfBestEdge;
-(void)setTelemetryURL:(NSURL *)arg1 ;
-(id)latencyComparator;
-(BOOL)shouldPerformDayPassRefresh;
-(void)pushKeybagToKernelCanReuse:(BOOL)arg1 ;
-(void)setDayPassEnableSessionTicket:(NSNumber *)arg1 ;
-(NSNumber *)probeNoTFOCookie;
-(NSNumber *)reprocessSampleSize;
-(long long)source;
-(void)setReprocessSamplingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSNumber *)signatureLimit;
-(NSNumber *)dayPassEnableSessionTicket;
@end

