/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSLocale, NSString, NSArray, HKCodedQuantity, HKMedicalDate, HKMedicalCoding, HKConcept, HKMedicationDispenseRecordType;

@interface HKMedicationDispenseRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	NSArray* _medicationCodings;
	HKCodedQuantity* _quantityDispensed;
	HKMedicalDate* _preparationDate;
	HKMedicalDate* _handOverDate;
	NSArray* _dosages;
	HKMedicalDate* _earliestDosageDate;
	HKMedicalCoding* _statusCoding;
	HKCodedQuantity* _daysSupplyQuantity;
	HKConcept* _medication;
	HKConcept* _status;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (copy,readonly) HKMedicationDispenseRecordType * medicationDispenseRecordType; 
@property (copy,readonly) HKCodedQuantity * daysSupplyQuantity; 
@property (copy,readonly) NSArray * dosages; 
@property (copy,readonly) HKMedicalDate * earliestDosageDate; 
@property (copy,readonly) HKMedicalDate * handOverDate; 
@property (copy,readonly) HKConcept * medication; 
@property (copy,readonly) NSArray * medicationCodings; 
@property (copy,readonly) HKMedicalDate * preparationDate; 
@property (copy,readonly) HKCodedQuantity * quantityDispensed; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
+(BOOL)supportsSecureCoding;
+(id)_newMedicationDispenseRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 quantityDispensed:(id)arg14 preparationDate:(id)arg15 handOverDate:(id)arg16 dosages:(id)arg17 earliestDosageDate:(id)arg18 statusCoding:(id)arg19 daysSupplyQuantity:(id)arg20 config:(/*^block*/id)arg21 ;
+(id)medicationDispenseRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 quantityDispensed:(id)arg14 preparationDate:(id)arg15 handOverDate:(id)arg16 dosages:(id)arg17 earliestDosageDate:(id)arg18 statusCoding:(id)arg19 daysSupplyQuantity:(id)arg20 ;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)medicationDispenseRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 medicationCodings:(id)arg12 quantityDispensed:(id)arg13 preparationDate:(id)arg14 handOverDate:(id)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 statusCoding:(id)arg18 daysSupplyQuantity:(id)arg19 ;
+(id)defaultDisplayString;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKConcept *)status;
-(void)_setStatus:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(NSArray *)medicationCodings;
-(HKCodedQuantity *)quantityDispensed;
-(HKMedicalDate *)preparationDate;
-(HKMedicalDate *)handOverDate;
-(NSArray *)dosages;
-(HKMedicalDate *)earliestDosageDate;
-(HKMedicalCoding *)statusCoding;
-(HKCodedQuantity *)daysSupplyQuantity;
-(HKConcept *)medication;
-(id)medicationCodingsContext;
-(id)statusCodingContext;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(id)medicationCodingsCollection;
-(id)statusCodingCollection;
-(void)_setMedicationCodings:(id)arg1 ;
-(void)_setQuantityDispensed:(id)arg1 ;
-(void)_setPreparationDate:(id)arg1 ;
-(void)_setHandOverDate:(id)arg1 ;
-(void)_setDosages:(id)arg1 ;
-(void)_setEarliestDosageDate:(id)arg1 ;
-(void)_setStatusCoding:(id)arg1 ;
-(void)_setDaysSupplyQuantity:(id)arg1 ;
-(void)_setMedication:(id)arg1 ;
-(HKMedicationDispenseRecordType *)medicationDispenseRecordType;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)medicalRecordCodings;
@end

