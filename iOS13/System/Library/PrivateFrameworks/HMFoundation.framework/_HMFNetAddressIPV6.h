/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFNetAddressInternal.h>

@interface _HMFNetAddressIPV6 : HMFNetAddressInternal {

	sockaddr_in6* _internal;

}

@property (nonatomic,readonly) sockaddr_in6* internal;              //@synthesize internal=_internal - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(sockaddr_in6*)internal;
-(id)addressString;
-(unsigned long long)addressFamily;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
@end

