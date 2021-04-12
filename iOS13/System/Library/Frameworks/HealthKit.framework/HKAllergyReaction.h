/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKCodedObject.h>

@class HKMedicalCoding, NSArray, HKConcept, HKMedicalDate, NSString;

@interface HKAllergyReaction : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {

	HKMedicalCoding* _severityCoding;
	NSArray* _manifestionCodings;
	HKConcept* _severity;
	NSArray* _manifestations;
	HKMedicalDate* _onsetDate;

}

@property (nonatomic,copy,readonly) NSArray * manifestations; 
@property (nonatomic,copy,readonly) NSArray * manifestionCodings;                  //@synthesize manifestionCodings=_manifestionCodings - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * onsetDate;                     //@synthesize onsetDate=_onsetDate - In the implementation block
@property (nonatomic,copy,readonly) HKConcept * severity; 
@property (nonatomic,copy,readonly) HKMedicalCoding * severityCoding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
+(id)allergyReactionWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3 ;
+(id)manifestationCodingsPreferredSystems;
+(id)severityCodingPreferredSystems;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)initWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3 ;
-(id)manifestationCodingContexts;
-(id)severityCodingContext;
-(NSArray *)manifestionCodings;
-(NSArray *)manifestations;
-(HKMedicalCoding *)severityCoding;
-(HKConcept *)severity;
-(HKMedicalDate *)onsetDate;
-(id)severityCodingCollection;
-(id)manifestationCodingsCollection;
-(id)manifestationCodings;
-(void)_setManifestationCodings:(id)arg1 ;
-(void)_setSeverityCoding:(id)arg1 ;
@end

