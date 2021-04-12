/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)systemWithSystemDefinition:(SCD_Struct_HK2)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)FHIRMedicationStatementStatus;
+(id)adHocConceptSystem;
+(id)RxNormCodeSystem;
+(id)FHIRObservationStatus;
+(id)unknownSystem;
+(id)FHIRAllergyIntoleranceSeverity;
+(id)FHIRDiagnosticReportStatus;
+(id)FHIRAllergyIntoleranceStatus;
+(id)FHIRAllergyIntoleranceCriticality;
+(id)ICD10USSystem;
+(id)textSystem;
+(id)FHIRMedicationOrderStatus;
+(id)FHIRQuantityComparatorSystem;
+(id)CVXSystem;
+(id)NDCSystem;
+(id)codeSystemWithIdentifier:(id)arg1 ;
+(id)appleHealthDataTypeSystem;
+(id)LOINCCodeSystem;
+(id)FHIRDeviceStatus;
+(id)FHIRMedicationDispenseStatus;
+(id)FHIRConditionVerificationStatus;
+(id)FHIRProcedureStatus;
+(id)FHIRGoalStatus;
+(id)FHIRCoverageStatus;
+(id)UCUMSystem;
+(id)FHIRImmunizationStatus;
+(id)argonautHL7System;
+(id)FHIRConditionClinicalStatus;
+(id)FHIRMedicationAdminStatus;
+(id)FHIRCarePlanStatus;
+(id)SNOMEDCodeSystem;
+(id)FHIRMedicationDispenseStatusR4;
+(id)ICD10System;
+(id)FHIRMedicationRequestStatus;
+(id)externalCodeSystems;
+(id)FHIREventStatus;
-(NSString *)OID;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasDisplayStrings;
-(void)setType:(unsigned long long)arg1 ;
-(void)setHasDisplayStrings:(BOOL)arg1 ;
-(NSString *)name;
-(id)description;
-(NSArray *)synonyms;
-(void)setSynonyms:(NSArray *)arg1 ;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setOID:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 OID:(id)arg3 type:(unsigned long long)arg4 synonyms:(id)arg5 hasDisplayStrings:(BOOL)arg6 ;
-(NSString *)identifier;
-(id)initWithCustomIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)ontology_hasCodingSystemAttributeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

