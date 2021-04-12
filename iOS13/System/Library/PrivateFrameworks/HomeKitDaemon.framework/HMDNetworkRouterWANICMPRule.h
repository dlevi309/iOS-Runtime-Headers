/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/HMDNetworkRouterWANRule.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class NSString, HMDNetworkRouterIPAddress, HMDNetworkRouterICMPTypeList;

@interface HMDNetworkRouterWANICMPRule : NSObject <HMDNetworkRouterWANRule, NSCopying, HMDTLVProtocol> {

	NSString* _hostDNSName;
	HMDNetworkRouterIPAddress* _hostIPStart;
	HMDNetworkRouterIPAddress* _hostIPEnd;
	HMDNetworkRouterICMPTypeList* _icmpTypes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * hostDNSName;                                //@synthesize hostDNSName=_hostDNSName - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * hostIPStart;               //@synthesize hostIPStart=_hostIPStart - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * hostIPEnd;                 //@synthesize hostIPEnd=_hostIPEnd - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterICMPTypeList * icmpTypes;              //@synthesize icmpTypes=_icmpTypes - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithHostDNSName:(id)arg1 hostIPStart:(id)arg2 hostIPEnd:(id)arg3 icmpTypes:(id)arg4 ;
-(HMDNetworkRouterICMPTypeList *)icmpTypes;
-(void)addTo:(id)arg1 ;
-(void)setHostDNSName:(NSString *)arg1 ;
-(void)setHostIPStart:(HMDNetworkRouterIPAddress *)arg1 ;
-(void)setHostIPEnd:(HMDNetworkRouterIPAddress *)arg1 ;
-(void)setIcmpTypes:(HMDNetworkRouterICMPTypeList *)arg1 ;
-(NSString *)hostDNSName;
-(HMDNetworkRouterIPAddress *)hostIPStart;
-(HMDNetworkRouterIPAddress *)hostIPEnd;
@end

