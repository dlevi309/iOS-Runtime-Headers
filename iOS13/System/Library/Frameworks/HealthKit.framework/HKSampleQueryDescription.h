/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKSampleType, NSPredicate;

@interface HKSampleQueryDescription : NSObject <NSCopying, NSSecureCoding> {

	HKSampleType* _sampleType;
	NSPredicate* _predicate;

}

@property (nonatomic,copy,readonly) HKSampleType * sampleType;              //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sampleQueryDescriptionWithSampleType:(id)arg1 ;
+(id)sampleQueryDescriptionWithSampleType:(id)arg1 predicate:(id)arg2 ;
+(id)medicalRecordDescriptionsWithPredicate:(id)arg1 ;
+(id)allergiesDescriptionsWithPredicate:(id)arg1 ;
+(id)conditionsDescriptionsWithPredicate:(id)arg1 ;
+(id)immunizationsDescriptionsWithPredicate:(id)arg1 ;
+(id)labsDescriptionsWithPredicate:(id)arg1 ;
+(id)medicationsDescriptionsWithPredicate:(id)arg1 ;
+(id)proceduresDescriptionsWithPredicate:(id)arg1 ;
+(id)vitalsDescriptionsWithPredicate:(id)arg1 ;
+(id)medicalRecordDescriptions;
+(id)allergiesDescriptions;
+(id)conditionsDescriptions;
+(id)immunizationsDescriptions;
+(id)labsDescriptions;
+(id)medicationsDescriptions;
+(id)proceduresDescriptions;
+(id)vitalsDescriptions;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(HKSampleType *)sampleType;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 ;
@end

