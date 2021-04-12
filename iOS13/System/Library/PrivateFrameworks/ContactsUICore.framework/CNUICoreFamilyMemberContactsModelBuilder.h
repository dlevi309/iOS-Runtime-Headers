/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class NSArray, CNUICoreContactTypeAssessor;

@interface CNUICoreFamilyMemberContactsModelBuilder : NSObject {

	BOOL _includeWhitelistedContactsOnly;
	BOOL _sortItemsByName;
	BOOL _markItemsAsPersisted;
	NSArray* _contacts;
	CNUICoreContactTypeAssessor* _contactTypeAssessor;
	long long _contactFormatterStyle;

}

@property (nonatomic,readonly) NSArray * contacts;                                             //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) CNUICoreContactTypeAssessor * contactTypeAssessor;              //@synthesize contactTypeAssessor=_contactTypeAssessor - In the implementation block
@property (nonatomic,readonly) long long contactFormatterStyle;                                //@synthesize contactFormatterStyle=_contactFormatterStyle - In the implementation block
@property (nonatomic,readonly) BOOL includeWhitelistedContactsOnly;                            //@synthesize includeWhitelistedContactsOnly=_includeWhitelistedContactsOnly - In the implementation block
@property (nonatomic,readonly) BOOL sortItemsByName;                                           //@synthesize sortItemsByName=_sortItemsByName - In the implementation block
@property (nonatomic,readonly) BOOL markItemsAsPersisted;                                      //@synthesize markItemsAsPersisted=_markItemsAsPersisted - In the implementation block
+(id)itemsBySortingItems:(id)arg1 ;
+(BOOL)shouldIncludeContact:(id)arg1 givenIncludeWhitelistedContactsOnlySetting:(BOOL)arg2 ;
+(id)familyMemberContactItemFromContact:(id)arg1 contactFormatterStyle:(long long)arg2 contactTypeAssessor:(id)arg3 itemHasBeenPersisted:(BOOL)arg4 ;
+(id)uniqueFamilyMemberContactItems:(id)arg1 ;
+(id)formattedNameOfContact:(id)arg1 contactFormatterStyle:(long long)arg2 ;
+(id)placeholderNameForNamelessContact:(id)arg1 ;
+(id)firstDisplayableEmailAddressForContact:(id)arg1 ;
+(id)firstDisplayablePhoneNumberForContact:(id)arg1 ;
-(id)init;
-(NSArray *)contacts;
-(id)build;
-(long long)contactFormatterStyle;
-(id)initWithContacts:(id)arg1 contactTypeAssessor:(id)arg2 contactFormatterStyle:(long long)arg3 includeWhitelistedContactsOnly:(BOOL)arg4 sortItemsByName:(BOOL)arg5 markItemsAsPersisted:(BOOL)arg6 ;
-(CNUICoreContactTypeAssessor *)contactTypeAssessor;
-(id)initWithContacts:(id)arg1 contactTypeAssessor:(id)arg2 contactFormatterStyle:(long long)arg3 includeWhitelistedContactsOnly:(BOOL)arg4 sortItemsByName:(BOOL)arg5 ;
-(BOOL)includeWhitelistedContactsOnly;
-(BOOL)markItemsAsPersisted;
-(id)sortedFamilyMemberContactItems:(id)arg1 ;
-(BOOL)sortItemsByName;
@end

