/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, HKMedicalDate, HKMedicalCoding, HKConcept, NSUUID, NSLocale, HKMedicationRecordType;

@interface HKMedicationRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	NSArray* _medicationCodings;
	long long _assertionType;
	NSString* _asserter;
	HKMedicalDate* _assertionDate;
	HKMedicalCoding* _statusCoding;
	NSArray* _dosages;
	HKMedicalDate* _earliestDosageDate;
	NSArray* _reasonForUseCodings;
	BOOL _notTaken;
	NSArray* _reasonsNotTakenCodings;
	HKMedicalDate* _effectiveStartDate;
	HKMedicalDate* _effectiveEndDate;
	HKConcept* _medication;
	HKConcept* _status;
	HKConcept* _reasonForUse;
	NSArray* _reasonsNotTaken;

}

@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) HKMedicationRecordType * medicationRecordType; 
@property (copy,readonly) NSString * asserter; 
@property (copy,readonly) HKMedicalDate * assertionDate; 
@property (readonly) long long assertionType; 
@property (copy,readonly) NSArray * dosages; 
@property (copy,readonly) HKMedicalDate * earliestDosageDate; 
@property (copy,readonly) HKMedicalDate * effectiveEndDate; 
@property (copy,readonly) HKMedicalDate * effectiveStartDate; 
@property (copy,readonly) HKConcept * medication; 
@property (copy,readonly) NSArray * medicationCodings; 
@property (readonly) BOOL notTaken; 
@property (copy,readonly) HKConcept * reasonForUse; 
@property (copy,readonly) NSArray * reasonForUseCodings; 
@property (copy,readonly) NSArray * reasonsNotTaken; 
@property (copy,readonly) NSArray * reasonsNotTakenCodings; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
+(BOOL)supportsSecureCoding;
+(id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 medicationCodings:(id)arg12 assertionType:(long long)arg13 asserter:(id)arg14 assertionDate:(id)arg15 statusCoding:(id)arg16 dosages:(id)arg17 earliestDosageDate:(id)arg18 reasonForUseCodings:(id)arg19 notTaken:(BOOL)arg20 reasonsNotTakenCodings:(id)arg21 effectiveStartDate:(id)arg22 effectiveEndDate:(id)arg23 ;
+(id)_newMedicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 assertionType:(long long)arg14 asserter:(id)arg15 assertionDate:(id)arg16 statusCoding:(id)arg17 dosages:(id)arg18 earliestDosageDate:(id)arg19 reasonForUseCodings:(id)arg20 notTaken:(BOOL)arg21 reasonsNotTakenCodings:(id)arg22 effectiveStartDate:(id)arg23 effectiveEndDate:(id)arg24 config:(/*^block*/id)arg25 ;
+(id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 assertionType:(long long)arg14 asserter:(id)arg15 assertionDate:(id)arg16 statusCoding:(id)arg17 dosages:(id)arg18 earliestDosageDate:(id)arg19 reasonForUseCodings:(id)arg20 notTaken:(BOOL)arg21 reasonsNotTakenCodings:(id)arg22 effectiveStartDate:(id)arg23 effectiveEndDate:(id)arg24 ;
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)dosages;
-(NSString *)asserter;
-(BOOL)notTaken;
-(NSString *)description;
-(long long)assertionType;
-(HKMedicationRecordType *)medicationRecordType;
-(id)initWithCoder:(id)arg1 ;
-(HKMedicalDate *)effectiveStartDate;
-(HKMedicalDate *)effectiveEndDate;
-(void)_setEffectiveStartDate:(id)arg1 ;
-(void)_setEffectiveEndDate:(id)arg1 ;
-(HKConcept *)medication;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(NSArray *)medicationCodings;
-(HKMedicalDate *)earliestDosageDate;
-(HKMedicalCoding *)statusCoding;
-(id)medicationCodingsCollection;
-(id)statusCodingCollection;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setMedicationCodings:(id)arg1 ;
-(void)_setDosages:(id)arg1 ;
-(void)_setEarliestDosageDate:(id)arg1 ;
-(void)_setStatusCoding:(id)arg1 ;
-(void)_setMedication:(id)arg1 ;
-(void)_setStatus:(id)arg1 ;
-(id)medicalRecordCodings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKMedicalDate *)assertionDate;
-(NSArray *)reasonForUseCodings;
-(HKConcept *)reasonForUse;
-(NSArray *)reasonsNotTakenCodings;
-(NSArray *)reasonsNotTaken;
-(id)reasonForUseCodingsCollection;
-(id)reasonsNotTakenCodingsCollections;
-(void)_setAssertionType:(long long)arg1 ;
-(void)_setAsserter:(id)arg1 ;
-(void)_setAssertionDate:(id)arg1 ;
-(void)_setReasonForUseCodings:(id)arg1 ;
-(void)_setNotTaken:(BOOL)arg1 ;
-(void)_setReasonForUse:(id)arg1 ;
-(void)_setReasonsNotTakenCodings:(id)arg1 ;
-(void)_setReasonsNotTaken:(id)arg1 ;
-(HKConcept *)status;
@end

