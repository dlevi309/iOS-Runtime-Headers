/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(CNContactStore *)store;
-(void)setStore:(CNContactStore *)arg1 ;
-(long long)numberOfSections;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(long long)sortOrder;
-(NSArray *)familyMembers;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(NSArray *)requiredKeys;
-(id)initWithStore:(id)arg1 familyMembers:(id)arg2 requiredKeys:(id)arg3 ;
-(id)titleForSection:(long long)arg1 ;
-(id)contactItemForIndexPath:(id)arg1 ;
-(id)selectedContacts;
-(void)setContactItemSelected:(BOOL)arg1 forIndexPath:(id)arg2 ;
-(void)setFilterString:(NSString *)arg1 ;
-(void)filterSectionsForString:(id)arg1 ;
-(void)_loadAllContactsIfNeeded;
-(void)postProcessForFamilyMembersWithContacts:(id)arg1 ;
-(id)labelForFamilyMember:(id)arg1 ;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3 ;
-(id)preferredForNameMeContactIdentifier;
-(id)preferredForNameMeContactWithKeysToFetch:(id)arg1 ;
-(NSString *)filterString;
-(BOOL)isShowingFamilyMemberContacts;
-(void)setIsShowingFamilyMemberContacts:(BOOL)arg1 ;
-(BOOL)meContactNeedsUpdate;
-(void)setMeContactNeedsUpdate:(BOOL)arg1 ;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(NSArray *)filteredSections;
-(void)setFilteredSections:(NSArray *)arg1 ;
-(NSMutableArray *)selectedContactItems;
-(void)setSelectedContactItems:(NSMutableArray *)arg1 ;
@end

