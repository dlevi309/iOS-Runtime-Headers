/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSString;

@interface VCNetworkAddress : NSObject {

	NSString* _ip;
	NSString* _interfaceName;
	unsigned short _port;
	unsigned short _ipVersion;

}

@property (nonatomic,copy) NSString * ip;                           //@synthesize ip=_ip - In the implementation block
@property (assign,nonatomic) unsigned short port;                   //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) unsigned short ipVersion;              //@synthesize ipVersion=_ipVersion - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                //@synthesize interfaceName=_interfaceName - In the implementation block
-(void)setPort:(unsigned short)arg1 ;
-(NSString *)ip;
-(unsigned short)port;
-(void)setIp:(NSString *)arg1 ;
-(BOOL)isIPv6;
-(NSString *)interfaceName;
-(id)description;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(int)getSockaddrStorage:(sockaddr_storage*)arg1 size:(unsigned long long*)arg2 ;
-(void)setIpVersion:(unsigned short)arg1 ;
-(unsigned short)ipVersion;
@end

