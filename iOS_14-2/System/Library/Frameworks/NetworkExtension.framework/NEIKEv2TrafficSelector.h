/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWAddressEndpoint;

@interface NEIKEv2TrafficSelector : NSObject <NSCopying> {

	unsigned char _ipProtocol;
	unsigned short _startPort;
	unsigned short _endPort;
	NWAddressEndpoint* _startAddress;
	NWAddressEndpoint* _endAddress;

}

@property (readonly) unsigned long long type; 
@property (retain) NWAddressEndpoint * startAddress;              //@synthesize startAddress=_startAddress - In the implementation block
@property (retain) NWAddressEndpoint * endAddress;                //@synthesize endAddress=_endAddress - In the implementation block
@property (assign) unsigned short startPort;                      //@synthesize startPort=_startPort - In the implementation block
@property (assign) unsigned short endPort;                        //@synthesize endPort=_endPort - In the implementation block
@property (assign) unsigned char ipProtocol;                      //@synthesize ipProtocol=_ipProtocol - In the implementation block
+(id)copyAllIPv6;
+(id)copyAllIPv4;
+(id)copyConstrainedTrafficSelectorsForRequest:(id)arg1 reply:(id)arg2 ;
-(unsigned char)ipProtocol;
-(unsigned short)endPort;
-(unsigned short)startPort;
-(void)setStartPort:(unsigned short)arg1 ;
-(void)setEndPort:(unsigned short)arg1 ;
-(id)init;
-(void)setIpProtocol:(unsigned char)arg1 ;
-(NWAddressEndpoint *)startAddress;
-(id)description;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NWAddressEndpoint *)endAddress;
-(void)setStartAddress:(NWAddressEndpoint *)arg1 ;
-(void)setEndAddress:(NWAddressEndpoint *)arg1 ;
@end

