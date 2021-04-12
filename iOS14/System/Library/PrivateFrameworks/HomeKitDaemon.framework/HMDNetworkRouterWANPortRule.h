/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/HMDNetworkRouterWANRule.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterProtocol, NSString, HMDNetworkRouterIPAddress, HAPTLVUnsignedNumberValue;

@interface HMDNetworkRouterWANPortRule : NSObject <HMDNetworkRouterWANRule, NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterProtocol* _protocol;
	NSString* _hostDNSName;
	HMDNetworkRouterIPAddress* _hostIPStart;
	HMDNetworkRouterIPAddress* _hostIPEnd;
	HAPTLVUnsignedNumberValue* _hostPortStart;
	HAPTLVUnsignedNumberValue* _hostPortEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HMDNetworkRouterProtocol * protocol;                    //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSString * hostDNSName;                                 //@synthesize hostDNSName=_hostDNSName - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * hostIPStart;                //@synthesize hostIPStart=_hostIPStart - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * hostIPEnd;                  //@synthesize hostIPEnd=_hostIPEnd - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * hostPortStart;              //@synthesize hostPortStart=_hostPortStart - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * hostPortEnd;                //@synthesize hostPortEnd=_hostPortEnd - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(void)setProtocol:(HMDNetworkRouterProtocol *)arg1 ;
-(id)init;
-(HMDNetworkRouterProtocol *)protocol;
-(void)addTo:(id)arg1 ;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithProtocol:(id)arg1 hostDNSName:(id)arg2 hostIPStart:(id)arg3 hostIPEnd:(id)arg4 hostPortStart:(id)arg5 hostPortEnd:(id)arg6 ;
-(void)setHostDNSName:(NSString *)arg1 ;
-(void)setHostIPStart:(HMDNetworkRouterIPAddress *)arg1 ;
-(void)setHostIPEnd:(HMDNetworkRouterIPAddress *)arg1 ;
-(NSString *)hostDNSName;
-(HMDNetworkRouterIPAddress *)hostIPStart;
-(HMDNetworkRouterIPAddress *)hostIPEnd;
-(void)setHostPortStart:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setHostPortEnd:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)hostPortStart;
-(HAPTLVUnsignedNumberValue *)hostPortEnd;
@end

