/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(unsigned)endpointType;
+(BOOL)supportsResolverCallback;
+(id)encodeHosts:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)encodedData;
-(void)resolveEndpointWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEncodedData:(id)arg1 ;
-(id)initWithHosts:(id)arg1 ;
-(NSArray *)hosts;
-(id)copyHostsWithPort:(id)arg1 ;
-(NSData *)hostsData;
@end

