/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKSource, NSString;

@interface HKSourceRevision : NSObject <NSSecureCoding, NSCopying> {

	HKSource* _source;
	NSString* _version;
	NSString* _productType;
	SCD_Struct_HK3 _operatingSystemVersion;

}

@property (readonly) HKSource * source;                                  //@synthesize source=_source - In the implementation block
@property (readonly) NSString * version;                                 //@synthesize version=_version - In the implementation block
@property (copy,readonly) NSString * productType;                        //@synthesize productType=_productType - In the implementation block
@property (readonly) SCD_Struct_HK3 operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_initWithSource:(id)arg1 ;
-(id)init;
-(SCD_Struct_HK3)operatingSystemVersion;
-(NSString *)productType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithSource:(id)arg1 version:(id)arg2 ;
-(id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(SCD_Struct_HK3)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_setVersion:(id)arg1 ;
-(id)_init;
-(void)_setSource:(id)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HKSource *)source;
@end

