/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterIPProtocolVersion, HAPTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterICMPType : NSObject <NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterIPProtocolVersion* _protocol;
	HAPTLVUnsignedNumberValue* _typeValue;

}

@property (nonatomic,retain) HMDNetworkRouterIPProtocolVersion * protocol;              //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * typeValue;                     //@synthesize typeValue=_typeValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)typeFromICMPType:(id)arg1 ;
-(void)setProtocol:(HMDNetworkRouterIPProtocolVersion *)arg1 ;
-(id)init;
-(HMDNetworkRouterIPProtocolVersion *)protocol;
-(HAPTLVUnsignedNumberValue *)typeValue;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithProtocol:(id)arg1 typeValue:(id)arg2 ;
-(void)setTypeValue:(HAPTLVUnsignedNumberValue *)arg1 ;
@end

