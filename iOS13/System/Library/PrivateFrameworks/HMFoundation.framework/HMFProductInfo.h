/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFSoftwareVersion;

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding> {

	long long _productPlatform;
	long long _productClass;
	long long _productVariant;
	HMFSoftwareVersion* _softwareVersion;

}

@property (readonly) long long productPlatform;                                   //@synthesize productPlatform=_productPlatform - In the implementation block
@property (readonly) long long productClass;                                      //@synthesize productClass=_productClass - In the implementation block
@property (readonly) long long productVariant;                                    //@synthesize productVariant=_productVariant - In the implementation block
@property (nonatomic,readonly) HMFSoftwareVersion * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)productInfo;
+(id)decodeSoftwareVersionWithCoder:(id)arg1 ;
+(void)encodeSoftwareVersion:(id)arg1 withCoder:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(long long)productClass;
-(long long)productVariant;
-(HMFSoftwareVersion *)softwareVersion;
-(long long)productPlatform;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithPlatform:(long long)arg1 class:(long long)arg2 variant:(long long)arg3 softwareVersion:(id)arg4 ;
-(id)initWithPlatform:(long long)arg1 class:(long long)arg2 softwareVersion:(id)arg3 ;
@end

