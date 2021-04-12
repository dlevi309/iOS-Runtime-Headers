/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSPrimitive.h>
#import <libobjc.A.dylib/PGPersonResult.h>
#import <libobjc.A.dylib/PGGraphIngestPerson.h>

@class NSString, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSArray;

@interface CLSPersonIdentity : CLSPrimitive <PGPersonResult, PGGraphIngestPerson> {

	NSMutableArray* _homeAddresses;
	NSMutableArray* _workAddresses;
	BOOL _isFavorite;
	BOOL _isUserCreated;
	BOOL _hasContactProfilePicture;
	BOOL _hasPhoneNumber;
	NSString* _PHIdentifier;
	NSString* _CNIdentifier;
	NSString* _fullName;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _nickname;
	unsigned long long _sex;
	unsigned long long _ageCategory;
	NSDate* _birthdayDate;
	NSDate* _potentialBirthdayDate;
	NSDate* _anniversaryDate;
	NSString* _companyName;
	NSMutableDictionary* _socialProfiles;
	NSSet* _emailAddresses;
	NSSet* _phoneNumbers;
	unsigned long long _relationship;
	NSArray* _sourceURLs;
	NSString* _inferredLastName;

}

@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) NSString * suggestedContactIdentifier; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) BOOL isInferredChild; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSString * keywordDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * contactID; 
@property (nonatomic,readonly) BOOL isFavorite; 
@property (nonatomic,readonly) BOOL isUserCreated; 
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,readonly) NSDate * potentialBirthdayDate; 
@property (nonatomic,readonly) NSDate * anniversaryDate; 
@property (nonatomic,readonly) unsigned long long relationship; 
@property (nonatomic,readonly) unsigned long long ageCategory; 
@property (nonatomic,readonly) unsigned long long sex; 
@property (nonatomic,readonly) NSDictionary * locationsByAddressTypes; 
@property (nonatomic,retain) NSString * inferredLastName;                           //@synthesize inferredLastName=_inferredLastName - In the implementation block
@property (nonatomic,retain) NSString * CNIdentifier;                               //@synthesize CNIdentifier=_CNIdentifier - In the implementation block
@property (nonatomic,retain) NSString * PHIdentifier;                               //@synthesize PHIdentifier=_PHIdentifier - In the implementation block
@property (nonatomic,retain) NSString * fullName;                                   //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * middleName;                                 //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * nickname;                                   //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSDate * birthdayDate;                                 //@synthesize birthdayDate=_birthdayDate - In the implementation block
@property (nonatomic,retain) NSDate * potentialBirthdayDate;                        //@synthesize potentialBirthdayDate=_potentialBirthdayDate - In the implementation block
@property (nonatomic,retain) NSDate * anniversaryDate;                              //@synthesize anniversaryDate=_anniversaryDate - In the implementation block
@property (nonatomic,retain) NSString * companyName;                                //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * socialProfiles;                  //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,retain) NSSet * emailAddresses;                                //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSSet * phoneNumbers;                                  //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (assign,nonatomic) unsigned long long relationship;                       //@synthesize relationship=_relationship - In the implementation block
@property (assign,nonatomic) unsigned long long sex;                                //@synthesize sex=_sex - In the implementation block
@property (assign,nonatomic) unsigned long long ageCategory;                        //@synthesize ageCategory=_ageCategory - In the implementation block
@property (assign,nonatomic) BOOL isFavorite;                                       //@synthesize isFavorite=_isFavorite - In the implementation block
@property (assign,nonatomic) BOOL isUserCreated;                                    //@synthesize isUserCreated=_isUserCreated - In the implementation block
@property (assign,nonatomic) BOOL hasContactProfilePicture;                         //@synthesize hasContactProfilePicture=_hasContactProfilePicture - In the implementation block
@property (assign,nonatomic) BOOL hasPhoneNumber;                                   //@synthesize hasPhoneNumber=_hasPhoneNumber - In the implementation block
@property (nonatomic,readonly) NSArray * sourceURLs;                                //@synthesize sourceURLs=_sourceURLs - In the implementation block
+(unsigned long long)type;
+(id)person;
+(BOOL)supportsSecureCoding;
+(id)relationshipRegularExpressionForRelationship:(unsigned long long)arg1 locale:(id)arg2 ;
+(id)personWithCNIdentifier:(id)arg1 ;
+(id)personWithPHIdentifier:(id)arg1 ;
+(id)personWithPHPerson:(id)arg1 ;
+(id)presentationStringForPeople:(id)arg1 ;
+(id)presentationStringForPeople:(id)arg1 withScores:(id)arg2 ;
+(BOOL)isParentRelationship:(unsigned long long)arg1 ;
+(BOOL)isChildRelationship:(unsigned long long)arg1 ;
+(BOOL)isSiblingRelationship:(unsigned long long)arg1 ;
+(BOOL)isFamilyRelationship:(unsigned long long)arg1 ;
+(id)_personRelationshipVocabularyByLocaleDictionary;
+(id)descriptionForPersonRelationship:(unsigned long long)arg1 ;
-(NSString *)localIdentifier;
-(NSString *)contactIdentifier;
-(NSString *)contactID;
-(NSString *)UUID;
-(BOOL)isVerified;
-(long long)compareToPerson:(id)arg1 ;
-(NSString *)suggestedContactIdentifier;
-(BOOL)isInferredChild;
-(NSString *)keywordDescription;
-(NSDictionary *)locationsByAddressTypes;
-(BOOL)isFavorite;
-(BOOL)isMe;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setEmailAddresses:(NSSet *)arg1 ;
-(NSString *)fullName;
-(void)setLastName:(NSString *)arg1 ;
-(BOOL)isUserCreated;
-(NSDate *)birthdayDate;
-(id)init;
-(unsigned long long)relationship;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setSocialProfiles:(NSMutableDictionary *)arg1 ;
-(void)setPhoneNumbers:(NSSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)emailAddresses;
-(NSString *)nickname;
-(void)setIsFavorite:(BOOL)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSMutableDictionary *)socialProfiles;
-(NSDate *)anniversaryDate;
-(void)setRelationship:(unsigned long long)arg1 ;
-(NSSet *)phoneNumbers;
-(void)setSex:(unsigned long long)arg1 ;
-(NSString *)description;
-(NSString *)middleName;
-(void)setNickname:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)potentialBirthdayDate;
-(BOOL)isEqualToPerson:(id)arg1 ;
-(void)setAgeCategory:(unsigned long long)arg1 ;
-(BOOL)hasPhoneNumber;
-(unsigned long long)ageCategory;
-(unsigned long long)sex;
-(NSString *)companyName;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)sourceURLs;
-(NSString *)CNIdentifier;
-(BOOL)isOrganization;
-(void)prefetchPersonAddressesIfNeeded;
-(unsigned long long)countOfAddressesOfType:(unsigned long long)arg1 ;
-(NSString *)PHIdentifier;
-(void)enumerateAddressesOfType:(unsigned long long)arg1 asCLLocationsWithBlock:(/*^block*/id)arg2 ;
-(BOOL)hasSameFamilyNameAsPerson:(id)arg1 ;
-(BOOL)isSamePersonAs:(id)arg1 ;
-(void)mergeWithPerson:(id)arg1 ;
-(id)_addressArrayFromAddressType:(unsigned long long)arg1 ;
-(void)addAddresses:(id)arg1 ofType:(unsigned long long)arg2 ;
-(void)_enumerateAddresses:(id)arg1 as:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumerateAddressesOfType:(unsigned long long)arg1 asPlacemarkWithBlock:(/*^block*/id)arg2 ;
-(void)sanitize;
-(id)_relationshipAsString;
-(id)presentationString;
-(id)pluralPresentationString;
-(void)setSourceService:(id)arg1 andID:(id)arg2 ;
-(BOOL)isLocationCoordinate:(CLLocationCoordinate2D)arg1 closeToAddressesOfType:(unsigned long long)arg2 ;
-(BOOL)isLocationCoordinate:(CLLocationCoordinate2D)arg1 farAwayFromAddressesOfType:(unsigned long long)arg2 ;
-(NSString *)inferredLastName;
-(unsigned long long)relationshipHintFromNameUsingLocales:(id)arg1 ;
-(id)_motherAndFatherRelationships;
-(void)setPHIdentifier:(NSString *)arg1 ;
-(void)setCNIdentifier:(NSString *)arg1 ;
-(void)setBirthdayDate:(NSDate *)arg1 ;
-(void)setPotentialBirthdayDate:(NSDate *)arg1 ;
-(void)setAnniversaryDate:(NSDate *)arg1 ;
-(void)setIsUserCreated:(BOOL)arg1 ;
-(BOOL)hasContactProfilePicture;
-(void)setHasContactProfilePicture:(BOOL)arg1 ;
-(void)setHasPhoneNumber:(BOOL)arg1 ;
-(void)setInferredLastName:(NSString *)arg1 ;
@end

