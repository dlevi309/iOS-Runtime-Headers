/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PPPBDateComponents, NSMutableArray, NSString;

@interface PPPBContact : PBCodable <NSCopying> {

	long long _createdAt;
	PPPBDateComponents* _birthday;
	int _displayNameOrder;
	NSMutableArray* _emailAddresses;
	NSString* _familyName;
	NSString* _givenName;
	NSString* _identifier;
	NSString* _middleName;
	NSString* _namePrefix;
	NSString* _nameSuffix;
	NSString* _nickname;
	PPPBDateComponents* _nonGregorianBirthday;
	NSString* _organizationName;
	NSMutableArray* _phoneNumbers;
	NSMutableArray* _postalAddresses;
	NSMutableArray* _socialProfiles;
	NSString* _sortingFamilyName;
	NSString* _sortingGivenName;
	SCD_Struct_PP2 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGivenName; 
@property (nonatomic,retain) NSString * givenName;                                   //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,readonly) BOOL hasMiddleName; 
@property (nonatomic,retain) NSString * middleName;                                  //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) BOOL hasFamilyName; 
@property (nonatomic,retain) NSString * familyName;                                  //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) BOOL hasNickname; 
@property (nonatomic,retain) NSString * nickname;                                    //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSMutableArray * phoneNumbers;                          //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) NSMutableArray * emailAddresses;                        //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSMutableArray * postalAddresses;                       //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (nonatomic,retain) NSString * organizationName;                            //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,readonly) BOOL hasBirthday; 
@property (nonatomic,retain) PPPBDateComponents * birthday;                          //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,readonly) BOOL hasNonGregorianBirthday; 
@property (nonatomic,retain) PPPBDateComponents * nonGregorianBirthday;              //@synthesize nonGregorianBirthday=_nonGregorianBirthday - In the implementation block
@property (nonatomic,retain) NSMutableArray * socialProfiles;                        //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,readonly) BOOL hasNamePrefix; 
@property (nonatomic,retain) NSString * namePrefix;                                  //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,readonly) BOOL hasNameSuffix; 
@property (nonatomic,retain) NSString * nameSuffix;                                  //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayNameOrder; 
@property (assign,nonatomic) int displayNameOrder;                                   //@synthesize displayNameOrder=_displayNameOrder - In the implementation block
@property (nonatomic,readonly) BOOL hasSortingGivenName; 
@property (nonatomic,retain) NSString * sortingGivenName;                            //@synthesize sortingGivenName=_sortingGivenName - In the implementation block
@property (nonatomic,readonly) BOOL hasSortingFamilyName; 
@property (nonatomic,retain) NSString * sortingFamilyName;                           //@synthesize sortingFamilyName=_sortingFamilyName - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedAt; 
@property (assign,nonatomic) long long createdAt;                                    //@synthesize createdAt=_createdAt - In the implementation block
+(Class)phoneNumbersType;
+(Class)emailAddressesType;
+(Class)postalAddressesType;
+(Class)socialProfilesType;
-(NSString *)familyName;
-(id)dictionaryRepresentation;
-(void)clearPostalAddresses;
-(BOOL)hasCreatedAt;
-(void)setEmailAddresses:(NSMutableArray *)arg1 ;
-(BOOL)hasMiddleName;
-(NSString *)namePrefix;
-(void)setCreatedAt:(long long)arg1 ;
-(long long)createdAt;
-(NSString *)organizationName;
-(void)setHasCreatedAt:(BOOL)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)nameSuffix;
-(void)setPostalAddresses:(NSMutableArray *)arg1 ;
-(void)setBirthday:(PPPBDateComponents *)arg1 ;
-(BOOL)hasIdentifier;
-(void)setSocialProfiles:(NSMutableArray *)arg1 ;
-(void)addPhoneNumbers:(id)arg1 ;
-(void)setPhoneNumbers:(NSMutableArray *)arg1 ;
-(BOOL)hasFamilyName;
-(NSString *)givenName;
-(BOOL)hasNameSuffix;
-(NSMutableArray *)emailAddresses;
-(BOOL)hasDisplayNameOrder;
-(unsigned long long)postalAddressesCount;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)sortingFamilyName;
-(NSString *)nickname;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(BOOL)hasSortingGivenName;
-(void)setSortingFamilyName:(NSString *)arg1 ;
-(NSMutableArray *)postalAddresses;
-(void)addPostalAddresses:(id)arg1 ;
-(PPPBDateComponents *)birthday;
-(NSMutableArray *)socialProfiles;
-(BOOL)hasNickname;
-(NSMutableArray *)phoneNumbers;
-(BOOL)hasGivenName;
-(id)description;
-(void)clearSocialProfiles;
-(void)addSocialProfiles:(id)arg1 ;
-(BOOL)hasNonGregorianBirthday;
-(BOOL)hasBirthday;
-(NSString *)middleName;
-(unsigned long long)socialProfilesCount;
-(void)setSortingGivenName:(NSString *)arg1 ;
-(BOOL)hasSortingFamilyName;
-(unsigned long long)phoneNumbersCount;
-(id)emailAddressesAtIndex:(unsigned long long)arg1 ;
-(PPPBDateComponents *)nonGregorianBirthday;
-(void)setNonGregorianBirthday:(PPPBDateComponents *)arg1 ;
-(void)setNamePrefix:(NSString *)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setDisplayNameOrder:(int)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasOrganizationName;
-(unsigned long long)emailAddressesCount;
-(BOOL)readFrom:(id)arg1 ;
-(id)phoneNumbersAtIndex:(unsigned long long)arg1 ;
-(void)addEmailAddresses:(id)arg1 ;
-(void)setHasDisplayNameOrder:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)clearPhoneNumbers;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(id)postalAddressesAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearEmailAddresses;
-(NSString *)sortingGivenName;
-(int)displayNameOrder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasNamePrefix;
-(BOOL)isEqual:(id)arg1 ;
-(id)socialProfilesAtIndex:(unsigned long long)arg1 ;
-(void)setNameSuffix:(NSString *)arg1 ;
@end

