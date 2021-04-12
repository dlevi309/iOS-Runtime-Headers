/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFNetAddressInternal.h>

@interface _HMFNetAddressIPV6 : HMFNetAddressInternal {

	sockaddr_in6* _internal;

}

@property (nonatomic,readonly) sockaddr_in6* internal;              //@synthesize internal=_internal - In the implementation block
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(id)init;
-(sockaddr_in6*)internal;
-(unsigned long long)hash;
-(unsigned long long)addressFamily;
-(id)addressString;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
@end

