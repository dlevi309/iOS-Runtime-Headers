/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

@class NSString;


@protocol WiFiRecommendation
@property (nonatomic,copy,readonly) NSString * SSID; 
@property (nonatomic,readonly) id<WiFiCandidateNetwork> network; 
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,readonly) id<WiFiScannedNetwork> scannedNetwork; 
@property (nonatomic,readonly) BOOL unwantedNetworkName; 
@required
-(NSString *)SSID;
-(id<WiFiCandidateNetwork>)network;
-(long long)priority;
-(id<WiFiScannedNetwork>)scannedNetwork;
-(BOOL)unwantedNetworkName;

@end

