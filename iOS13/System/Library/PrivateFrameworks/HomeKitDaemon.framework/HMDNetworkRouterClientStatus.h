/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDTLVUnsignedNumberValue, NSData, HMDNetworkRouterIPAddressList, NSString, HMDTLVSignedNumberValue;

@interface HMDNetworkRouterClientStatus : NSObject <NSCopying, HMDTLVProtocol> {

	HMDTLVUnsignedNumberValue* _clientIdentifier;
	NSData* _macAddress;
	HMDNetworkRouterIPAddressList* _ipAddressList;
	HMDTLVUnsignedNumberValue* _lanIdentifier;
	NSString* _name;
	HMDTLVSignedNumberValue* _rssi;

}

@property (nonatomic,retain) HMDTLVUnsignedNumberValue * clientIdentifier;               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSData * macAddress;                                        //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddressList * ipAddressList;              //@synthesize ipAddressList=_ipAddressList - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * lanIdentifier;                  //@synthesize lanIdentifier=_lanIdentifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) HMDTLVSignedNumberValue * rssi;                             //@synthesize rssi=_rssi - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(HMDTLVSignedNumberValue *)rssi;
-(NSData *)macAddress;
-(void)setClientIdentifier:(HMDTLVUnsignedNumberValue *)arg1 ;
-(void)setRssi:(HMDTLVSignedNumberValue *)arg1 ;
-(HMDTLVUnsignedNumberValue *)clientIdentifier;
-(void)setMacAddress:(NSData *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setLanIdentifier:(HMDTLVUnsignedNumberValue *)arg1 ;
-(HMDTLVUnsignedNumberValue *)lanIdentifier;
-(void)setIpAddressList:(HMDNetworkRouterIPAddressList *)arg1 ;
-(HMDNetworkRouterIPAddressList *)ipAddressList;
-(id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddressList:(id)arg3 lanIdentifier:(id)arg4 name:(id)arg5 rssi:(id)arg6 ;
@end

