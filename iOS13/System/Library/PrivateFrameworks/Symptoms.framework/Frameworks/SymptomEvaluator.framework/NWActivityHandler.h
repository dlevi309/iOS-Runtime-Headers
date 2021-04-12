/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomsAWDObserverDelegate.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, AnalyticsWorkspace, NSMutableDictionary, NWUUIDMapper, NSUUID, NSMutableArray, NSDictionary, NSString;

@interface NWActivityHandler : NSObject <SymptomsAWDObserverDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol> {

	NSObject*<OS_dispatch_queue> _metricsQueue;
	NSObject*<OS_dispatch_source> _metricCollectionTimer;
	double _lastCellularTriggerTime;
	unsigned short _L2MetricCount;
	AnalyticsWorkspace* _workspace;
	BOOL _cellFragmentRequestOutstanding;
	BOOL _awdObserverConfigured;
	NSMutableDictionary* _mappedMetrics;
	NWUUIDMapper* _nullUUIDMapper;
	NSUUID* _nullUUID;
	NSMutableArray* _currentActivities;
	NSMutableArray* _completeActivities;
	NSUUID* _lastWiFiActivity;
	NSDictionary* _lastCellularFragment;

}

@property (nonatomic,readonly) NSMutableDictionary * mappedMetrics;              //@synthesize mappedMetrics=_mappedMetrics - In the implementation block
@property (nonatomic,readonly) NWUUIDMapper * nullUUIDMapper;                    //@synthesize nullUUIDMapper=_nullUUIDMapper - In the implementation block
@property (nonatomic,readonly) NSUUID * nullUUID;                                //@synthesize nullUUID=_nullUUID - In the implementation block
@property (nonatomic,readonly) NSMutableArray * currentActivities;               //@synthesize currentActivities=_currentActivities - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completeActivities;              //@synthesize completeActivities=_completeActivities - In the implementation block
@property (nonatomic,retain) NSUUID * lastWiFiActivity;                          //@synthesize lastWiFiActivity=_lastWiFiActivity - In the implementation block
@property (nonatomic,retain) NSDictionary * lastCellularFragment;                //@synthesize lastCellularFragment=_lastCellularFragment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)handleEvent:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)analyticsWorkspace;
-(NSMutableDictionary *)mappedMetrics;
-(void)_dumpState:(int)arg1 ;
-(void)_pruneOldMappings;
-(NWUUIDMapper *)nullUUIDMapper;
-(NSUUID *)nullUUID;
-(NSMutableArray *)currentActivities;
-(void)setLastWiFiActivity:(NSUUID *)arg1 ;
-(void)_pruneActivityLists;
-(void)_collectCellularFragment;
-(void)_updateL2MetricLoggingRequests;
-(NSMutableArray *)completeActivities;
-(void)_startL2Streaming;
-(void)_stopL2Streaming;
-(NSDictionary *)lastCellularFragment;
-(void)_deliverCellularFragment:(id)arg1 ;
-(void)_triggerCellMetric;
-(void)_triggerWiFiMetric;
-(void)setLastCellularFragment:(NSDictionary *)arg1 ;
-(void)_handleCellularItem:(id)arg1 ;
-(BOOL)_saveMetricWithUUIDS:(id)arg1 withData:(id)arg2 ofType:(int)arg3 ;
-(BOOL)configuredForMetricStreaming;
-(void)streamAWDMetric:(id)arg1 withIdentifier:(unsigned)arg2 additionalDictionaryItems:(id)arg3 ;
-(id)mapperForUUID:(id)arg1 reason:(int)arg2 ;
-(id)_createDeviceReport;
-(id)_createNWL2Report;
-(void)_sendMetric:(id)arg1 ofType:(int)arg2 forActivities:(id)arg3 additionalItems:(id)arg4 ;
-(id)_getBundleNameFromPid:(int)arg1 ;
-(NSUUID *)lastWiFiActivity;
-(void)traverseObject:(id)arg1 atPath:(id)arg2 ;
-(void)_convertHPLMNToDecimal:(id)arg1 mcc:(int*)arg2 mnc:(int*)arg3 ;
-(void)_handleStartActivity:(id)arg1 ;
-(void)_handleL2Start:(id)arg1 ;
-(void)_handleEpilogue:(id)arg1 ;
-(void)_handleL2Stop:(id)arg1 ;
-(void)_handleCFNetworkItem:(id)arg1 ;
-(void)_handleNWConnectionStatistics:(id)arg1 effectivePid:(int)arg2 ;
-(void)_handleWiFiItem:(id)arg1 ;
@end

