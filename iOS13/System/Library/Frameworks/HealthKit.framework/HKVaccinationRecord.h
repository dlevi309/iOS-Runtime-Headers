/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HKMedicalDate, NSString, HKMedicalCoding, HKConcept, NSUUID, NSLocale, HKVaccinationRecordType;

@interface HKVaccinationRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	NSArray* _vaccinationCodings;
	HKMedicalDate* _expirationDate;
	NSString* _doseNumber;
	NSString* _doseQuantity;
	NSString* _performer;
	NSArray* _bodySiteCodings;
	NSString* _reaction;
	BOOL _notGiven;
	HKMedicalDate* _administrationDate;
	HKMedicalCoding* _statusCoding;
	BOOL _patientReported;
	NSArray* _routeCodings;
	NSArray* _reasonsCodings;
	NSArray* _reasonsNotGivenCodings;
	HKConcept* _vaccination;
	HKConcept* _bodySite;
	HKConcept* _status;
	HKConcept* _route;
	NSArray* _reasons;
	NSArray* _reasonsNotGiven;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (copy,readonly) HKVaccinationRecordType * vaccinationRecordType; 
@property (copy,readonly) HKMedicalDate * administrationDate; 
@property (copy,readonly) HKConcept * bodySite; 
@property (copy,readonly) NSArray * bodySiteCodings; 
@property (copy,readonly) NSString * doseNumber; 
@property (copy,readonly) NSString * doseQuantity; 
@property (copy,readonly) HKMedicalDate * expirationDate; 
@property (readonly) BOOL notGiven; 
@property (readonly) BOOL patientReported; 
@property (copy,readonly) NSString * performer; 
@property (copy,readonly) NSString * reaction; 
@property (copy,readonly) NSArray * reasons; 
@property (copy,readonly) NSArray * reasonsCodings; 
@property (copy,readonly) NSArray * reasonsNotGiven; 
@property (copy,readonly) NSArray * reasonsNotGivenCodings; 
@property (copy,readonly) HKConcept * route; 
@property (copy,readonly) NSArray * routeCodings; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
@property (copy,readonly) HKConcept * vaccination; 
@property (copy,readonly) NSArray * vaccinationCodings; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 vaccinationCodings:(id)arg13 expirationDate:(id)arg14 doseNumber:(id)arg15 doseQuantity:(id)arg16 performer:(id)arg17 bodySiteCodings:(id)arg18 reaction:(id)arg19 notGiven:(BOOL)arg20 administrationDate:(id)arg21 statusCoding:(id)arg22 patientReported:(BOOL)arg23 routeCodings:(id)arg24 reasonsCodings:(id)arg25 reasonsNotGivenCodings:(id)arg26 ;
+(id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 vaccinationCodings:(id)arg12 expirationDate:(id)arg13 doseNumber:(id)arg14 doseQuantity:(id)arg15 performer:(id)arg16 bodySiteCodings:(id)arg17 reaction:(id)arg18 notGiven:(BOOL)arg19 administrationDate:(id)arg20 statusCoding:(id)arg21 patientReported:(BOOL)arg22 routeCodings:(id)arg23 reasonsCodings:(id)arg24 reasonsNotGivenCodings:(id)arg25 ;
+(id)_newVaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 vaccinationCodings:(id)arg13 expirationDate:(id)arg14 doseNumber:(id)arg15 doseQuantity:(id)arg16 performer:(id)arg17 bodySiteCodings:(id)arg18 reaction:(id)arg19 notGiven:(BOOL)arg20 administrationDate:(id)arg21 statusCoding:(id)arg22 patientReported:(BOOL)arg23 routeCodings:(id)arg24 reasonsCodings:(id)arg25 reasonsNotGivenCodings:(id)arg26 config:(/*^block*/id)arg27 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKConcept *)status;
-(HKMedicalDate *)expirationDate;
-(void)_setExpirationDate:(id)arg1 ;
-(NSArray *)reasons;
-(HKConcept *)route;
-(void)_setStatus:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(HKMedicalCoding *)statusCoding;
-(id)statusCodingContext;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(id)statusCodingCollection;
-(void)_setStatusCoding:(id)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)medicalRecordCodings;
-(NSArray *)vaccinationCodings;
-(NSArray *)bodySiteCodings;
-(NSArray *)routeCodings;
-(NSArray *)reasonsCodings;
-(NSArray *)reasonsNotGivenCodings;
-(void)_setVaccination:(id)arg1 ;
-(void)_setBodySite:(id)arg1 ;
-(void)_setRoute:(id)arg1 ;
-(void)_setReasons:(id)arg1 ;
-(void)_setReasonsNotGiven:(id)arg1 ;
-(HKVaccinationRecordType *)vaccinationRecordType;
-(HKConcept *)bodySite;
-(id)bodySiteCodingsContext;
-(id)bodySiteCodingsCollection;
-(void)_setBodySiteCodings:(id)arg1 ;
-(NSString *)doseNumber;
-(NSString *)doseQuantity;
-(NSString *)performer;
-(NSString *)reaction;
-(BOOL)notGiven;
-(HKMedicalDate *)administrationDate;
-(BOOL)patientReported;
-(HKConcept *)vaccination;
-(NSArray *)reasonsNotGiven;
-(id)vaccinationCodingsContext;
-(id)routeCodingsContext;
-(id)reasonsCodingsContexts;
-(id)reasonsNotGivenCodingsContexts;
-(id)vaccinationCodingsCollection;
-(id)routeCodingsCollection;
-(id)reasonsCodingsCollection;
-(id)reasonsNotGivenCodingsCollection;
-(void)_setVaccinationCodings:(id)arg1 ;
-(void)_setDoseNumber:(id)arg1 ;
-(void)_setDoseQuantity:(id)arg1 ;
-(void)_setPerformer:(id)arg1 ;
-(void)_setReaction:(id)arg1 ;
-(void)_setNotGiven:(BOOL)arg1 ;
-(void)_setAdministrationDate:(id)arg1 ;
-(void)_setPatientReported:(BOOL)arg1 ;
-(void)_setRouteCodings:(id)arg1 ;
-(void)_setReasonsCodings:(id)arg1 ;
-(void)_setReasonsNotGivenCodings:(id)arg1 ;
@end

