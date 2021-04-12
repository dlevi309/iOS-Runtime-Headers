/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, HKInspectableValue, HKMedicalDate, HKMedicalCoding, HKConcept, NSUUID, NSLocale, HKConditionRecordType;

@interface HKConditionRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	NSArray* _conditionCodings;
	NSArray* _categoryCodings;
	NSString* _asserter;
	HKInspectableValue* _abatement;
	HKInspectableValue* _onset;
	HKMedicalDate* _recordedDate;
	HKMedicalCoding* _clinicalStatusCoding;
	HKMedicalCoding* _verificationStatusCoding;
	NSArray* _severityCodings;
	NSArray* _bodySitesCodings;
	HKConcept* _condition;
	HKConcept* _category;
	HKConcept* _clinicalStatus;
	HKConcept* _verificationStatus;
	HKConcept* _severity;
	NSArray* _bodySites;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (copy,readonly) HKConditionRecordType * conditionRecordType; 
@property (copy,readonly) HKInspectableValue * abatement; 
@property (copy,readonly) NSString * asserter; 
@property (copy,readonly) NSArray * bodySites; 
@property (copy,readonly) NSArray * bodySitesCodings; 
@property (copy,readonly) HKConcept * category; 
@property (copy,readonly) NSArray * categoryCodings; 
@property (copy,readonly) HKConcept * clinicalStatus; 
@property (copy,readonly) HKMedicalCoding * clinicalStatusCoding; 
@property (copy,readonly) HKConcept * condition; 
@property (copy,readonly) NSArray * conditionCodings; 
@property (copy,readonly) HKInspectableValue * onset; 
@property (copy,readonly) HKMedicalDate * recordedDate; 
@property (copy,readonly) HKConcept * severity; 
@property (copy,readonly) NSArray * severityCodings; 
@property (copy,readonly) HKConcept * verificationStatus; 
@property (copy,readonly) HKMedicalCoding * verificationStatusCoding; 
+(BOOL)supportsSecureCoding;
+(id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 conditionCodings:(id)arg13 categoryCodings:(id)arg14 asserter:(id)arg15 abatement:(id)arg16 onset:(id)arg17 recordedDate:(id)arg18 clinicalStatusCoding:(id)arg19 verificationStatusCoding:(id)arg20 severityCodings:(id)arg21 bodySitesCodings:(id)arg22 ;
+(id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 conditionCodings:(id)arg12 categoryCodings:(id)arg13 asserter:(id)arg14 abatement:(id)arg15 onset:(id)arg16 recordedDate:(id)arg17 clinicalStatusCoding:(id)arg18 verificationStatusCoding:(id)arg19 severityCodings:(id)arg20 bodySitesCodings:(id)arg21 ;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)_newConditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 conditionCodings:(id)arg13 categoryCodings:(id)arg14 asserter:(id)arg15 abatement:(id)arg16 onset:(id)arg17 recordedDate:(id)arg18 clinicalStatusCoding:(id)arg19 verificationStatusCoding:(id)arg20 severityCodings:(id)arg21 bodySitesCodings:(id)arg22 config:(/*^block*/id)arg23 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKConcept *)category;
-(HKConcept *)condition;
-(void)_setCategory:(id)arg1 ;
-(HKConcept *)verificationStatus;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)medicalRecordCodings;
-(NSArray *)conditionCodings;
-(NSArray *)categoryCodings;
-(HKMedicalCoding *)clinicalStatusCoding;
-(HKMedicalCoding *)verificationStatusCoding;
-(NSArray *)severityCodings;
-(NSArray *)bodySitesCodings;
-(void)_setCondition:(id)arg1 ;
-(void)_setClinicalStatus:(id)arg1 ;
-(void)_setVerificationStatus:(id)arg1 ;
-(void)_setSeverity:(id)arg1 ;
-(void)_setBodySites:(id)arg1 ;
-(HKConditionRecordType *)conditionRecordType;
-(NSString *)asserter;
-(void)_setAsserter:(id)arg1 ;
-(HKConcept *)severity;
-(HKInspectableValue *)abatement;
-(HKInspectableValue *)onset;
-(HKMedicalDate *)recordedDate;
-(HKConcept *)clinicalStatus;
-(NSArray *)bodySites;
-(id)conditionCodingsContext;
-(id)categoryCodingsContext;
-(id)clinicalStatusCodingContext;
-(id)verificationStatusCodingContext;
-(id)severityCodingsContext;
-(id)bodySitesCodingsContexts;
-(id)conditionCodingsCollection;
-(id)categoryCodingsCollection;
-(id)clinicalStatusCodingCollection;
-(id)verificationStatusCodingCollection;
-(id)severityCodingsCollection;
-(id)bodySitesCodingsCollection;
-(void)_setConditionCodings:(id)arg1 ;
-(void)_setCategoryCodings:(id)arg1 ;
-(void)_setAbatement:(id)arg1 ;
-(void)_setOnset:(id)arg1 ;
-(void)_setRecordedDate:(id)arg1 ;
-(void)_setClinicalStatusCoding:(id)arg1 ;
-(void)_setVerificationStatusCoding:(id)arg1 ;
-(void)_setSeverityCodings:(id)arg1 ;
-(void)_setBodySitesCodings:(id)arg1 ;
@end

