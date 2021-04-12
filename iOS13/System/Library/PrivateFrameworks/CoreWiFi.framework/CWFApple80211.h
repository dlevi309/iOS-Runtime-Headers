/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject, NSThread, NSMutableArray, NSString;

@interface CWFApple80211 : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSThread* _callbackThread;
	NSObject*<OS_dispatch_queue> _eventQueue;
	Apple80211Ref _a11Ref;
	NSMutableArray* _mutableEventTypes;
	NSString* _interfaceName;
	/*^block*/id _eventHandler;

}

@property (nonatomic,copy,readonly) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (copy) id eventHandler;                                          //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(NSString *)interfaceName;
-(id)initWithInterfaceName:(id)arg1 ;
-(id)powerOn:(id*)arg1 ;
-(Apple80211Ref)__apple80211RefWithInterfaceName:(id)arg1 ;
-(void)__setupEventMonitoring;
-(id)__MCSIndex:(id*)arg1 ;
-(id)__numberOfSpatialStreams:(id*)arg1 ;
-(id)__guardInterval:(id*)arg1 ;
-(id)activePHYMode:(id*)arg1 ;
-(id)__VHTMCSIndex:(id*)arg1 ;
-(id)__VHTGuardInterval:(id*)arg1 ;
-(id)__VHTNumberOfSpatialStreams:(id*)arg1 ;
-(id)__supportedChannelsWithCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)AWDLSyncEnabled:(id*)arg1 ;
-(BOOL)isAWDLEnabled;
-(int)startMonitoringEventWithType:(unsigned)arg1 ;
-(void)stopMonitoringEventWithType:(unsigned)arg1 ;
-(void)stopMonitoringAllEvents;
-(id)monitoringEventTypes;
-(id)interfaceNames:(id*)arg1 ;
-(id)virtualInterfaceNames:(id*)arg1 ;
-(id)MCSIndex:(id*)arg1 ;
-(id)DTIMInterval:(id*)arg1 ;
-(id)RSSI:(id*)arg1 ;
-(id)noise:(id*)arg1 ;
-(id)authType:(id*)arg1 ;
-(id)supportedPHYModes:(id*)arg1 ;
-(id)txRate:(id*)arg1 ;
-(id)txPower:(id*)arg1 ;
-(id)opMode:(id*)arg1 ;
-(id)guardInterval:(id*)arg1 ;
-(id)numberOfSpatialStreams:(id*)arg1 ;
-(id)capabilities:(id*)arg1 ;
-(id)SSID:(id*)arg1 ;
-(id)BSSID:(id*)arg1 ;
-(id)countryCode:(id*)arg1 ;
-(id)virtualInterfaceParent:(id*)arg1 ;
-(id)virtualInterfaceRole:(id*)arg1 ;
-(id)wowEnabled:(id*)arg1 ;
-(id)linkChangedEventData:(id*)arg1 ;
-(id)channel:(id*)arg1 ;
-(BOOL)setChannel:(id)arg1 error:(id*)arg2 ;
-(id)__countryChannelsWithCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)__hardwareSupportedChannels:(id*)arg1 ;
-(id)__legacySupportedChannels:(id*)arg1 ;
-(id)supportedChannelsWithCountryCode:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAWDLPeerTrafficRegistration:(id)arg1 error:(id*)arg2 ;
-(id)AWDLSyncChannelSequence:(id*)arg1 ;
-(id)AWDLSyncState:(id*)arg1 ;
-(id)AWDLSyncParameters:(id*)arg1 ;
-(id)AWDLElectionID:(id*)arg1 ;
-(id)AWDLElectionParameters:(id*)arg1 ;
-(id)AWDLElectionRSSIThresholds:(id*)arg1 ;
-(id)AWDLSocialTimeSlots:(id*)arg1 ;
-(id)AWDLPeerDatabase:(id*)arg1 ;
-(id)AWDLStatistics:(id*)arg1 ;
-(id)AWDLMasterChannel:(id*)arg1 ;
-(id)AWDLSecondaryMasterChannel:(id*)arg1 ;
-(id)AWDLPreferredChannels:(id*)arg1 ;
-(id)AWDLOpMode:(id*)arg1 ;
-(id)AWDLStrategy:(id*)arg1 ;
-(id)rangingCapabilities:(id*)arg1 ;
-(id)AWDLSidecarDiagnostics:(id*)arg1 ;
@end

