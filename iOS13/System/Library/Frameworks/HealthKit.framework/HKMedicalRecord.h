/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * medicalRecordCodings; 
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
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
+(id)defaultDisplayString;
+(id)_sortDateIntervalFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2 error:(out id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSLocale *)locale;
-(unsigned long long)state;
-(NSString *)country;
-(void)_setState:(unsigned long long)arg1 ;
-(void)_setLocale:(id)arg1 ;
-(HKSemanticDate *)sortDate;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)note;
-(void)_setNote:(id)arg1 ;
-(NSDate *)modifiedDate;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(NSArray *)medicalRecordCodings;
-(id)fallbackDisplayString;
-(BOOL)enteredInError;
-(HKConcept *)primaryConcept;
-(void)_setEnteredInError:(BOOL)arg1 ;
-(void)_setModifiedDate:(id)arg1 ;
-(void)_setFHIRIdentifier:(id)arg1 ;
-(void)_setExtractionVersion:(long long)arg1 ;
-(void)_setSortDate:(id)arg1 ;
-(void)_setPrimaryConcept:(id)arg1 ;
-(void)_setCountry:(id)arg1 ;
-(HKFHIRIdentifier *)FHIRIdentifier;
-(long long)extractionVersion;
@end

