/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isSecure;
-(unsigned long long)signalBars;
-(long long)security;
-(void)setSsid:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)hotspotSignalStrength;
-(id)hotspotBatteryLife;
-(id)subtitle;
-(long long)rssi;
-(NSString *)ssid;
-(NSString *)password;
-(BOOL)iOSHotspot;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)isEnterprise;
-(float)scaledRSSI;
-(id)hotspotCellularProtocol;
-(BOOL)isAdhoc;
-(void)setSecurity:(long long)arg1 ;
-(id)title;
-(BOOL)isInstantHotspot;
-(BOOL)canBeDisplayedAsCurrent;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)TLSIdentity;
@end

