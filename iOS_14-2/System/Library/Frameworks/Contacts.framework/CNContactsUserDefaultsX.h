/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNContactsUserDefaults.h>

@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults {

	CNFoundationUserDefaults* _foundationUserDefaults;

}

@property (retain) CNFoundationUserDefaults * foundationUserDefaults;              //@synthesize foundationUserDefaults=_foundationUserDefaults - In the implementation block
-(long long)sortOrder;
-(long long)newContactDisplayNameOrder;
-(id)countryCode;
-(void)setShortNameFormat:(long long)arg1 ;
-(id)init;
-(BOOL)isShortNameFormatEnabled;
-(void)setFoundationUserDefaults:(CNFoundationUserDefaults *)arg1 ;
-(long long)shortNameFormat;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(id)initWithFoundationUserDefaults:(id)arg1 ;
-(CNFoundationUserDefaults *)foundationUserDefaults;
-(BOOL)shortNameFormatPrefersNicknames;
-(id)filteredGroupAndContainerIDs;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(long long)displayNameOrder;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
@end

