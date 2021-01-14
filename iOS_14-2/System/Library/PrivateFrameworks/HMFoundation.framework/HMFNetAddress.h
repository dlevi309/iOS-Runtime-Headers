/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress : HMFObject {

	HMFNetAddressInternal* _internal;

}

@property (nonatomic,readonly) HMFNetAddressInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) unsigned long long addressFamily; 
@property (nonatomic,copy,readonly) NSString * addressString; 
+(id)localAddress;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(id)init;
-(id)initWithHostname:(id)arg1 ;
-(HMFNetAddressInternal *)internal;
-(id)description;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(unsigned long long)addressFamily;
-(NSString *)addressString;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
@end

