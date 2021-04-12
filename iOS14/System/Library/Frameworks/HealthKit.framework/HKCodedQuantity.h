/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKMedicalCoding, NSNumber;

@interface HKCodedQuantity : NSObject <NSSecureCoding, NSCopying> {

	NSString* _rawValue;
	HKMedicalCoding* _comparatorCoding;
	HKMedicalCoding* _unitCoding;

}

@property (nonatomic,copy,readonly) NSString * value; 
@property (nonatomic,copy,readonly) NSString * rawValue;                             //@synthesize rawValue=_rawValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedValue; 
@property (nonatomic,copy,readonly) NSNumber * numberValue; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,copy,readonly) HKMedicalCoding * comparatorCoding;              //@synthesize comparatorCoding=_comparatorCoding - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalCoding * unitCoding;                    //@synthesize unitCoding=_unitCoding - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_numberFormatter;
+(id)codedQuantityWithValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3 ;
+(id)codedQuantityWithValue:(id)arg1 unitCoding:(id)arg2 ;
-(NSNumber *)numberValue;
-(double)doubleValue;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)rawValue;
-(NSString *)localizedValue;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HKMedicalCoding *)unitCoding;
-(id)initWithRawValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3 ;
-(HKMedicalCoding *)comparatorCoding;
-(id)quantityRepresentationWithUCUMConverter:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

