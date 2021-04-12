/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

@class NSString, NSNumber;


@protocol WFDiagnosticsProviderContext <WFProviderContext>
@property (nonatomic,copy) id refreshHandler; 
@property (nonatomic,readonly) NSString * security; 
@property (nonatomic,readonly) NSString * securityAdvice; 
@property (nonatomic,readonly) NSString * BSSID; 
@property (nonatomic,readonly) NSNumber * channel; 
@property (nonatomic,readonly) NSString * channelString; 
@property (nonatomic,readonly) NSString * channelWidth; 
@property (nonatomic,readonly) NSString * channelPerformance; 
@property (nonatomic,readonly) NSString * rssi; 
@property (nonatomic,readonly) NSString * cca; 
@property (nonatomic,readonly) NSString * adviceString; 
@property (nonatomic,readonly) NSString * beaconPER; 
@property (nonatomic,readonly) NSString * transmitPER; 
@property (nonatomic,readonly) NSString * recvFrames; 
@property (nonatomic,readonly) NSString * rssiPerformance; 
@property (nonatomic,readonly) BOOL captive; 
@property (nonatomic,readonly) BOOL managed; 
@property (nonatomic,readonly) BOOL multiAP; 
@property (nonatomic,readonly) NSString * deployment; 
@property (nonatomic,readonly) NSString * motion; 
@property (nonatomic,readonly) NSString * gateway; 
@property (nonatomic,readonly) NSString * internet; 
@property (nonatomic,readonly) NSString * probeFooter; 
@property (nonatomic,readonly) NSString * awdl; 
@property (nonatomic,readonly) NSString * bluetooth; 
@property (nonatomic,readonly) NSString * scan; 
@property (nonatomic,readonly) NSString * coexFooter; 
@required
-(NSString *)cca;
-(NSString *)security;
-(NSString *)scan;
-(NSString *)gateway;
-(NSString *)rssi;
-(NSNumber *)channel;
-(void)setRefreshHandler:(/*^block*/id)arg1;
-(NSString *)awdl;
-(NSString *)channelWidth;
-(NSString *)BSSID;
-(NSString *)motion;
-(NSString *)bluetooth;
-(BOOL)captive;
-(BOOL)multiAP;
-(id)refreshHandler;
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

@end

