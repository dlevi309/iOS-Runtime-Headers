/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKCodedObject.h>

@class HKMedicalCoding, NSArray, HKConcept, HKMedicalDate, HKMedicalCodingCollection, NSString;

@interface HKAllergyReaction : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {

	HKMedicalCoding* _severityCoding;
	NSArray* _manifestionCodings;
	HKConcept* _severity;
	NSArray* _manifestations;
	HKMedicalDate* _onsetDate;

}

@property (nonatomic,copy,readonly) NSArray * manifestations; 
@property (nonatomic,copy,readonly) NSArray * manifestionCodings;                                      //@synthesize manifestionCodings=_manifestionCodings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * manifestationCodingCollections; 
@property (nonatomic,copy,readonly) HKMedicalDate * onsetDate;                                         //@synthesize onsetDate=_onsetDate - In the implementation block
@property (nonatomic,copy,readonly) HKConcept * severity; 
@property (nonatomic,copy,readonly) HKMedicalCoding * severityCoding; 
@property (nonatomic,copy,readonly) HKMedicalCodingCollection * severityCodingCollection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)allergyReactionWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3 ;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
-(id)init;
-(HKMedicalDate *)onsetDate;
-(HKMedicalCodingCollection *)severityCodingCollection;
-(id)initWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3 ;
-(NSArray *)manifestationCodingCollections;
-(NSArray *)manifestionCodings;
-(NSArray *)manifestations;
-(HKMedicalCoding *)severityCoding;
-(id)manifestationCodings;
-(void)_setManifestationCodings:(id)arg1 ;
-(void)_setSeverityCoding:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(HKConcept *)severity;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

