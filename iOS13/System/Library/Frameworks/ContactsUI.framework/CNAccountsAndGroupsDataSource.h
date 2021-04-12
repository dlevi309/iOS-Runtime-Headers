/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) CNContactStore * store;                             //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                 //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsItem * rootItem;                 //@synthesize rootItem=_rootItem - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources;                        //@synthesize hidesSearchableSources=_hidesSearchableSources - In the implementation block
@property (nonatomic,copy) CNContactStoreFilter * filter; 
@property (nonatomic,readonly) CNContactStoreFilter * serverFilter; 
@property (getter=isTrivial,nonatomic,readonly) BOOL trivial; 
-(id)initWithStore:(id)arg1 ;
-(CNContactStore *)store;
-(void)setStore:(CNContactStore *)arg1 ;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(CNContactStoreFilter *)filter;
-(void)reload;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(BOOL)hidesSearchableSources;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(void)_reloadSections;
-(void)_applyFilter;
-(void)setServerFilterForItem:(id)arg1 ;
-(CNContactStoreFilter *)serverFilter;
-(BOOL)isTrivial;
-(void)updateRootItemSelection;
-(CNAccountsAndGroupsItem *)rootItem;
-(void)setRootItem:(CNAccountsAndGroupsItem *)arg1 ;
@end

