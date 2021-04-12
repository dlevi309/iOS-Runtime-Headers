/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomsAWDObserverDelegate.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_nw_activity;
@class NSObject, AnalyticsWorkspace, NSMutableDictionary, NWUUIDMapper, NSUUID, NSMutableArray, NSDictionary, NWAccumulator, NSString;

@interface NWActivityHandler : NSObject <SymptomsAWDObserverDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol> {

	NSObject*<OS_dispatch_queue> _metricsQueue;
	NSObject*<OS_dispatch_source> _metricCollectionTimer;
	double _lastCellularTriggerTime;
	unsigned _outstandingWiFiFragments;
	unsigned short _L2MetricCount;
	AnalyticsWorkspace* _workspace;
	BOOL _cellFragmentRequestOutstanding;
	BOOL _awdObserverConfigured;
	NSObject*<OS_nw_activity> _batteryActivity;
	NSMutableDictionary* _mappedMetrics;
	NWUUIDMapper* _nullUUIDMapper;
	NSUUID* _nullUUID;
	NSMutableArray* _currentActivities;
	NSMutableArray* _completeActivities;
	NSUUID* _lastWiFiActivity;
	NSDictionary* _lastCellularFragment;
	NWAccumulator* _batteryAccumulator;
	NWAccumulator* _batteryAccumulatorSnapshot;

}

@property (nonatomic,readonly) NSMutableDictionary * mappedMetrics;                   //@synthesize mappedMetrics=_mappedMetrics - In the implementation block
@property (nonatomic,readonly) NWUUIDMapper * nullUUIDMapper;                         //@synthesize nullUUIDMapper=_nullUUIDMapper - In the implementation block
@property (nonatomic,readonly) NSUUID * nullUUID;                                     //@synthesize nullUUID=_nullUUID - In the implementation block
@property (nonatomic,readonly) NSMutableArray * currentActivities;                    //@synthesize currentActivities=_currentActivities - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completeActivities;                   //@synthesize completeActivities=_completeActivities - In the implementation block
@property (nonatomic,retain) NSUUID * lastWiFiActivity;                               //@synthesize lastWiFiActivity=_lastWiFiActivity - In the implementation block
@property (nonatomic,retain) NSDictionary * lastCellularFragment;                     //@synthesize lastCellularFragment=_lastCellularFragment - In the implementation block
@property (nonatomic,retain) NWAccumulator * batteryAccumulator;                      //@synthesize batteryAccumulator=_batteryAccumulator - In the implementation block
@property (nonatomic,retain) NWAccumulator * batteryAccumulatorSnapshot;              //@synthesize batteryAccumulatorSnapshot=_batteryAccumulatorSnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(BOOL)_saveMetricWithUUIDS:(id)arg1 withData:(id)arg2 ofType:(int)arg3 ;
-(void)_pruneOldMappings;
-(void)_dumpState:(int)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_handleNWConnectionStatistics:(id)arg1 effectivePid:(int)arg2 ;
-(void)traverseObject:(id)arg1 atPath:(id)arg2 ;
-(NSMutableDictionary *)mappedMetrics;
-(id)init;
-(void)_convertPLMNToDecimal:(id)arg1 mcc:(int*)arg2 mnc:(int*)arg3 ;
-(BOOL)configuredForMetricStreaming;
-(void)handleEvent:(id)arg1 ;
-(id)analyticsWorkspace;
-(NSDictionary *)lastCellularFragment;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)serialNumberForInternalBuilds;
-(void)_reportThermalPressureEvent:(unsigned)arg1 forActivityEpilogue:(id)arg2 ;
-(id)_getBundleNameFromPid:(int)arg1 ;
-(void)setUpBatteryAccumulator;
-(void)setBatteryAccumulatorSnapshot:(NWAccumulator *)arg1 ;
-(void)setBatteryAccumulator:(NWAccumulator *)arg1 ;
-(void)streamAWDMetric:(id)arg1 withIdentifier:(unsigned)arg2 additionalDictionaryItems:(id)arg3 ;
-(void)powerStateChanged:(BOOL)arg1 ;
-(NWAccumulator *)batteryAccumulator;
-(NSString *)description;
-(void)setLastWiFiActivity:(NSUUID *)arg1 ;
-(NWAccumulator *)batteryAccumulatorSnapshot;
-(void)_stopL2Streaming;
-(void)_deliverCellularFragment:(id)arg1 ;
-(void)_handleEpilogue:(id)arg1 ;
-(id)createValidJSONObject:(id)arg1 atPath:(id)arg2 ;
-(NWUUIDMapper *)nullUUIDMapper;
-(void)_handleL2Start:(id)arg1 ;
-(id)mapperForUUID:(id)arg1 reason:(int)arg2 ;
-(void)_triggerCellMetric;
-(void)_pruneActivityLists;
-(void)_triggerWiFiMetric;
-(void)_handleCFNetworkItem:(id)arg1 ;
-(void)_handleStartActivity:(id)arg1 ;
-(void)_handleWiFiItem:(id)arg1 ;
-(NSMutableArray *)currentActivities;
-(NSMutableArray *)completeActivities;
-(void)_handleL2Stop:(id)arg1 ;
-(void)_handleCellularItem:(id)arg1 ;
-(void)_startL2Streaming;
-(NSUUID *)lastWiFiActivity;
-(NSUUID *)nullUUID;
-(void)_updateL2MetricLoggingRequests;
-(id)_createNWL2Report;
-(void)_sendMetric:(id)arg1 ofType:(int)arg2 forActivities:(id)arg3 additionalItems:(id)arg4 ;
-(id)_createDeviceReportForActivityType:(int)arg1 andDomain:(unsigned)arg2 ;
-(void)setLastCellularFragment:(NSDictionary *)arg1 ;
-(void)_collectCellularFragment;
-(void)dealloc;
@end

