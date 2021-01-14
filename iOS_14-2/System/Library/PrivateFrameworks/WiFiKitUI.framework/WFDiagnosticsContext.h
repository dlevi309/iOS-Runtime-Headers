/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WiFiKitUI-Structs.h>
#import <libobjc.A.dylib/WFDiagnosticsProviderContext.h>

@class NSString, NSNumber, WFNetworkScanRecord, WFNetworkProfile;

@interface WFDiagnosticsContext : NSObject <WFDiagnosticsProviderContext> {

	BOOL _captive;
	BOOL _multiAP;
	BOOL _managed;
	NSString* _BSSID;
	NSNumber* _channel;
	NSString* _channelPerformance;
	long long requestedFields;
	NSString* _rssi;
	NSString* _rssiPerformance;
	/*^block*/id refreshHandler;
	NSString* _security;
	NSString* _adviceString;
	NSString* _awdl;
	NSString* _beaconPER;
	NSString* _bluetooth;
	NSString* _cca;
	NSString* _channelString;
	NSString* _channelWidth;
	NSString* _coexFooter;
	NSString* _deployment;
	NSString* _motion;
	NSString* _gateway;
	NSString* _internet;
	NSString* _probeFooter;
	NSString* _recvFrames;
	NSString* _scan;
	NSString* _securityAdvice;
	NSString* _transmitPER;
	WFNetworkScanRecord* _network;
	WFNetworkProfile* _profile;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;

}

@property (nonatomic,retain) WFNetworkScanRecord * network;                //@synthesize network=_network - In the implementation block
@property (nonatomic,retain) WFNetworkProfile * profile;                   //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef manager;                 //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef device;                   //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) id refreshHandler; 
@property (nonatomic,readonly) NSString * security;                        //@synthesize security=_security - In the implementation block
@property (nonatomic,readonly) NSString * securityAdvice;                  //@synthesize securityAdvice=_securityAdvice - In the implementation block
@property (nonatomic,readonly) NSString * BSSID;                           //@synthesize BSSID=_BSSID - In the implementation block
@property (nonatomic,readonly) NSNumber * channel;                         //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) NSString * channelString;                   //@synthesize channelString=_channelString - In the implementation block
@property (nonatomic,readonly) NSString * channelWidth;                    //@synthesize channelWidth=_channelWidth - In the implementation block
@property (nonatomic,readonly) NSString * channelPerformance;              //@synthesize channelPerformance=_channelPerformance - In the implementation block
@property (nonatomic,readonly) NSString * rssi;                            //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,readonly) NSString * cca;                             //@synthesize cca=_cca - In the implementation block
@property (nonatomic,readonly) NSString * adviceString;                    //@synthesize adviceString=_adviceString - In the implementation block
@property (nonatomic,readonly) NSString * beaconPER;                       //@synthesize beaconPER=_beaconPER - In the implementation block
@property (nonatomic,readonly) NSString * transmitPER;                     //@synthesize transmitPER=_transmitPER - In the implementation block
@property (nonatomic,readonly) NSString * recvFrames;                      //@synthesize recvFrames=_recvFrames - In the implementation block
@property (nonatomic,readonly) NSString * rssiPerformance;                 //@synthesize rssiPerformance=_rssiPerformance - In the implementation block
@property (nonatomic,readonly) BOOL captive;                               //@synthesize captive=_captive - In the implementation block
@property (nonatomic,readonly) BOOL managed;                               //@synthesize managed=_managed - In the implementation block
@property (nonatomic,readonly) BOOL multiAP;                               //@synthesize multiAP=_multiAP - In the implementation block
@property (nonatomic,readonly) NSString * deployment;                      //@synthesize deployment=_deployment - In the implementation block
@property (nonatomic,readonly) NSString * motion;                          //@synthesize motion=_motion - In the implementation block
@property (nonatomic,readonly) NSString * gateway;                         //@synthesize gateway=_gateway - In the implementation block
@property (nonatomic,readonly) NSString * internet;                        //@synthesize internet=_internet - In the implementation block
@property (nonatomic,readonly) NSString * probeFooter;                     //@synthesize probeFooter=_probeFooter - In the implementation block
@property (nonatomic,readonly) NSString * awdl;                            //@synthesize awdl=_awdl - In the implementation block
@property (nonatomic,readonly) NSString * bluetooth;                       //@synthesize bluetooth=_bluetooth - In the implementation block
@property (nonatomic,readonly) NSString * scan;                            //@synthesize scan=_scan - In the implementation block
@property (nonatomic,readonly) NSString * coexFooter;                      //@synthesize coexFooter=_coexFooter - In the implementation block
@property (nonatomic,readonly) long long requestedFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)cca;
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(NSString *)security;
-(NSString *)scan;
-(WFNetworkScanRecord *)network;
-(NSString *)gateway;
-(void)setManager:(WiFiManagerClientRef)arg1 ;
-(NSString *)rssi;
-(NSNumber *)channel;
-(WiFiDeviceClientRef)device;
-(void)setRefreshHandler:(id)arg1 ;
-(WFNetworkProfile *)profile;
-(NSString *)awdl;
-(NSString *)channelWidth;
-(WiFiManagerClientRef)manager;
-(NSString *)BSSID;
-(NSString *)motion;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(NSString *)bluetooth;
-(BOOL)captive;
-(BOOL)multiAP;
-(void)cancel;
-(id)refreshHandler;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(long long)requestedFields;
-(BOOL)managed;
-(NSString *)securityAdvice;
-(NSString *)channelString;
-(NSString *)channelPerformance;
-(NSString *)adviceString;
-(NSString *)beaconPER;
-(NSString *)transmitPER;
-(NSString *)recvFrames;
-(NSString *)rssiPerformance;
-(NSString *)deployment;
-(NSString *)internet;
-(NSString *)probeFooter;
-(NSString *)coexFooter;
-(id)initWithNetwork:(id)arg1 profile:(id)arg2 ;
-(void)updateInfo:(id)arg1 ;
@end

