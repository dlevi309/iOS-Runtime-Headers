/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSString;

@interface WFNetworkInterface : NSObject {

	NSString* _interfaceName;

}

@property (nonatomic,readonly) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,readonly) NSString * SSID; 
@property (nonatomic,readonly) NSString * BSSID; 
@property (nonatomic,readonly) NSString * IPv4Address; 
@property (nonatomic,readonly) NSString * IPv6Address; 
+(id)networkInterfaceWithInterface:(id)arg1 ;
+(id)activeNetworkInterface;
+(id)defaultNetworkInterfaces;
+(id)wifiNetworkInterfaces;
-(NSString *)SSID;
-(NSString *)interfaceName;
-(NSString *)BSSID;
-(id)initWithInterface:(id)arg1 ;
-(NSString *)IPv4Address;
-(NSString *)IPv6Address;
-(WiFiNetworkRef)currentWiFiNetwork;
-(id)ipAddressForFamily:(unsigned char)arg1 ;
@end

