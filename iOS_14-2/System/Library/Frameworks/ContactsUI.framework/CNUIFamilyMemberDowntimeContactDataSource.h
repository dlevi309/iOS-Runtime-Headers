/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


#import <ContactsUI/ContactsUI-Structs.h>
@class NSString, CNContactStore, CNContact, NSArray, NSMutableArray;

@interface CNUIFamilyMemberDowntimeContactDataSource : NSObject {

	BOOL _isShowingFamilyMemberContacts;
	BOOL _meContactNeedsUpdate;
	NSString* _filterString;
	CNContactStore* _store;
	CNContact* _meContact;
	NSArray* _familyMembers;
	NSArray* _filteredSections;
	NSArray* _sections;
	NSMutableArray* _selectedContactItems;
	NSArray* _requiredKeys;

}

@property (nonatomic,retain) CNContactStore * store;                             //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL meContactNeedsUpdate;                          //@synthesize meContactNeedsUpdate=_meContactNeedsUpdate - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                              //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) NSArray * familyMembers;                            //@synthesize familyMembers=_familyMembers - In the implementation block
@property (nonatomic,retain) NSArray * filteredSections;                         //@synthesize filteredSections=_filteredSections - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                 //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectedContactItems;              //@synthesize selectedContactItems=_selectedContactItems - In the implementation block
@property (nonatomic,readonly) NSArray * requiredKeys;                           //@synthesize requiredKeys=_requiredKeys - In the implementation block
@property (nonatomic,copy) NSString * filterString;                              //@synthesize filterString=_filterString - In the implementation block
@property (assign,nonatomic) BOOL isShowingFamilyMemberContacts;                 //@synthesize isShowingFamilyMemberContacts=_isShowingFamilyMemberContacts - In the implementation block
+(BOOL)isErrorPossiblyRelatedToExtraStores:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(long long)sortOrder;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(BOOL)meContactNeedsUpdate;
-(void)setMeContactNeedsUpdate:(BOOL)arg1 ;
-(id)selectedContacts;
-(void)setStore:(CNContactStore *)arg1 ;
-(CNContactStore *)store;
-(long long)numberOfSections;
-(NSArray *)sections;
-(id)preferredForNameMeContactWithKeysToFetch:(id)arg1 ;
-(NSString *)filterString;
-(id)initWithStore:(id)arg1 familyMembers:(id)arg2 requiredKeys:(id)arg3 ;
-(id)contactItemForIndexPath:(id)arg1 ;
-(void)setContactItemSelected:(BOOL)arg1 forIndexPath:(id)arg2 ;
-(void)setFilterString:(NSString *)arg1 ;
-(void)filterSectionsForString:(id)arg1 ;
-(void)_loadAllContactsIfNeeded;
-(id)labelForFamilyMember:(id)arg1 ;
-(void)postProcessForFamilyMembersWithContacts:(id)arg1 ;
-(BOOL)isShowingFamilyMemberContacts;
-(void)setIsShowingFamilyMemberContacts:(BOOL)arg1 ;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(NSArray *)filteredSections;
-(NSArray *)requiredKeys;
-(void)setFilteredSections:(NSArray *)arg1 ;
-(NSMutableArray *)selectedContactItems;
-(void)setSelectedContactItems:(NSMutableArray *)arg1 ;
-(id)titleForSection:(long long)arg1 ;
-(id)preferredForNameMeContactIdentifier;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(NSArray *)familyMembers;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

