/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterControlOperation, HMDNetworkRouterClientConfiguration, NSString;

@interface HMDNetworkRouterClientControlOperation : NSObject <NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterControlOperation* _operation;
	HMDNetworkRouterClientConfiguration* _configuration;

}

@property (nonatomic,retain) HMDNetworkRouterControlOperation * operation;                     //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterClientConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(void)setOperation:(HMDNetworkRouterControlOperation *)arg1 ;
-(id)init;
-(HMDNetworkRouterControlOperation *)operation;
-(NSString *)description;
-(HMDNetworkRouterClientConfiguration *)configuration;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(HMDNetworkRouterClientConfiguration *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithOperation:(id)arg1 configuration:(id)arg2 ;
@end

