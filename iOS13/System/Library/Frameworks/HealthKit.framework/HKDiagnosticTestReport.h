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

@class NSArray, NSString, HKMedicalDate, HKMedicalCoding, HKConcept, NSUUID, NSLocale, HKDiagnosticTestReportType;

@interface HKDiagnosticTestReport : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	NSArray* _diagnosticTestCodings;
	NSString* _panelName;
	NSArray* _results;
	HKMedicalDate* _effectiveStartDate;
	HKMedicalCoding* _statusCoding;
	HKMedicalDate* _effectiveEndDate;
	HKMedicalDate* _issueDate;
	HKConcept* _diagnosticTest;
	HKConcept* _status;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (copy,readonly) HKDiagnosticTestReportType * diagnosticTestReportType; 
@property (copy,readonly) HKConcept * diagnosticTest; 
@property (copy,readonly) NSArray * diagnosticTestCodings; 
@property (copy,readonly) HKMedicalDate * effectiveEndDate; 
@property (copy,readonly) HKMedicalDate * effectiveStartDate; 
@property (copy,readonly) HKMedicalDate * issueDate; 
@property (copy,readonly) NSString * panelName; 
@property (copy,readonly) NSArray * results; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodings:(id)arg13 panelName:(id)arg14 results:(id)arg15 effectiveStartDate:(id)arg16 statusCoding:(id)arg17 effectiveEndDate:(id)arg18 issueDate:(id)arg19 ;
+(id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 diagnosticTestCodings:(id)arg12 panelName:(id)arg13 results:(id)arg14 effectiveStartDate:(id)arg15 statusCoding:(id)arg16 effectiveEndDate:(id)arg17 issueDate:(id)arg18 ;
+(id)defaultDisplayString;
+(id)_newDiagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodings:(id)arg13 panelName:(id)arg14 results:(id)arg15 effectiveStartDate:(id)arg16 statusCoding:(id)arg17 effectiveEndDate:(id)arg18 issueDate:(id)arg19 config:(/*^block*/id)arg20 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)results;
-(HKConcept *)status;
-(void)_setStatus:(id)arg1 ;
-(void)_setResults:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(HKMedicalCoding *)statusCoding;
-(id)statusCodingContext;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(id)statusCodingCollection;
-(void)_setStatusCoding:(id)arg1 ;
-(NSArray *)diagnosticTestCodings;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(void)_setDiagnosticTest:(id)arg1 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)medicalRecordCodings;
-(HKDiagnosticTestReportType *)diagnosticTestReportType;
-(HKMedicalDate *)effectiveStartDate;
-(HKMedicalDate *)issueDate;
-(HKMedicalDate *)effectiveEndDate;
-(HKConcept *)diagnosticTest;
-(id)diagnosticTestCodingsContext;
-(id)diagnosticTestCodingsCollection;
-(void)_setDiagnosticTestCodings:(id)arg1 ;
-(void)_setEffectiveStartDate:(id)arg1 ;
-(void)_setIssueDate:(id)arg1 ;
-(void)_setEffectiveEndDate:(id)arg1 ;
-(NSString *)panelName;
-(void)_setPanelName:(id)arg1 ;
@end

