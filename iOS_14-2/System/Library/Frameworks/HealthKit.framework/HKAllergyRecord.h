/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HKMedicalDate, NSString, HKMedicalCoding, HKConcept, NSUUID, NSLocale, HKAllergyRecordType;

@interface HKAllergyRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	NSArray* _allergyCodings;
	HKMedicalDate* _onsetDate;
	NSString* _asserter;
	NSArray* _reactions;
	HKMedicalCoding* _criticalityCoding;
	HKMedicalDate* _lastOccurenceDate;
	HKMedicalDate* _recordedDate;
	HKMedicalCoding* _statusCoding;
	HKConcept* _allergy;
	HKConcept* _criticality;
	HKConcept* _status;

}

@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) HKAllergyRecordType * allergyRecordType; 
@property (copy,readonly) HKConcept * allergy; 
@property (copy,readonly) NSArray * allergyCodings; 
@property (copy,readonly) NSString * asserter; 
@property (copy,readonly) HKConcept * criticality; 
@property (copy,readonly) HKMedicalCoding * criticalityCoding; 
@property (copy,readonly) HKMedicalDate * lastOccurenceDate; 
@property (copy,readonly) HKMedicalDate * onsetDate; 
@property (copy,readonly) NSArray * reactions; 
@property (copy,readonly) HKMedicalDate * recordedDate; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
+(BOOL)supportsSecureCoding;
+(id)allergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 allergyCodings:(id)arg12 onsetDate:(id)arg13 asserter:(id)arg14 reactions:(id)arg15 criticalityCoding:(id)arg16 lastOccurenceDate:(id)arg17 recordedDate:(id)arg18 statusCoding:(id)arg19 ;
+(id)allergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 allergyCodings:(id)arg13 onsetDate:(id)arg14 asserter:(id)arg15 reactions:(id)arg16 criticalityCoding:(id)arg17 lastOccurenceDate:(id)arg18 recordedDate:(id)arg19 statusCoding:(id)arg20 ;
+(id)_newAllergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 allergyCodings:(id)arg13 onsetDate:(id)arg14 asserter:(id)arg15 reactions:(id)arg16 criticalityCoding:(id)arg17 lastOccurenceDate:(id)arg18 recordedDate:(id)arg19 statusCoding:(id)arg20 config:(/*^block*/id)arg21 ;
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
-(BOOL)isEquivalent:(id)arg1 ;
-(HKConcept *)allergy;
-(id)init;
-(HKMedicalDate *)onsetDate;
-(NSArray *)reactions;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)asserter;
-(HKMedicalCoding *)criticalityCoding;
-(void)_setAllergy:(id)arg1 ;
-(void)_setCriticality:(id)arg1 ;
-(HKMedicalDate *)recordedDate;
-(void)_setRecordedDate:(id)arg1 ;
-(NSString *)description;
-(HKConcept *)criticality;
-(HKMedicalDate *)lastOccurenceDate;
-(id)allergyCodingsCollection;
-(id)criticalityCodingCollection;
-(void)_setAllergyCodings:(id)arg1 ;
-(void)_setOnsetDate:(id)arg1 ;
-(void)_setReactions:(id)arg1 ;
-(void)_setCriticalityCoding:(id)arg1 ;
-(void)_setLastOccurenceDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(HKMedicalCoding *)statusCoding;
-(id)statusCodingCollection;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setStatusCoding:(id)arg1 ;
-(void)_setStatus:(id)arg1 ;
-(id)medicalRecordCodings;
-(NSArray *)allergyCodings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKAllergyRecordType *)allergyRecordType;
-(void)_setAsserter:(id)arg1 ;
-(HKConcept *)status;
@end

