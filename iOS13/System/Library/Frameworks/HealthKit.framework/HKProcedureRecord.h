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

@class NSArray, HKMedicalDate, HKMedicalCoding, HKConcept, NSString, NSUUID, NSLocale, HKProcedureRecordType;

@interface HKProcedureRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	NSArray* _procedureCodings;
	NSArray* _performers;
	HKMedicalDate* _executionStartDate;
	HKMedicalDate* _executionEndDate;
	BOOL _notPerformed;
	HKMedicalCoding* _statusCoding;
	NSArray* _categoryCodings;
	NSArray* _reasonCodings;
	NSArray* _reasonsNotPerformedCodings;
	NSArray* _outcomeCodings;
	NSArray* _complicationsCodings;
	NSArray* _followUpsCodings;
	NSArray* _bodySitesCodings;
	HKConcept* _procedure;
	HKConcept* _status;
	HKConcept* _category;
	HKConcept* _reason;
	NSArray* _reasonsNotPerformed;
	HKConcept* _outcome;
	NSArray* _complications;
	NSArray* _followUps;
	NSArray* _bodySites;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (copy,readonly) HKProcedureRecordType * procedureRecordType; 
@property (copy,readonly) NSArray * bodySites; 
@property (copy,readonly) NSArray * bodySitesCodings; 
@property (copy,readonly) HKConcept * category; 
@property (copy,readonly) NSArray * categoryCodings; 
@property (copy,readonly) NSArray * complications; 
@property (copy,readonly) NSArray * complicationsCodings; 
@property (copy,readonly) HKMedicalDate * executionEndDate; 
@property (copy,readonly) HKMedicalDate * executionStartDate; 
@property (copy,readonly) NSArray * followUps; 
@property (copy,readonly) NSArray * followUpsCodings; 
@property (readonly) BOOL notPerformed; 
@property (copy,readonly) HKConcept * outcome; 
@property (copy,readonly) NSArray * outcomeCodings; 
@property (copy,readonly) NSArray * performers; 
@property (copy,readonly) HKConcept * procedure; 
@property (copy,readonly) NSArray * procedureCodings; 
@property (copy,readonly) HKConcept * reason; 
@property (copy,readonly) NSArray * reasonCodings; 
@property (copy,readonly) NSArray * reasonsNotPerformed; 
@property (copy,readonly) NSArray * reasonsNotPerformedCodings; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 procedureCodings:(id)arg13 performers:(id)arg14 executionStartDate:(id)arg15 executionEndDate:(id)arg16 notPerformed:(BOOL)arg17 statusCoding:(id)arg18 categoryCodings:(id)arg19 reasonCodings:(id)arg20 reasonsNotPerformedCodings:(id)arg21 outcomeCodings:(id)arg22 complicationsCodings:(id)arg23 followUpsCodings:(id)arg24 bodySitesCodings:(id)arg25 ;
+(id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 procedureCodings:(id)arg12 performers:(id)arg13 executionStartDate:(id)arg14 executionEndDate:(id)arg15 notPerformed:(BOOL)arg16 statusCoding:(id)arg17 categoryCodings:(id)arg18 reasonCodings:(id)arg19 reasonsNotPerformedCodings:(id)arg20 outcomeCodings:(id)arg21 complicationsCodings:(id)arg22 followUpsCodings:(id)arg23 bodySitesCodings:(id)arg24 ;
+(id)_newProcedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 procedureCodings:(id)arg13 performers:(id)arg14 executionStartDate:(id)arg15 executionEndDate:(id)arg16 notPerformed:(BOOL)arg17 statusCoding:(id)arg18 categoryCodings:(id)arg19 reasonCodings:(id)arg20 reasonsNotPerformedCodings:(id)arg21 outcomeCodings:(id)arg22 complicationsCodings:(id)arg23 followUpsCodings:(id)arg24 bodySitesCodings:(id)arg25 config:(/*^block*/id)arg26 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKConcept *)reason;
-(HKConcept *)category;
-(HKConcept *)status;
-(HKConcept *)outcome;
-(void)_setCategory:(id)arg1 ;
-(NSArray *)performers;
-(void)_setStatus:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(HKMedicalCoding *)statusCoding;
-(id)statusCodingContext;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(id)statusCodingCollection;
-(void)_setStatusCoding:(id)arg1 ;
-(NSArray *)reasonCodings;
-(id)reasonCodingsContext;
-(id)reasonCodingsCollection;
-(void)_setReasonCodings:(id)arg1 ;
-(void)_setReason:(id)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)medicalRecordCodings;
-(NSArray *)procedureCodings;
-(NSArray *)categoryCodings;
-(NSArray *)bodySitesCodings;
-(void)_setBodySites:(id)arg1 ;
-(HKProcedureRecordType *)procedureRecordType;
-(NSArray *)reasonsNotPerformedCodings;
-(NSArray *)outcomeCodings;
-(NSArray *)complicationsCodings;
-(NSArray *)followUpsCodings;
-(void)_setProcedure:(id)arg1 ;
-(void)_setReasonsNotPerformed:(id)arg1 ;
-(void)_setOutcome:(id)arg1 ;
-(void)_setComplications:(id)arg1 ;
-(void)_setFollowUps:(id)arg1 ;
-(void)_setPerformers:(id)arg1 ;
-(NSArray *)bodySites;
-(id)categoryCodingsContext;
-(id)bodySitesCodingsContexts;
-(id)categoryCodingsCollection;
-(id)bodySitesCodingsCollection;
-(void)_setCategoryCodings:(id)arg1 ;
-(void)_setBodySitesCodings:(id)arg1 ;
-(HKMedicalDate *)executionStartDate;
-(HKMedicalDate *)executionEndDate;
-(BOOL)notPerformed;
-(HKConcept *)procedure;
-(NSArray *)reasonsNotPerformed;
-(NSArray *)complications;
-(NSArray *)followUps;
-(id)procedureCodingsContext;
-(id)reasonsNotPerformedCodingsContexts;
-(id)outcomeCodingsContext;
-(id)complicationsCodingsContexts;
-(id)followUpsCodingsContexts;
-(id)procedureCodingsCollection;
-(id)reasonsNotPerformedCodingsCollection;
-(id)outcomeCodingsCollection;
-(id)complicationsCodingsCollection;
-(id)followUpsCodingsCollection;
-(void)_setProcedureCodings:(id)arg1 ;
-(void)_setExecutionStartDate:(id)arg1 ;
-(void)_setExecutionEndDate:(id)arg1 ;
-(void)_setNotPerformed:(BOOL)arg1 ;
-(void)_setReasonsNotPerformedCodings:(id)arg1 ;
-(void)_setOutcomeCodings:(id)arg1 ;
-(void)_setComplicationsCodings:(id)arg1 ;
-(void)_setFollowUpsCodings:(id)arg1 ;
@end

