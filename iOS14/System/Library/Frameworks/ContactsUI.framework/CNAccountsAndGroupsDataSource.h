/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class CNContactStoreFilter, CNContactStore, NSArray, CNAccountsAndGroupsItem;

@interface CNAccountsAndGroupsDataSource : NSObject {

	CNContactStoreFilter* _filter;
	CNContactStoreFilter* _serverFilter;
	BOOL _hidesSearchableSources;
	CNContactStore* _store;
	NSArray* _sections;
	CNAccountsAndGroupsItem* _rootItem;

}

@property (nonatomic,retain) CNContactStore * store;                                      //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                          //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsItem * rootItem;                          //@synthesize rootItem=_rootItem - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources;                                 //@synthesize hidesSearchableSources=_hidesSearchableSources - In the implementation block
@property (nonatomic,copy) CNContactStoreFilter * filter; 
@property (nonatomic,readonly) CNContactStoreFilter * serverFilter; 
@property (nonatomic,readonly) CNAccountsAndGroupsItem * showAllSectionItem; 
@property (getter=isTrivial,nonatomic,readonly) BOOL trivial; 
-(void)setSections:(NSArray *)arg1 ;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(CNContactStoreFilter *)filter;
-(void)setStore:(CNContactStore *)arg1 ;
-(CNContactStore *)store;
-(CNAccountsAndGroupsItem *)rootItem;
-(id)initWithStore:(id)arg1 ;
-(NSArray *)sections;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(CNAccountsAndGroupsItem *)showAllSectionItem;
-(void)setServerFilterForItem:(id)arg1 ;
-(void)reload;
-(void)setRootItem:(CNAccountsAndGroupsItem *)arg1 ;
-(void)_applyFilter;
-(void)_reloadSections;
-(void)removeServerFilter;
-(BOOL)isTrivial;
-(BOOL)hidesSearchableSources;
-(CNContactStoreFilter *)serverFilter;
-(void)updateRootItemSelection;
@end

