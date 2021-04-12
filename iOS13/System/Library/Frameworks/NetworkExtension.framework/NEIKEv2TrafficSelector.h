/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)copyConstrainedTrafficSelectorsForRequest:(id)arg1 reply:(id)arg2 ;
+(id)copyAllIPv6;
+(id)copyAllIPv4;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setIpProtocol:(unsigned char)arg1 ;
-(unsigned char)ipProtocol;
-(void)setStartAddress:(NWAddressEndpoint *)arg1 ;
-(NWAddressEndpoint *)startAddress;
-(unsigned short)startPort;
-(NWAddressEndpoint *)endAddress;
-(unsigned short)endPort;
-(void)setEndAddress:(NWAddressEndpoint *)arg1 ;
-(void)setStartPort:(unsigned short)arg1 ;
-(void)setEndPort:(unsigned short)arg1 ;
@end

