/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)namePrefix;
-(void)setNamePrefix:(NSString *)arg1 ;
-(NSString *)nameSuffix;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)phoneNumbers;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)emailAddresses;
-(PPPBDateComponents *)birthday;
-(NSString *)organizationName;
-(void)setEmailAddresses:(NSMutableArray *)arg1 ;
-(BOOL)hasIdentifier;
-(long long)createdAt;
-(void)setCreatedAt:(long long)arg1 ;
-(BOOL)hasCreatedAt;
-(BOOL)hasNickname;
-(void)setPhoneNumbers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)socialProfiles;
-(PPPBDateComponents *)nonGregorianBirthday;
-(NSMutableArray *)postalAddresses;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setBirthday:(PPPBDateComponents *)arg1 ;
-(void)setNonGregorianBirthday:(PPPBDateComponents *)arg1 ;
-(void)setSocialProfiles:(NSMutableArray *)arg1 ;
-(void)setPostalAddresses:(NSMutableArray *)arg1 ;
-(int)displayNameOrder;
-(void)setDisplayNameOrder:(int)arg1 ;
-(NSString *)sortingGivenName;
-(NSString *)sortingFamilyName;
-(BOOL)hasOrganizationName;
-(BOOL)hasMiddleName;
-(BOOL)hasNamePrefix;
-(BOOL)hasNameSuffix;
-(void)setHasCreatedAt:(BOOL)arg1 ;
-(BOOL)hasGivenName;
-(BOOL)hasFamilyName;
-(void)clearPhoneNumbers;
-(void)addPhoneNumbers:(id)arg1 ;
-(unsigned long long)phoneNumbersCount;
-(id)phoneNumbersAtIndex:(unsigned long long)arg1 ;
-(void)clearEmailAddresses;
-(void)addEmailAddresses:(id)arg1 ;
-(unsigned long long)emailAddressesCount;
-(id)emailAddressesAtIndex:(unsigned long long)arg1 ;
-(void)clearPostalAddresses;
-(void)addPostalAddresses:(id)arg1 ;
-(unsigned long long)postalAddressesCount;
-(id)postalAddressesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBirthday;
-(BOOL)hasNonGregorianBirthday;
-(void)clearSocialProfiles;
-(void)addSocialProfiles:(id)arg1 ;
-(unsigned long long)socialProfilesCount;
-(id)socialProfilesAtIndex:(unsigned long long)arg1 ;
-(void)setHasDisplayNameOrder:(BOOL)arg1 ;
-(BOOL)hasDisplayNameOrder;
-(BOOL)hasSortingGivenName;
-(BOOL)hasSortingFamilyName;
-(void)setSortingGivenName:(NSString *)arg1 ;
-(void)setSortingFamilyName:(NSString *)arg1 ;
@end

