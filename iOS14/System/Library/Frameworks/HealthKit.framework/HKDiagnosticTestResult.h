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

@class NSArray, HKInspectableValueCollection, HKMedicalDate, NSString, HKMedicalCoding, HKConcept, NSUUID, NSLocale, HKDiagnosticTestResultType;

@interface HKDiagnosticTestResult : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	NSArray* _diagnosticTestCodings;
	HKInspectableValueCollection* _value;
	NSArray* _referenceRanges;
	HKMedicalDate* _effectiveStartDate;
	NSString* _category;
	HKMedicalDate* _issueDate;
	HKMedicalDate* _effectiveEndDate;
	HKMedicalCoding* _statusCoding;
	NSArray* _interpretationCodings;
	NSString* _comments;
	NSArray* _bodySiteCodings;
	NSArray* _methodCodings;
	NSArray* _performers;
	HKConcept* _diagnosticTest;
	HKConcept* _status;
	HKConcept* _interpretation;
	HKConcept* _bodySite;
	HKConcept* _method;

}

@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) HKDiagnosticTestResultType * diagnosticTestResultType; 
@property (copy,readonly) HKConcept * bodySite; 
@property (copy,readonly) NSArray * bodySiteCodings; 
@property (copy,readonly) NSString * category; 
@property (copy,readonly) NSString * comments; 
@property (copy,readonly) HKConcept * diagnosticTest; 
@property (copy,readonly) NSArray * diagnosticTestCodings; 
@property (copy,readonly) HKMedicalDate * effectiveEndDate; 
@property (copy,readonly) HKMedicalDate * effectiveStartDate; 
@property (copy,readonly) HKConcept * interpretation; 
@property (copy,readonly) NSArray * interpretationCodings; 
@property (copy,readonly) HKMedicalDate * issueDate; 
@property (copy,readonly) HKConcept * method; 
@property (copy,readonly) NSArray * methodCodings; 
@property (copy,readonly) NSArray * performers; 
@property (copy,readonly) NSArray * referenceRanges; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
@property (copy,readonly) HKInspectableValueCollection * value; 
+(BOOL)supportsSecureCoding;
+(id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 diagnosticTestCodings:(id)arg12 value:(id)arg13 referenceRanges:(id)arg14 effectiveStartDate:(id)arg15 category:(id)arg16 issueDate:(id)arg17 effectiveEndDate:(id)arg18 statusCoding:(id)arg19 interpretationCodings:(id)arg20 comments:(id)arg21 bodySiteCodings:(id)arg22 methodCodings:(id)arg23 performers:(id)arg24 ;
+(id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodings:(id)arg13 value:(id)arg14 referenceRanges:(id)arg15 effectiveStartDate:(id)arg16 category:(id)arg17 issueDate:(id)arg18 effectiveEndDate:(id)arg19 statusCoding:(id)arg20 interpretationCodings:(id)arg21 comments:(id)arg22 bodySiteCodings:(id)arg23 methodCodings:(id)arg24 performers:(id)arg25 ;
+(id)_newDiagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodings:(id)arg13 value:(id)arg14 referenceRanges:(id)arg15 effectiveStartDate:(id)arg16 category:(id)arg17 issueDate:(id)arg18 effectiveEndDate:(id)arg19 statusCoding:(id)arg20 interpretationCodings:(id)arg21 comments:(id)arg22 bodySiteCodings:(id)arg23 methodCodings:(id)arg24 performers:(id)arg25 config:(/*^block*/id)arg26 ;
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(NSArray *)bodySiteCodings;
-(void)_setBodySite:(id)arg1 ;
-(HKConcept *)method;
-(NSString *)comments;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)category;
-(HKConcept *)bodySite;
-(HKDiagnosticTestResultType *)diagnosticTestResultType;
-(NSString *)description;
-(HKMedicalDate *)issueDate;
-(id)initWithCoder:(id)arg1 ;
-(HKMedicalDate *)effectiveStartDate;
-(HKMedicalDate *)effectiveEndDate;
-(NSArray *)interpretationCodings;
-(NSArray *)methodCodings;
-(HKConcept *)diagnosticTest;
-(HKConcept *)interpretation;
-(id)diagnosticTestCodingsCollection;
-(void)_setMethod:(id)arg1 ;
-(id)interpretationCodingsCollection;
-(id)bodySiteCodingsCollection;
-(id)methodCodingsCollection;
-(void)_setDiagnosticTestCodings:(id)arg1 ;
-(void)_setReferenceRanges:(id)arg1 ;
-(void)_setEffectiveStartDate:(id)arg1 ;
-(void)_setIssueDate:(id)arg1 ;
-(void)_setEffectiveEndDate:(id)arg1 ;
-(void)_setInterpretationCodings:(id)arg1 ;
-(void)_setComments:(id)arg1 ;
-(void)_setBodySiteCodings:(id)arg1 ;
-(void)_setMethodCodings:(id)arg1 ;
-(void)_setPerformers:(id)arg1 ;
-(void)_setInterpretation:(id)arg1 ;
-(NSArray *)referenceRanges;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(HKMedicalCoding *)statusCoding;
-(id)statusCodingCollection;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setStatusCoding:(id)arg1 ;
-(void)_setDiagnosticTest:(id)arg1 ;
-(void)_setStatus:(id)arg1 ;
-(id)medicalRecordCodings;
-(NSArray *)diagnosticTestCodings;
-(void)_setCategory:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setValue:(id)arg1 ;
-(HKInspectableValueCollection *)value;
-(HKConcept *)status;
-(NSArray *)performers;
@end

