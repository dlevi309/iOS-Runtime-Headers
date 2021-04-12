/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithHostname:(id)arg1 ;
-(NSString *)hostname;
-(id)addressString;
@end

