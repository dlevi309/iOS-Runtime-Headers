/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, HKConceptIdentifier, NSString, NSSet, NSArray, HKConceptAttribute, HKMedicalCoding;

@interface HKConcept : NSObject <NSSecureCoding> {

	NSMutableArray* _relationships;
	NSMutableArray* _attributes;
	BOOL _relationshipsAreLoaded;
	BOOL _isUndefined;
	HKConceptIdentifier* _identifier;
	NSString* _nodeName;

}

@property (assign,nonatomic) BOOL relationshipsAreLoaded;                           //@synthesize relationshipsAreLoaded=_relationshipsAreLoaded - In the implementation block
@property (nonatomic,copy) NSString * nodeName;                                     //@synthesize nodeName=_nodeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredName; 
@property (nonatomic,copy,readonly) NSString * localizedPreferredName; 
@property (nonatomic,copy,readonly) HKConceptIdentifier * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * validInRegions; 
@property (nonatomic,copy,readonly) HKConcept * groupByConcept; 
@property (nonatomic,copy,readonly) HKConcept * chartedWithConcept; 
@property (nonatomic,copy,readonly) NSArray * attributes; 
@property (nonatomic,copy,readonly) NSArray * relationships; 
@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) BOOL isUndefined;                                    //@synthesize isUndefined=_isUndefined - In the implementation block
@property (nonatomic,readonly) BOOL isAdHoc; 
@property (nonatomic,readonly) BOOL isNebulous; 
@property (nonatomic,readonly) BOOL chartsBloodPressure; 
@property (nonatomic,readonly) BOOL hidesOutOfRangeFilter; 
@property (nonatomic,copy,readonly) HKConceptAttribute * adHocCode; 
@property (nonatomic,copy,readonly) HKMedicalCoding * LOINCCode; 
+(BOOL)supportsSecureCoding;
+(id)preferredLanguages;
+(id)fallbackLanguagesForLocale:(id)arg1 ;
+(id)_buildCategoryIdentifierWithCode:(unsigned long long)arg1 ;
+(id)allergyCategoryIdentifier;
+(id)conditionCategoryIdentifier;
+(id)labCategoryIdentifier;
+(id)medicationCategoryIdentifier;
+(id)procedureCategoryIdentifier;
+(id)vaccinationCategoryIdentifier;
+(id)vitalCategoryIdentifier;
+(id)unknownCategoryIdentifier;
+(id)_conceptWithIdentifier:(id)arg1 attributes:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(HKConceptIdentifier *)identifier;
-(NSArray *)attributes;
-(long long)version;
-(BOOL)isUndefined;
-(NSString *)preferredName;
-(NSArray *)relationships;
-(void)addAttribute:(id)arg1 ;
-(NSString *)nodeName;
-(void)setNodeName:(NSString *)arg1 ;
-(HKConceptAttribute *)adHocCode;
-(id)_firstConceptOfRelationshipType:(id)arg1 ;
-(id)firstAttributeForName:(id)arg1 ;
-(HKConcept *)groupByConcept;
-(HKConcept *)chartedWithConcept;
-(NSSet *)validInRegions;
-(NSString *)localizedPreferredName;
-(id)attributesForName:(id)arg1 ;
-(BOOL)isAdHoc;
-(BOOL)isNebulous;
-(BOOL)chartsBloodPressure;
-(BOOL)hidesOutOfRangeFilter;
-(HKMedicalCoding *)LOINCCode;
-(void)addRelationships:(id)arg1 ;
-(BOOL)relationshipsAreLoaded;
-(void)setRelationshipsAreLoaded:(BOOL)arg1 ;
@end

