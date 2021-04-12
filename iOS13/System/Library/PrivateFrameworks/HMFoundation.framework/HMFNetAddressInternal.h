/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMFNetAddressInternal : HMFObject {

	unsigned long long _addressFamily;
	NSString* _addressString;

}

@property (nonatomic,readonly) unsigned long long addressFamily;              //@synthesize addressFamily=_addressFamily - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressString;                 //@synthesize addressString=_addressString - In the implementation block
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(NSString *)addressString;
-(unsigned long long)addressFamily;
@end

