/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
*/


@class NSString;

@interface TVLNetworkInterface : NSObject {

	unsigned long long _interfaceType;
	NSString* _interfaceName;
	NSString* _ipv4;
	NSString* _ipv6;

}

@property (nonatomic,readonly) unsigned long long interfaceType;              //@synthesize interfaceType=_interfaceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * interfaceName;                 //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * ipv4;                          //@synthesize ipv4=_ipv4 - In the implementation block
@property (nonatomic,copy,readonly) NSString * ipv6;                          //@synthesize ipv6=_ipv6 - In the implementation block
-(unsigned long long)interfaceType;
-(NSString *)ipv4;
-(NSString *)ipv6;
-(NSString *)interfaceName;
-(id)initWithInterfaceType:(unsigned long long)arg1 interfaceName:(id)arg2 ;
@end

