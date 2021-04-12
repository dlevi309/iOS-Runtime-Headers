/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDNetworkRouterIPProtocolVersion, HMDTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterICMPType : NSObject <NSCopying, HMDTLVProtocol> {

	HMDNetworkRouterIPProtocolVersion* _protocol;
	HMDTLVUnsignedNumberValue* _typeValue;

}

@property (nonatomic,retain) HMDNetworkRouterIPProtocolVersion * protocol;              //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * typeValue;                     //@synthesize typeValue=_typeValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)typeFromICMPType:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDNetworkRouterIPProtocolVersion *)protocol;
-(void)setProtocol:(HMDNetworkRouterIPProtocolVersion *)arg1 ;
-(HMDTLVUnsignedNumberValue *)typeValue;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithProtocol:(id)arg1 typeValue:(id)arg2 ;
-(void)setTypeValue:(HMDTLVUnsignedNumberValue *)arg1 ;
@end

