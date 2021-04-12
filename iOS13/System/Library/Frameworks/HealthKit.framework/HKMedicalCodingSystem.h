/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hasDisplayStrings;
	NSString* _identifier;
	NSString* _name;
	NSString* _OID;
	unsigned long long _type;
	NSArray* _synonyms;

}

@property (nonatomic,copy) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * OID;                         //@synthesize OID=_OID - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * synonyms;                     //@synthesize synonyms=_synonyms - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayStrings;               //@synthesize hasDisplayStrings=_hasDisplayStrings - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textSystem;
+(id)unknownSystem;
+(id)externalCodeSystems;
+(id)codeSystemWithIdentifier:(id)arg1 ;
+(id)systemWithSystemDefinition:(SCD_Struct_HK2)arg1 ;
+(id)LOINCCodeSystem;
+(id)SNOMEDCodeSystem;
+(id)RxNormCodeSystem;
+(id)UCUMSystem;
+(id)CVXSystem;
+(id)NDCSystem;
+(id)ICD10System;
+(id)ICD10USSystem;
+(id)FHIRDiagnosticReportStatus;
+(id)FHIRObservationStatus;
+(id)FHIRMedicationAdminStatus;
+(id)FHIRMedicationStatementStatus;
+(id)FHIRMedicationDispenseStatus;
+(id)FHIRMedicationOrderStatus;
+(id)FHIRProcedureStatus;
+(id)FHIRAllergyIntoleranceStatus;
+(id)FHIRAllergyIntoleranceCriticality;
+(id)FHIRAllergyIntoleranceSeverity;
+(id)FHIRConditionClinicalStatus;
+(id)FHIRConditionVerificationStatus;
+(id)FHIRQuantityComparatorSystem;
+(id)adHocConceptSystem;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)OID;
-(void)setOID:(NSString *)arg1 ;
-(BOOL)hasDisplayStrings;
-(NSArray *)synonyms;
-(void)setSynonyms:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 OID:(id)arg3 type:(unsigned long long)arg4 synonyms:(id)arg5 hasDisplayStrings:(BOOL)arg6 ;
-(id)initWithCustomIdentifier:(id)arg1 ;
-(long long)codingSystemOntologyIdentifier;
-(void)setHasDisplayStrings:(BOOL)arg1 ;
@end

