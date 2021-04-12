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

@class NSArray, NSString, HKMedicalDate, HKMedicalCoding, HKConcept, NSUUID, NSLocale, HKMedicationOrderType;

@interface HKMedicationOrder : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	NSArray* _medicationCodings;
	NSString* _prescriber;
	long long _numberOfFills;
	NSArray* _dosages;
	HKMedicalDate* _earliestDosageDate;
	HKMedicalDate* _writtenDate;
	HKMedicalDate* _endedDate;
	HKMedicalCoding* _statusCoding;
	NSArray* _reasonCodings;
	NSArray* _reasonEndedCodings;
	HKConcept* _medication;
	HKConcept* _status;
	HKConcept* _reason;
	HKConcept* _reasonEnded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (copy,readonly) HKMedicationOrderType * medicationOrderType; 
@property (copy,readonly) NSArray * dosages; 
@property (copy,readonly) HKMedicalDate * earliestDosageDate; 
@property (copy,readonly) HKMedicalDate * endedDate; 
@property (copy,readonly) HKConcept * medication; 
@property (copy,readonly) NSArray * medicationCodings; 
@property (readonly) long long numberOfFills; 
@property (copy,readonly) NSString * prescriber; 
@property (copy,readonly) HKConcept * reason; 
@property (copy,readonly) NSArray * reasonCodings; 
@property (copy,readonly) HKConcept * reasonEnded; 
@property (copy,readonly) NSArray * reasonEndedCodings; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
@property (copy,readonly) HKMedicalDate * writtenDate; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)_newMedicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 prescriber:(id)arg14 numberOfFills:(long long)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 writtenDate:(id)arg18 endedDate:(id)arg19 statusCoding:(id)arg20 reasonCodings:(id)arg21 reasonEndedCodings:(id)arg22 config:(/*^block*/id)arg23 ;
+(id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 prescriber:(id)arg14 numberOfFills:(long long)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 writtenDate:(id)arg18 endedDate:(id)arg19 statusCoding:(id)arg20 reasonCodings:(id)arg21 reasonEndedCodings:(id)arg22 ;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 medicationCodings:(id)arg12 prescriber:(id)arg13 numberOfFills:(long long)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 writtenDate:(id)arg17 endedDate:(id)arg18 statusCoding:(id)arg19 reasonCodings:(id)arg20 reasonEndedCodings:(id)arg21 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKConcept *)reason;
-(HKConcept *)status;
-(void)_setStatus:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(NSArray *)medicationCodings;
-(NSArray *)dosages;
-(HKMedicalDate *)earliestDosageDate;
-(HKMedicalCoding *)statusCoding;
-(HKConcept *)medication;
-(id)medicationCodingsContext;
-(id)statusCodingContext;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(id)medicationCodingsCollection;
-(id)statusCodingCollection;
-(void)_setMedicationCodings:(id)arg1 ;
-(void)_setDosages:(id)arg1 ;
-(void)_setEarliestDosageDate:(id)arg1 ;
-(void)_setStatusCoding:(id)arg1 ;
-(void)_setMedication:(id)arg1 ;
-(NSString *)prescriber;
-(long long)numberOfFills;
-(HKMedicalDate *)writtenDate;
-(HKMedicalDate *)endedDate;
-(NSArray *)reasonCodings;
-(NSArray *)reasonEndedCodings;
-(HKConcept *)reasonEnded;
-(id)reasonCodingsContext;
-(id)reasonEndedCodingsContext;
-(id)reasonCodingsCollection;
-(id)reasonEndedCodingsCollection;
-(void)_setPrescriber:(id)arg1 ;
-(void)_setNumberOfFills:(long long)arg1 ;
-(void)_setWrittenDate:(id)arg1 ;
-(void)_setEndedDate:(id)arg1 ;
-(void)_setReasonCodings:(id)arg1 ;
-(void)_setReasonEndedCodings:(id)arg1 ;
-(void)_setReason:(id)arg1 ;
-(void)_setReasonEnded:(id)arg1 ;
-(HKMedicationOrderType *)medicationOrderType;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)medicalRecordCodings;
@end

