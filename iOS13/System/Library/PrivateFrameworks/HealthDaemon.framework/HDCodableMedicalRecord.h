/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableFHIRIdentifier, HDCodableSample, HDCodableSemanticDate;

@interface HDCodableMedicalRecord : PBCodable <HDDecoding, NSCopying> {

	long long _extractionVersion;
	double _modifiedDate;
	long long _state;
	NSString* _country;
	HDCodableFHIRIdentifier* _fHIRIdentifier;
	NSString* _locale;
	NSString* _note;
	HDCodableSample* _sample;
	HDCodableSemanticDate* _sortDate;
	BOOL _enteredInError;
	SCD_Struct_HD11 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                              //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) BOOL hasNote; 
@property (nonatomic,retain) NSString * note;                                       //@synthesize note=_note - In the implementation block
@property (assign,nonatomic) BOOL hasEnteredInError; 
@property (assign,nonatomic) BOOL enteredInError;                                   //@synthesize enteredInError=_enteredInError - In the implementation block
@property (assign,nonatomic) BOOL hasModifiedDate; 
@property (assign,nonatomic) double modifiedDate;                                   //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFHIRIdentifier; 
@property (nonatomic,retain) HDCodableFHIRIdentifier * fHIRIdentifier;              //@synthesize fHIRIdentifier=_fHIRIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSortDate; 
@property (nonatomic,retain) HDCodableSemanticDate * sortDate;                      //@synthesize sortDate=_sortDate - In the implementation block
@property (assign,nonatomic) BOOL hasExtractionVersion; 
@property (assign,nonatomic) long long extractionVersion;                           //@synthesize extractionVersion=_extractionVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country;                                    //@synthesize country=_country - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) long long state;                                       //@synthesize state=_state - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)dictionaryRepresentation;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)country;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(HDCodableSemanticDate *)sortDate;
-(void)setCountry:(NSString *)arg1 ;
-(BOOL)hasLocale;
-(BOOL)hasCountry;
-(NSString *)note;
-(void)setNote:(NSString *)arg1 ;
-(void)setSample:(HDCodableSample *)arg1 ;
-(HDCodableSample *)sample;
-(BOOL)hasState;
-(void)setSortDate:(HDCodableSemanticDate *)arg1 ;
-(BOOL)hasNote;
-(void)setHasState:(BOOL)arg1 ;
-(double)modifiedDate;
-(void)setModifiedDate:(double)arg1 ;
-(BOOL)enteredInError;
-(long long)extractionVersion;
-(BOOL)hasSample;
-(BOOL)applyToObject:(id)arg1 ;
-(void)setFHIRIdentifier:(HDCodableFHIRIdentifier *)arg1 ;
-(void)setEnteredInError:(BOOL)arg1 ;
-(void)setHasEnteredInError:(BOOL)arg1 ;
-(BOOL)hasEnteredInError;
-(void)setHasModifiedDate:(BOOL)arg1 ;
-(BOOL)hasModifiedDate;
-(BOOL)hasFHIRIdentifier;
-(BOOL)hasSortDate;
-(void)setExtractionVersion:(long long)arg1 ;
-(void)setHasExtractionVersion:(BOOL)arg1 ;
-(BOOL)hasExtractionVersion;
-(HDCodableFHIRIdentifier *)fHIRIdentifier;
@end

