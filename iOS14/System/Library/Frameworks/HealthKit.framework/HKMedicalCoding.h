/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKMedicalCodingSystem, NSString;

@interface HKMedicalCoding : NSObject <NSSecureCoding, NSCopying> {

	HKMedicalCodingSystem* _codingSystem;
	NSString* _codingVersion;
	NSString* _code;
	NSString* _displayString;

}

@property (nonatomic,copy,readonly) HKMedicalCodingSystem * codingSystem;              //@synthesize codingSystem=_codingSystem - In the implementation block
@property (nonatomic,copy,readonly) NSString * codingVersion;                          //@synthesize codingVersion=_codingVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * code;                                   //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayString;                          //@synthesize displayString=_displayString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loinc_diastolicBloodPressureCoding;
+(id)loinc_systolicBloodPressureCoding;
+(id)RxNormCodingWithCode:(id)arg1 ;
+(id)RxNormCodingWithCode:(id)arg1 displayString:(id)arg2 ;
+(id)text_codingWithDisplayString:(id)arg1 ;
+(id)medicalCodingWithSystem:(id)arg1 codingVersion:(id)arg2 code:(id)arg3 displayString:(id)arg4 ;
+(id)ucum_codingWithCode:(id)arg1 displayString:(id)arg2 ;
+(id)ucum_meterUnitCoding;
+(id)ucum_centimeterUnitCoding;
-(NSString *)displayString;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)_validateConfiguration;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)codingVersion;
-(id)synthesizedIdentifier;
-(id)description;
-(id)initWithCodingSystem:(id)arg1 codingVersion:(id)arg2 code:(id)arg3 displayString:(id)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)code;
-(HKMedicalCodingSystem *)codingSystem;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

