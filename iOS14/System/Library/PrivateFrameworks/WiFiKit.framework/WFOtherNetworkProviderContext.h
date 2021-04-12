/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

@class NSArray, NSString;


@protocol WFOtherNetworkProviderContext <WFCredentialsProviderContext>
@property (nonatomic,readonly) BOOL WAPIEnabled; 
@property (nonatomic,readonly) NSArray * WAPIRootCertificates; 
@property (nonatomic,readonly) NSArray * WAPIIdentities; 
@property (nonatomic,readonly) BOOL supportsRandomMACAddress; 
@property (nonatomic,readonly) BOOL isUsingRandomMACAddress; 
@property (nonatomic,copy,readonly) NSString * randomMACAddress; 
@property (nonatomic,copy,readonly) NSString * hardwareMACAddress; 
@required
-(NSString *)hardwareMACAddress;
-(NSString *)randomMACAddress;
-(NSArray *)WAPIRootCertificates;
-(void)saveRandomMAC;
-(void)saveHardwareMAC;
-(BOOL)WAPIEnabled;
-(NSArray *)WAPIIdentities;
-(BOOL)supportsRandomMACAddress;
-(BOOL)isUsingRandomMACAddress;

@end

