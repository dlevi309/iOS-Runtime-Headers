/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFNetAddressInternal.h>

@class NSString;

@interface _HMFNetAddressHostname : HMFNetAddressInternal {

	NSString* _hostname;

}

@property (nonatomic,copy,readonly) NSString * hostname;              //@synthesize hostname=_hostname - In the implementation block
+(id)normalizedHostname:(id)arg1 ;
-(id)init;
-(id)initWithHostname:(id)arg1 ;
-(NSString *)hostname;
-(unsigned long long)hash;
-(id)addressString;
-(BOOL)isEqual:(id)arg1 ;
@end

