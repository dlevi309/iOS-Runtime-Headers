/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNContactsUserDefaults.h>

@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults {

	CNFoundationUserDefaults* _foundationUserDefaults;

}

@property (retain) CNFoundationUserDefaults * foundationUserDefaults;              //@synthesize foundationUserDefaults=_foundationUserDefaults - In the implementation block
-(id)init;
-(id)countryCode;
-(long long)shortNameFormat;
-(void)setShortNameFormat:(long long)arg1 ;
-(long long)sortOrder;
-(BOOL)shortNameFormatPrefersNicknames;
-(BOOL)isShortNameFormatEnabled;
-(long long)displayNameOrder;
-(long long)newContactDisplayNameOrder;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(id)filteredGroupAndContainerIDs;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
-(id)initWithFoundationUserDefaults:(id)arg1 ;
-(CNFoundationUserDefaults *)foundationUserDefaults;
-(void)setFoundationUserDefaults:(CNFoundationUserDefaults *)arg1 ;
@end

