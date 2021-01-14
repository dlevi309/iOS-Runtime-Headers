/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/HKMedicalRecordCodings.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/HKCodedSample.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HKConcept, NSString, NSDate, HKFHIRIdentifier, NSLocale, HKSemanticDate, NSUUID;

@interface HKMedicalRecord : HKSample <HKMedicalRecordCodings, HKConceptIndexable, HKCodedSample, NSSecureCoding, NSCopying> {

	HKConcept* _primaryConcept;
	BOOL _enteredInError;
	NSString* _note;
	NSDate* _modifiedDate;
	HKFHIRIdentifier* _FHIRIdentifier;
	NSLocale* _locale;
	long long _extractionVersion;
	HKSemanticDate* _sortDate;
	NSString* _country;
	unsigned long long _state;

}

@property (nonatomic,readonly) NSArray * medicalRecordCodings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSString * note;                                //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) BOOL enteredInError;                                 //@synthesize enteredInError=_enteredInError - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modifiedDate;                          //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (nonatomic,copy,readonly) HKFHIRIdentifier * FHIRIdentifier;              //@synthesize FHIRIdentifier=_FHIRIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSLocale * locale;                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) long long extractionVersion;                         //@synthesize extractionVersion=_extractionVersion - In the implementation block
@property (nonatomic,copy,readonly) HKSemanticDate * sortDate;                      //@synthesize sortDate=_sortDate - In the implementation block
@property (nonatomic,readonly) HKConcept * primaryConcept; 
@property (nonatomic,retain) NSString * country;                                    //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                            //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_newMedicalRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 config:(/*^block*/id)arg13 ;
+(id)_sortDateIntervalFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2 error:(out id*)arg3 ;
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
-(void)_setState:(unsigned long long)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(NSLocale *)locale;
-(NSString *)country;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(void)_setNote:(id)arg1 ;
-(void)_setSortDate:(id)arg1 ;
-(HKConcept *)primaryConcept;
-(HKFHIRIdentifier *)FHIRIdentifier;
-(void)_setCountry:(id)arg1 ;
-(NSString *)note;
-(void)_setModifiedDate:(id)arg1 ;
-(BOOL)enteredInError;
-(void)_setEnteredInError:(BOOL)arg1 ;
-(void)_setFHIRIdentifier:(id)arg1 ;
-(void)_setExtractionVersion:(long long)arg1 ;
-(void)_setPrimaryConcept:(id)arg1 ;
-(long long)extractionVersion;
-(HKSemanticDate *)sortDate;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(id)_init;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setLocale:(id)arg1 ;
-(NSDate *)modifiedDate;
-(NSArray *)medicalRecordCodings;
-(id)fallbackDisplayString;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

