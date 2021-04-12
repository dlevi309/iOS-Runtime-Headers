/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class NSArray, CNUICoreContactTypeAssessor;

@interface CNUICoreFamilyMemberContactsModelBuilder : NSObject {

	BOOL _includeWhitelistedContactsOnly;
	BOOL _sortItemsByName;
	BOOL _markItemsAsPersisted;
	BOOL _markItemsAsProposed;
	NSArray* _contacts;
	CNUICoreContactTypeAssessor* _contactTypeAssessor;
	long long _contactFormatterStyle;

}

@property (nonatomic,retain) NSArray * contacts;                                             //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) CNUICoreContactTypeAssessor * contactTypeAssessor;              //@synthesize contactTypeAssessor=_contactTypeAssessor - In the implementation block
@property (assign,nonatomic) long long contactFormatterStyle;                                //@synthesize contactFormatterStyle=_contactFormatterStyle - In the implementation block
@property (assign,nonatomic) BOOL includeWhitelistedContactsOnly;                            //@synthesize includeWhitelistedContactsOnly=_includeWhitelistedContactsOnly - In the implementation block
@property (assign,nonatomic) BOOL sortItemsByName;                                           //@synthesize sortItemsByName=_sortItemsByName - In the implementation block
@property (assign,nonatomic) BOOL markItemsAsPersisted;                                      //@synthesize markItemsAsPersisted=_markItemsAsPersisted - In the implementation block
@property (assign,nonatomic) BOOL markItemsAsProposed;                                       //@synthesize markItemsAsProposed=_markItemsAsProposed - In the implementation block
+(id)itemsBySortingItems:(id)arg1 ;
+(BOOL)shouldIncludeContact:(id)arg1 givenIncludeWhitelistedContactsOnlySetting:(BOOL)arg2 ;
+(id)familyMemberContactItemFromContact:(id)arg1 contactFormatterStyle:(long long)arg2 contactTypeAssessor:(id)arg3 itemHasBeenPersisted:(BOOL)arg4 itemIsProposed:(BOOL)arg5 ;
+(id)uniqueFamilyMemberContactItems:(id)arg1 ;
+(id)formattedNameOfContact:(id)arg1 contactFormatterStyle:(long long)arg2 ;
+(id)placeholderNameForNamelessContact:(id)arg1 ;
+(id)firstDisplayableEmailAddressForContact:(id)arg1 ;
+(id)firstDisplayablePhoneNumberForContact:(id)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(id)build;
-(id)init;
-(void)setMarkItemsAsPersisted:(BOOL)arg1 ;
-(void)setContactTypeAssessor:(CNUICoreContactTypeAssessor *)arg1 ;
-(long long)contactFormatterStyle;
-(void)setContactFormatterStyle:(long long)arg1 ;
-(void)setSortItemsByName:(BOOL)arg1 ;
-(CNUICoreContactTypeAssessor *)contactTypeAssessor;
-(BOOL)includeWhitelistedContactsOnly;
-(BOOL)markItemsAsPersisted;
-(BOOL)markItemsAsProposed;
-(id)sortedFamilyMemberContactItems:(id)arg1 ;
-(BOOL)sortItemsByName;
-(void)setIncludeWhitelistedContactsOnly:(BOOL)arg1 ;
-(void)setMarkItemsAsProposed:(BOOL)arg1 ;
@end

