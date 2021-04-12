/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKSampleType, NSPredicate, _HKFilter;

@interface HKSampleQueryDescription : NSObject <NSCopying, NSSecureCoding> {

	HKSampleType* _sampleType;
	NSPredicate* _predicate;
	_HKFilter* _filter;

}

@property (getter=_filter,nonatomic,readonly) _HKFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) HKSampleType * sampleType;                 //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * predicate;                   //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allergiesDescriptionsWithPredicate:(id)arg1 ;
+(id)conditionsDescriptionsWithPredicate:(id)arg1 ;
+(id)coverageDescriptionsWithPredicate:(id)arg1 ;
+(id)immunizationsDescriptionsWithPredicate:(id)arg1 ;
+(id)labsDescriptionsWithPredicate:(id)arg1 ;
+(id)medicationsDescriptionsWithPredicate:(id)arg1 ;
+(id)proceduresDescriptionsWithPredicate:(id)arg1 ;
+(id)vitalsDescriptionsWithPredicate:(id)arg1 ;
+(id)medicalRecordDescriptionsWithPredicate:(id)arg1 futureMigrationsEnabled:(BOOL)arg2 ;
+(id)allergiesDescriptions;
+(id)conditionsDescriptions;
+(id)coverageDescriptions;
+(id)immunizationsDescriptions;
+(id)labsDescriptions;
+(id)medicationsDescriptions;
+(id)proceduresDescriptions;
+(id)vitalsDescriptions;
+(id)sampleQueryDescriptionWithSampleType:(id)arg1 ;
+(id)sampleQueryDescriptionWithSampleType:(id)arg1 predicate:(id)arg2 ;
-(NSPredicate *)predicate;
-(id)init;
-(id)_filter;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 ;
-(HKSampleType *)sampleType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

