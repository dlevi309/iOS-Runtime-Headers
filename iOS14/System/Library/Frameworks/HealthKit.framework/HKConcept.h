/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSMutableArray, HKConceptIdentifier, NSString, NSSet, HKConceptAttribute, HKMedicalCoding;

@interface HKConcept : NSObject <NSSecureCoding> {

	NSArray* _relationships;
	NSMutableArray* _attributes;
	BOOL _relationshipsAreLoaded;
	BOOL _isUndefined;
	HKConceptIdentifier* _identifier;
	NSString* _nodeName;

}

@property (nonatomic,copy) NSString * nodeName;                                     //@synthesize nodeName=_nodeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredName; 
@property (nonatomic,copy,readonly) NSString * localizedPreferredName; 
@property (nonatomic,copy,readonly) HKConceptIdentifier * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * validInRegions; 
@property (nonatomic,copy,readonly) NSArray * attributes; 
@property (nonatomic,copy,readonly) NSArray * relationships; 
@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) BOOL relationshipsAreLoaded;                         //@synthesize relationshipsAreLoaded=_relationshipsAreLoaded - In the implementation block
@property (nonatomic,readonly) BOOL isUndefined;                                    //@synthesize isUndefined=_isUndefined - In the implementation block
@property (nonatomic,readonly) BOOL isAdHoc; 
@property (nonatomic,readonly) BOOL isNebulous; 
@property (nonatomic,readonly) BOOL chartsBloodPressure; 
@property (nonatomic,readonly) BOOL hidesOutOfRangeFilter; 
@property (nonatomic,copy,readonly) NSArray * synonyms; 
@property (nonatomic,copy,readonly) HKConceptAttribute * adHocCode; 
@property (nonatomic,copy,readonly) HKMedicalCoding * LOINCCode; 
@property (nonatomic,copy,readonly) HKMedicalCoding * RxNormCoding; 
@property (nonatomic,copy,readonly) HKConcept * groupByConcept; 
@property (nonatomic,copy,readonly) HKConcept * chartedWithConcept; 
@property (nonatomic,copy,readonly) HKConcept * strength; 
@property (nonatomic,copy,readonly) HKConcept * form; 
@property (nonatomic,copy,readonly) NSArray * modifiers; 
@property (nonatomic,copy,readonly) NSArray * brandNames; 
+(BOOL)supportsSecureCoding;
+(id)preferredLanguages;
+(id)fallbackLanguagesForLocale:(id)arg1 ;
+(id)conceptWithIdentifier:(id)arg1 attributes:(id)arg2 relationships:(id)arg3 ;
+(id)_conceptWithIdentifier:(id)arg1 attributes:(id)arg2 ;
-(HKConcept *)strength;
-(BOOL)isUndefined;
-(HKConcept *)form;
-(id)init;
-(NSArray *)relationships;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isAdHoc;
-(NSString *)preferredName;
-(NSString *)nodeName;
-(NSArray *)attributes;
-(id)description;
-(NSArray *)synonyms;
-(void)addAttribute:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)modifiers;
-(HKConceptAttribute *)adHocCode;
-(HKMedicalCoding *)LOINCCode;
-(HKConceptIdentifier *)identifier;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isNebulous;
-(NSArray *)brandNames;
-(id)firstAttributeForType:(long long)arg1 ;
-(id)stringsForAttributeType:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 attributes:(id)arg2 relationships:(id)arg3 relationshipsAreLoaded:(BOOL)arg4 ;
-(id)_firstConceptOfRelationshipType:(long long)arg1 ;
-(void)enumerateAttributesWithType:(long long)arg1 block:(/*^block*/id)arg2 ;
-(HKConcept *)groupByConcept;
-(id)_conceptsOfRelationshipType:(long long)arg1 ;
-(HKConcept *)chartedWithConcept;
-(HKMedicalCoding *)RxNormCoding;
-(NSSet *)validInRegions;
-(NSString *)localizedPreferredName;
-(id)attributesForType:(long long)arg1 ;
-(void)setRelationships:(NSArray *)arg1 ;
-(BOOL)chartsBloodPressure;
-(BOOL)hidesOutOfRangeFilter;
-(BOOL)relationshipsAreLoaded;
-(void)setNodeName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

