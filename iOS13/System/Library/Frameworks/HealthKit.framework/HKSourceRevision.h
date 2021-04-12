/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(HKSource *)source;
-(NSString *)version;
-(SCD_Struct_HK3)operatingSystemVersion;
-(NSString *)productType;
-(void)_setSource:(id)arg1 ;
-(void)_setVersion:(id)arg1 ;
-(id)_initWithSource:(id)arg1 ;
-(id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(SCD_Struct_HK3)arg4 ;
-(id)initWithSource:(id)arg1 version:(id)arg2 ;
@end

