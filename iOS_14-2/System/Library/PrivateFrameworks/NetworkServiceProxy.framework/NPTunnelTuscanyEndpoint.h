/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <Network/NWEndpoint.h>

@class NSArray, NSData;

@interface NPTunnelTuscanyEndpoint : NWEndpoint {

	NSArray* _hosts;
	NSData* _hostsData;

}

@property (readonly) NSData * hostsData;              //@synthesize hostsData=_hostsData - In the implementation block
@property (readonly) NSArray * hosts;                 //@synthesize hosts=_hosts - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)encodeHosts:(id)arg1 ;
+(unsigned)endpointType;
+(BOOL)supportsResolverCallback;
-(NSArray *)hosts;
-(void)resolveEndpointWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEncodedData:(id)arg1 ;
-(id)initWithHosts:(id)arg1 ;
-(id)description;
-(id)encodedData;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)hostsData;
-(id)copyHostsWithPort:(id)arg1 ;
@end

