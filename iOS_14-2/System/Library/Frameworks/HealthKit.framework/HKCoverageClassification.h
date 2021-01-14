/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKCodedObject.h>

@class NSArray, NSString, HKConcept, HKMedicalCodingCollection;

@interface HKCoverageClassification : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {

	NSArray* _typeCodings;
	NSString* _value;
	NSString* _name;
	HKConcept* _type;

}

@property (nonatomic,copy,readonly) NSString * value;                                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) HKConcept * type; 
@property (nonatomic,copy,readonly) NSArray * typeCodings;                                         //@synthesize typeCodings=_typeCodings - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalCodingCollection * typeCodingCollection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)coverageClassificationWithTypeCodings:(id)arg1 value:(id)arg2 name:(id)arg3 ;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)typeCodings;
-(void)_setTypeCodings:(id)arg1 ;
-(id)initWithTypeCodings:(id)arg1 value:(id)arg2 name:(id)arg3 ;
-(HKMedicalCodingCollection *)typeCodingCollection;
-(NSString *)name;
-(NSString *)description;
-(HKConcept *)type;
-(void)_setType:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

