/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDateComponents, NSArray;

@interface PPContact : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _source;
	NSString* _identifier;
	NSString* _namePrefix;
	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSString* _nameSuffix;
	NSString* _nickname;
	NSString* _localizedFullName;
	NSString* _organizationName;
	NSString* _jobTitle;
	NSDateComponents* _birthday;
	NSDateComponents* _nonGregorianBirthday;
	NSArray* _phoneNumbers;
	NSArray* _emailAddresses;
	NSArray* _socialProfiles;
	NSArray* _postalAddresses;

}

@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned char source;                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * namePrefix;                                //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,readonly) NSString * givenName;                                 //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;                                //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSString * familyName;                                //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSString * nameSuffix;                                //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (nonatomic,readonly) NSString * nickname;                                  //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,readonly) NSString * localizedFullName;                         //@synthesize localizedFullName=_localizedFullName - In the implementation block
@property (nonatomic,readonly) NSString * organizationName;                          //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,readonly) NSString * jobTitle;                                  //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,readonly) NSDateComponents * birthday;                          //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,readonly) NSDateComponents * nonGregorianBirthday;              //@synthesize nonGregorianBirthday=_nonGregorianBirthday - In the implementation block
@property (nonatomic,readonly) NSArray * phoneNumbers;                               //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,readonly) NSArray * emailAddresses;                             //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * socialProfiles;                             //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,readonly) NSArray * postalAddresses;                            //@synthesize postalAddresses=_postalAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned char)sourceFromSourceIdentifier:(id)arg1 ;
+(id)sourceIdentifierWithSource:(unsigned char)arg1 identifier:(id)arg2 ;
+(long long)foundInAppsRecordIdentifierNumberWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(BOOL)identifier:(id)arg1 startsWithPrefix:(id)arg2 ;
+(id)contactWithIdentifier:(id)arg1 source:(unsigned char)arg2 namePrefix:(id)arg3 givenName:(id)arg4 middleName:(id)arg5 familyName:(id)arg6 nameSuffix:(id)arg7 nickname:(id)arg8 localizedFullName:(id)arg9 organizationName:(id)arg10 jobTitle:(id)arg11 birthday:(id)arg12 nonGregorianBirthday:(id)arg13 phoneNumbers:(id)arg14 emailAddresses:(id)arg15 socialProfiles:(id)arg16 postalAddresses:(id)arg17 ;
+(id)contactsContactIdentifierWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(NSString *)familyName;
-(BOOL)isEqualToContact:(id)arg1 ;
-(NSString *)namePrefix;
-(NSString *)organizationName;
-(void)setIdentifierForTesting:(id)arg1 ;
-(NSString *)nameSuffix;
-(NSString *)givenName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)nickname;
-(NSString *)localizedFullName;
-(NSArray *)postalAddresses;
-(NSDateComponents *)birthday;
-(NSArray *)socialProfiles;
-(NSString *)jobTitle;
-(NSArray *)phoneNumbers;
-(id)description;
-(NSString *)middleName;
-(NSDateComponents *)nonGregorianBirthday;
-(id)initWithIdentifier:(id)arg1 source:(unsigned char)arg2 namePrefix:(id)arg3 givenName:(id)arg4 middleName:(id)arg5 familyName:(id)arg6 nameSuffix:(id)arg7 nickname:(id)arg8 localizedFullName:(id)arg9 organizationName:(id)arg10 jobTitle:(id)arg11 birthday:(id)arg12 nonGregorianBirthday:(id)arg13 phoneNumbers:(id)arg14 emailAddresses:(id)arg15 socialProfiles:(id)arg16 postalAddresses:(id)arg17 ;
-(id)initWithContactsContact:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithFoundInAppsContact:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_generateLocalizedFullName;
-(NSString *)identifier;
-(id)contactsContactIdentifierWithError:(id*)arg1 ;
-(long long)foundInAppsRecordIdentifierNumberWithError:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)source;
@end

