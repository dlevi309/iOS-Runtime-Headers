/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSString, NSDictionary, WiFiAwareDiscoveryResult, WiFiMACAddress;

@interface CUNANEndpoint : NSObject {

	unsigned char _instanceID;
	int _port;
	int _rssi;
	NSString* _identifier;
	NSString* _name;
	NSString* _serviceType;
	NSDictionary* _textInfo;
	WiFiAwareDiscoveryResult* _discoveryResult;
	WiFiMACAddress* _macAddress;

}

@property (nonatomic,retain) WiFiAwareDiscoveryResult * discoveryResult;              //@synthesize discoveryResult=_discoveryResult - In the implementation block
@property (assign,nonatomic) unsigned char instanceID;                                //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,retain) WiFiMACAddress * macAddress;                             //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int port;                                                //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) int rssi;                                                //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * textInfo;                          //@synthesize textInfo=_textInfo - In the implementation block
-(void)setPort:(int)arg1 ;
-(unsigned char)instanceID;
-(int)port;
-(void)setRssi:(int)arg1 ;
-(int)rssi;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)name;
-(void)setMacAddress:(WiFiMACAddress *)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(WiFiMACAddress *)macAddress;
-(id)description;
-(WiFiAwareDiscoveryResult *)discoveryResult;
-(NSDictionary *)textInfo;
-(void)setInstanceID:(unsigned char)arg1 ;
-(id)initWithEndpointID:(const char*)arg1 error:(id*)arg2 ;
-(unsigned)updateWithDiscoveryResult:(id)arg1 ;
-(void)setDiscoveryResult:(WiFiAwareDiscoveryResult *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)serviceType;
@end

