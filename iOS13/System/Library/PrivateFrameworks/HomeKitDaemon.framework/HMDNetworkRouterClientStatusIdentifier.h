/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDTLVUnsignedNumberValue, NSData, HMDNetworkRouterIPAddress, NSString;

@interface HMDNetworkRouterClientStatusIdentifier : NSObject <NSCopying, HMDTLVProtocol> {

	HMDTLVUnsignedNumberValue* _clientIdentifier;
	NSData* _macAddress;
	HMDNetworkRouterIPAddress* _ipAddress;

}

@property (nonatomic,retain) HMDTLVUnsignedNumberValue * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSData * macAddress;                                       //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * ipAddress;                     //@synthesize ipAddress=_ipAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)macAddress;
-(void)setClientIdentifier:(HMDTLVUnsignedNumberValue *)arg1 ;
-(HMDTLVUnsignedNumberValue *)clientIdentifier;
-(HMDNetworkRouterIPAddress *)ipAddress;
-(void)setIpAddress:(HMDNetworkRouterIPAddress *)arg1 ;
-(void)setMacAddress:(NSData *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddress:(id)arg3 ;
@end

