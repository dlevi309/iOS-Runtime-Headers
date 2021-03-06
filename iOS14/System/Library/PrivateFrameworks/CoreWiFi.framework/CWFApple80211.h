/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject, NSThread, NSMutableDictionary, NSString;

@interface CWFApple80211 : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSThread* _callbackThread;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_source> _eventSource;
	Apple80211Ref _a11Ref;
	NSMutableDictionary* _mutableInterfaceNameEventMap;
	NSString* _interfaceName;
	/*^block*/id _eventHandler;

}

@property (nonatomic,copy,readonly) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (copy) id eventHandler;                                          //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)initWithInterfaceName:(id)arg1 ;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(BOOL)setAWDLPeerTrafficRegistration:(id)arg1 error:(id*)arg2 ;
-(id)opMode:(id*)arg1 ;
-(id)AWDLAvailabilityWindowAPAlignment:(id*)arg1 ;
-(id)AWDLPresenceMode:(id*)arg1 ;
-(id)AWDLSecondaryMasterChannel:(id*)arg1 ;
-(id)__supportedChannelsWithCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)AWDLContinuousElectionAlgorithmEnabled:(id*)arg1 ;
-(id)AWDLElectionMetric:(id*)arg1 ;
-(id)init;
-(id)AWDLEncryptionType:(id*)arg1 ;
-(id)RSSI:(id*)arg1 ;
-(id)AWDLElectionParameters:(id*)arg1 ;
-(id)virtualInterfaceParent:(id*)arg1 ;
-(id)countryCode:(id*)arg1 ;
-(id)AWDLSyncState:(id*)arg1 ;
-(id)supportedPHYModes:(id*)arg1 ;
-(id)__scanDictionaryWithParameters:(id)arg1 ;
-(id)interfaceNames:(id*)arg1 ;
-(id)channel:(id*)arg1 ;
-(NSString *)interfaceName;
-(id)AWDLMasterChannel:(id*)arg1 ;
-(id)leakyAPStats:(id*)arg1 ;
-(id)__VHTMCSIndex:(id*)arg1 ;
-(id)AWDLBTLEStateParameters:(id*)arg1 ;
-(id)chainAck:(id*)arg1 ;
-(id)cachedScanResultsWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)AWDLSidecarDiagnostics:(id*)arg1 ;
-(id)bluetoothCoexistenceMode:(id*)arg1 ;
-(int)startMonitoringEventWithType:(unsigned)arg1 interfaceName:(id)arg2 ;
-(id)AWDLSyncChannelSequence:(id*)arg1 ;
-(id)DTIMInterval:(id*)arg1 ;
-(id)AWDLPeerTrafficRegistration:(id*)arg1 ;
-(id)MCSIndex:(id*)arg1 ;
-(id)guardInterval:(id*)arg1 ;
-(id)wowEnabled:(id*)arg1 ;
-(id)SSID:(id*)arg1 ;
-(id)__processScanResults:(id)arg1 parameters:(id)arg2 ;
-(id)virtualInterfaceRole:(id*)arg1 ;
-(id)bluetoothCoexistenceConfig:(id*)arg1 ;
-(id)numberOfSpatialStreams:(id*)arg1 ;
-(id)linkChangedEventData:(id*)arg1 ;
-(id)__legacySupportedChannels:(id*)arg1 ;
-(Apple80211Ref)__apple80211RefWithInterfaceName:(id)arg1 ;
-(id)supportedChannelsWithCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)AWDLElectionRSSIThresholds:(id*)arg1 ;
-(id)__VHTNumberOfSpatialStreams:(id*)arg1 ;
-(id)virtualInterfaceNames:(id*)arg1 ;
-(id)noise:(id*)arg1 ;
-(id)AWDLOpMode:(id*)arg1 ;
-(id)activePHYMode:(id*)arg1 ;
-(id)capabilities:(id*)arg1 ;
-(void)invalidate;
-(id)AWDLElectionID:(id*)arg1 ;
-(id)powerOn:(id*)arg1 ;
-(id)AWDLSyncEnabled:(id*)arg1 ;
-(id)perAntennaRSSI:(id*)arg1 ;
-(id)AWDLAFTxMode:(id*)arg1 ;
-(id)AWDLPeerDatabase:(id*)arg1 ;
-(id)__hardwareSupportedChannels:(id*)arg1 ;
-(id)txChainPower:(id*)arg1 ;
-(BOOL)setChannel:(id)arg1 error:(id*)arg2 ;
-(id)bluetoothCoexistenceProfiles2GHz:(id*)arg1 ;
-(id)AWDLPreferredChannels:(id*)arg1 ;
-(void)__setupEventMonitoring;
-(BOOL)isMonitoringEventType:(unsigned)arg1 interfaceName:(id)arg2 ;
-(void)stopMonitoringEventWithType:(unsigned)arg1 interfaceName:(id)arg2 ;
-(id)AWDLStatistics:(id*)arg1 ;
-(id)rangingCapabilities:(id*)arg1 ;
-(id)powerState:(id*)arg1 ;
-(id)__countryChannelsWithCountryCode:(id)arg1 error:(id*)arg2 ;
-(BOOL)isAWDLEnabled;
-(id)AWDLStrategy:(id*)arg1 ;
-(id)AWDLExtensionStateMachineParameters:(id*)arg1 ;
-(id)__VHTGuardInterval:(id*)arg1 ;
-(id)txPower:(id*)arg1 ;
-(id)desense:(id*)arg1 ;
-(id)bluetoothCoexistenceProfiles5GHz:(id*)arg1 ;
-(id)BSSID:(id*)arg1 ;
-(id)desenseLevel:(id*)arg1 ;
-(id)AWDLSyncParameters:(id*)arg1 ;
-(id)__numberOfSpatialStreams:(id*)arg1 ;
-(id)AWDLGuardTime:(id*)arg1 ;
-(id)AWDLSocialTimeSlots:(id*)arg1 ;
-(id)txRate:(id*)arg1 ;
-(void)dealloc;
-(id)__guardInterval:(id*)arg1 ;
-(id)authType:(id*)arg1 ;
-(id)__MCSIndex:(id*)arg1 ;
@end

