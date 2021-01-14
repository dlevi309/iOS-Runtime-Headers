/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PPPBContactNameRecord : PBCodable <NSCopying> {

	double _score;
	unsigned char _changeType;
	NSMutableArray* _cityNames;
	NSString* _firstName;
	NSString* _identifier;
	NSString* _jobTitle;
	NSString* _lastName;
	NSString* _middleName;
	NSString* _nickname;
	NSString* _organizationName;
	NSString* _phoneticFirstName;
	NSString* _phoneticLastName;
	NSString* _phoneticMiddleName;
	NSMutableArray* _relatedNames;
	unsigned char _source;
	NSString* _sourceIdentifier;
	NSMutableArray* _streetNames;
	SCD_Struct_PP4 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                               //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) unsigned char source;                       //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) unsigned char changeType;                   //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceIdentifier; 
@property (nonatomic,retain) NSString * sourceIdentifier;                //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstName; 
@property (nonatomic,retain) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticFirstName; 
@property (nonatomic,retain) NSString * phoneticFirstName;               //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,readonly) BOOL hasMiddleName; 
@property (nonatomic,retain) NSString * middleName;                      //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticMiddleName; 
@property (nonatomic,retain) NSString * phoneticMiddleName;              //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,readonly) BOOL hasLastName; 
@property (nonatomic,retain) NSString * lastName;                        //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticLastName; 
@property (nonatomic,retain) NSString * phoneticLastName;                //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (nonatomic,retain) NSString * organizationName;                //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,readonly) BOOL hasJobTitle; 
@property (nonatomic,retain) NSString * jobTitle;                        //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasNickname; 
@property (nonatomic,retain) NSString * nickname;                        //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedNames;              //@synthesize relatedNames=_relatedNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * streetNames;               //@synthesize streetNames=_streetNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * cityNames;                 //@synthesize cityNames=_cityNames - In the implementation block
+(Class)relatedNamesType;
+(Class)streetNamesType;
+(Class)cityNamesType;
-(NSString *)phoneticMiddleName;
-(NSMutableArray *)cityNames;
-(id)dictionaryRepresentation;
-(NSMutableArray *)streetNames;
-(unsigned char)StringAsSource:(id)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)firstName;
-(void)setChangeType:(unsigned char)arg1 ;
-(NSString *)lastName;
-(NSString *)phoneticLastName;
-(NSString *)phoneticFirstName;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(unsigned char)arg1 ;
-(BOOL)hasSource;
-(BOOL)hasScore;
-(void)setHasScore:(BOOL)arg1 ;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(BOOL)hasMiddleName;
-(unsigned char)changeType;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)organizationName;
-(void)setJobTitle:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasChangeType;
-(void)setStreetNames:(NSMutableArray *)arg1 ;
-(double)score;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)addStreetNames:(id)arg1 ;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(id)relatedNamesAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)nickname;
-(id)changeTypeAsString:(unsigned char)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(BOOL)hasJobTitle;
-(BOOL)hasNickname;
-(void)clearStreetNames;
-(void)setSource:(unsigned char)arg1 ;
-(NSMutableArray *)relatedNames;
-(NSString *)jobTitle;
-(unsigned long long)cityNamesCount;
-(id)description;
-(BOOL)hasLastName;
-(NSString *)middleName;
-(unsigned long long)streetNamesCount;
-(unsigned char)StringAsChangeType:(id)arg1 ;
-(void)setCityNames:(NSMutableArray *)arg1 ;
-(void)addRelatedNames:(id)arg1 ;
-(BOOL)hasPhoneticLastName;
-(void)clearRelatedNames;
-(BOOL)hasPhoneticFirstName;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(BOOL)hasFirstName;
-(id)cityNamesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)setRelatedNames:(NSMutableArray *)arg1 ;
-(BOOL)hasOrganizationName;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSourceIdentifier;
-(void)addCityNames:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasPhoneticMiddleName;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)streetNamesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)relatedNamesCount;
-(void)clearCityNames;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)source;
-(NSString *)sourceIdentifier;
@end

