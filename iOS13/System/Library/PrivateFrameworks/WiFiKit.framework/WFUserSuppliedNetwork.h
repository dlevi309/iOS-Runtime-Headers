/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/WFNetworkListRecord.h>

@class NSString;

@interface WFUserSuppliedNetwork : NSObject <WFNetworkListRecord> {

	NSString* _ssid;
	long long _security;
	NSString* _username;
	NSString* _password;
	SecIdentityRef _TLSIdentity;

}

@property (nonatomic,copy) NSString * ssid;                           //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long security;                      //@synthesize security=_security - In the implementation block
@property (nonatomic,copy) NSString * username;                       //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                       //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) SecIdentityRef TLSIdentity;              //@synthesize TLSIdentity=_TLSIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)title;
-(id)subtitle;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(long long)rssi;
-(BOOL)isSecure;
-(long long)security;
-(void)setSecurity:(long long)arg1 ;
-(unsigned long long)signalBars;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(BOOL)isAdhoc;
-(SecIdentityRef)TLSIdentity;
-(BOOL)iOSHotspot;
-(float)scaledRSSI;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)isEnterprise;
-(BOOL)isInstantHotspot;
-(id)hotspotBatteryLife;
-(id)hotspotSignalStrength;
-(id)hotspotCellularProtocol;
-(BOOL)canBeDisplayedAsCurrent;
@end

