/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)contactWithIdentifier:(id)arg1 source:(unsigned char)arg2 namePrefix:(id)arg3 givenName:(id)arg4 middleName:(id)arg5 familyName:(id)arg6 nameSuffix:(id)arg7 nickname:(id)arg8 localizedFullName:(id)arg9 organizationName:(id)arg10 jobTitle:(id)arg11 birthday:(id)arg12 nonGregorianBirthday:(id)arg13 phoneNumbers:(id)arg14 emailAddresses:(id)arg15 socialProfiles:(id)arg16 postalAddresses:(id)arg17 ;
+(id)contactsContactIdentifierWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(long long)foundInAppsRecordIdentifierNumberWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)sourceIdentifierWithSource:(unsigned char)arg1 identifier:(id)arg2 ;
+(unsigned char)sourceFromSourceIdentifier:(id)arg1 ;
+(BOOL)identifier:(id)arg1 startsWithPrefix:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned char)source;
-(NSString *)givenName;
-(NSString *)familyName;
-(NSString *)middleName;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(NSString *)nickname;
-(NSArray *)phoneNumbers;
-(NSArray *)emailAddresses;
-(NSDateComponents *)birthday;
-(NSString *)organizationName;
-(NSArray *)socialProfiles;
-(NSString *)jobTitle;
-(NSDateComponents *)nonGregorianBirthday;
-(NSArray *)postalAddresses;
-(BOOL)isEqualToContact:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 source:(unsigned char)arg2 namePrefix:(id)arg3 givenName:(id)arg4 middleName:(id)arg5 familyName:(id)arg6 nameSuffix:(id)arg7 nickname:(id)arg8 localizedFullName:(id)arg9 organizationName:(id)arg10 jobTitle:(id)arg11 birthday:(id)arg12 nonGregorianBirthday:(id)arg13 phoneNumbers:(id)arg14 emailAddresses:(id)arg15 socialProfiles:(id)arg16 postalAddresses:(id)arg17 ;
-(id)initWithContactsContact:(id)arg1 ;
-(id)initWithFoundInAppsContact:(id)arg1 ;
-(long long)foundInAppsRecordIdentifierNumberWithError:(id*)arg1 ;
-(id)contactsContactIdentifierWithError:(id*)arg1 ;
-(void)_generateLocalizedFullName;
-(void)setIdentifierForTesting:(id)arg1 ;
-(NSString *)localizedFullName;
@end

