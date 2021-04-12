/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(HMFNetAddressInternal *)internal;
-(id)initWithHostname:(id)arg1 ;
-(NSString *)addressString;
-(unsigned long long)addressFamily;
-(id)attributeDescriptions;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
@end

