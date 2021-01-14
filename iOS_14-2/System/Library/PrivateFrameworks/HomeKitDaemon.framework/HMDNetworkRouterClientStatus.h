/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, NSData, HMDNetworkRouterIPAddressList, NSString, HAPTLVSignedNumberValue;

@interface HMDNetworkRouterClientStatus : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _clientIdentifier;
	NSData* _macAddress;
	HMDNetworkRouterIPAddressList* _ipAddressList;
	HAPTLVUnsignedNumberValue* _lanIdentifier;
	NSString* _name;
	HAPTLVSignedNumberValue* _rssi;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * clientIdentifier;               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSData * macAddress;                                        //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddressList * ipAddressList;              //@synthesize ipAddressList=_ipAddressList - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * lanIdentifier;                  //@synthesize lanIdentifier=_lanIdentifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) HAPTLVSignedNumberValue * rssi;                             //@synthesize rssi=_rssi - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(void)setClientIdentifier:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setRssi:(HAPTLVSignedNumberValue *)arg1 ;
-(id)init;
-(HAPTLVSignedNumberValue *)rssi;
-(NSString *)name;
-(void)setMacAddress:(NSData *)arg1 ;
-(NSData *)macAddress;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(HAPTLVUnsignedNumberValue *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setLanIdentifier:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)lanIdentifier;
-(void)setIpAddressList:(HMDNetworkRouterIPAddressList *)arg1 ;
-(HMDNetworkRouterIPAddressList *)ipAddressList;
-(id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddressList:(id)arg3 lanIdentifier:(id)arg4 name:(id)arg5 rssi:(id)arg6 ;
@end

