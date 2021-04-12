/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@class CWFClient, NSString;

@interface CWFInterface : NSObject {

	CWFClient* _client;
	NSString* _interfaceName;

}

@property (nonatomic,retain) CWFClient * client;                  //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
+(id)interfaceWithClient:(id)arg1 interfaceName:(id)arg2 ;
-(id)countryCode;
-(CWFClient *)client;
-(void)setClient:(CWFClient *)arg1 ;
-(id)channel;
-(unsigned long long)securityType;
-(id)IPv6Addresses;
-(id)IPv4Addresses;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)capabilities;
-(BOOL)wakeOnWirelessEnabled;
-(id)MACAddress;
-(id)SSID;
-(id)networkName;
-(id)BSSID;
-(long long)RSSI;
-(long long)noise;
-(BOOL)setChannel:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAWDLPeerTrafficRegistration:(id)arg1 error:(id*)arg2 ;
-(long long)WEPSubtype;
-(long long)WAPISubtype;
-(id)DNSServerAddresses;
-(unsigned)EAP8021XSupplicantState;
-(unsigned)EAP8021XControlMode;
-(unsigned)EAP8021XControlState;
-(int)EAP8021XClientStatus;
-(int)PHYMode;
-(id)__authDataFromClient;
-(int)__flagsForChannelWidth:(int)arg1 ;
-(id)supportedChannelsWithCountryCode:(id)arg1 ;
-(id)virtualInterfaceWithRole:(int)arg1 ;
-(id)virtualInterfaceNames;
-(id)parentInterfaceName;
-(int)virtualInterfaceRole;
-(BOOL)setPower:(BOOL)arg1 error:(id*)arg2 ;
-(id)performScanWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)performScanWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)performANQPWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)performANQPWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)associateWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)associateWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disassociateWithReason:(long long)arg1 ;
-(id)currentScanResult;
-(id)currentKnownNetworkProfile;
-(BOOL)powerOn;
-(id)SSIDHash;
-(id)BSSIDHash;
-(double)txRate;
-(double)txPower;
-(id)authType;
-(int)opMode;
-(int)supportedPHYModes;
-(id)supportedChannel:(unsigned long long)arg1 width:(int)arg2 countryCode:(id)arg3 ;
-(unsigned long long)MCSIndex;
-(unsigned long long)guardInterval;
-(unsigned long long)numberOfSpatialStreams;
-(unsigned long long)DTIMInterval;
-(id)AWDLInterface;
-(id)APSTAInterface;
-(id)IO80211ControllerInfo;
-(id)IO80211InterfaceInfo;
-(id)roamStatus;
-(id)joinStatus;
-(id)autoJoinStatus;
-(id)linkDownStatus;
-(id)networkServiceID;
-(id)networkServiceName;
-(BOOL)isNetworkServiceEnabled;
-(id)IPv4RouterAddress;
-(id)IPv6RouterAddress;
-(id)DHCPLeaseStartedAt;
-(id)DHCPLeaseExpiresAt;
-(BOOL)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg1 error:(id*)arg2 ;
-(void)stopAWDLPeerAssistedDiscovery;
-(id)systemAWDLPeerTrafficRegistrations;
-(id)AWDLPreferredChannels;
-(id)AWDLSyncEnabled;
-(id)AWDLSyncState;
-(id)AWDLSyncChannelSequence;
-(id)AWDLStrategy;
-(id)AWDLElectionParameters;
-(id)AWDLPeerDatabase;
-(id)AWDLSocialTimeSlots;
-(id)AWDLElectionID;
-(id)AWDLElectionRSSIThresholds;
-(id)AWDLMasterChannel;
-(id)AWDLSecondaryMasterChannel;
-(id)AWDLOpMode;
-(id)AWDLSyncParameters;
-(id)AWDLStatistics;
-(id)AWDLSidecarDiagnostics;
-(id)rangingCapabilities;
-(BOOL)setRangeable:(BOOL)arg1 peerList:(id)arg2 error:(id*)arg3 ;
-(id)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(id)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 error:(id*)arg3 ;
@end

