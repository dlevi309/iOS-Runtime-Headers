/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBLabeledPostalAddress : PBCodable <NSCopying> {

	NSString* _city;
	NSString* _country;
	NSString* _isoCountryCode;
	NSString* _label;
	NSString* _postalCode;
	NSString* _state;
	NSString* _street;
	NSString* _subAdministrativeArea;
	NSString* _subLocality;

}

@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasStreet; 
@property (nonatomic,retain) NSString * street;                             //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) BOOL hasSubLocality; 
@property (nonatomic,retain) NSString * subLocality;                        //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,readonly) BOOL hasCity; 
@property (nonatomic,retain) NSString * city;                               //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) BOOL hasSubAdministrativeArea; 
@property (nonatomic,retain) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,readonly) BOOL hasState; 
@property (nonatomic,retain) NSString * state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasPostalCode; 
@property (nonatomic,retain) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) BOOL hasIsoCountryCode; 
@property (nonatomic,retain) NSString * isoCountryCode;                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
-(BOOL)hasIsoCountryCode;
-(BOOL)hasSubLocality;
-(id)dictionaryRepresentation;
-(NSString *)subLocality;
-(NSString *)postalCode;
-(NSString *)city;
-(BOOL)hasPostalCode;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)street;
-(NSString *)country;
-(void)setStreet:(NSString *)arg1 ;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(BOOL)hasSubAdministrativeArea;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(BOOL)hasState;
-(NSString *)subAdministrativeArea;
-(BOOL)hasStreet;
-(BOOL)hasLabel;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)isoCountryCode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCountry;
-(id)description;
-(BOOL)hasCity;
-(void)setState:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)state;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

