/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDNetworkRouterControlOperation, HMDNetworkRouterClientConfiguration, NSString;

@interface HMDNetworkRouterClientControlOperation : NSObject <NSCopying, HMDTLVProtocol> {

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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDNetworkRouterControlOperation *)operation;
-(void)setOperation:(HMDNetworkRouterControlOperation *)arg1 ;
-(void)setConfiguration:(HMDNetworkRouterClientConfiguration *)arg1 ;
-(HMDNetworkRouterClientConfiguration *)configuration;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithOperation:(id)arg1 configuration:(id)arg2 ;
@end

