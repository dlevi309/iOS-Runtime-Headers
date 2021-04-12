/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDNetworkRouterControlOperationStatus, HMDNetworkRouterClientConfiguration, NSString;

@interface HMDNetworkRouterClientControlOperationResponse : NSObject <NSCopying, HMDTLVProtocol> {

	HMDNetworkRouterControlOperationStatus* _status;
	HMDNetworkRouterClientConfiguration* _configuration;

}

@property (nonatomic,retain) HMDNetworkRouterControlOperationStatus * status;                  //@synthesize status=_status - In the implementation block
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
-(HMDNetworkRouterControlOperationStatus *)status;
-(void)setConfiguration:(HMDNetworkRouterClientConfiguration *)arg1 ;
-(HMDNetworkRouterClientConfiguration *)configuration;
-(void)setStatus:(HMDNetworkRouterControlOperationStatus *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithStatus:(id)arg1 configuration:(id)arg2 ;
@end

