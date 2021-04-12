/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)decodeSoftwareVersionWithCoder:(id)arg1 ;
+(void)encodeSoftwareVersion:(id)arg1 withCoder:(id)arg2 ;
+(id)productInfo;
-(id)init;
-(long long)productClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)debugDescription;
-(HMFSoftwareVersion *)softwareVersion;
-(long long)productVariant;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithPlatform:(long long)arg1 class:(long long)arg2 variant:(long long)arg3 softwareVersion:(id)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPlatform:(long long)arg1 class:(long long)arg2 softwareVersion:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)productPlatform;
@end

