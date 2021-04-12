/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)postalCode;
-(NSString *)city;
-(NSString *)country;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)isoCountryCode;
-(NSString *)street;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(BOOL)hasLabel;
-(BOOL)hasIsoCountryCode;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(BOOL)hasCountry;
-(BOOL)hasSubAdministrativeArea;
-(BOOL)hasSubLocality;
-(void)setStreet:(NSString *)arg1 ;
-(BOOL)hasStreet;
-(void)setPostalCode:(NSString *)arg1 ;
-(BOOL)hasState;
-(BOOL)hasCity;
-(BOOL)hasPostalCode;
@end

