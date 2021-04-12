/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNContactDataSource.h>

@protocol OS_dispatch_queue, CNScheduler, CNContactDataSourceDelegate;
@class CNContactStoreSnapshot, NSDictionary, NSObject, CNContactFormatter, CNContactStoreFilter, CNContactStore, CNManagedConfiguration, NSArray, CNContact, NSString, CNContactFilter;

@interface CNContactStoreDataSource : NSObject <CNContactDataSource> {

	CNContactStoreSnapshot* _currentSnapshot;
	NSDictionary* _sectionHeadersDictionary;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _loadingSnapshot;
	id<CNScheduler> _mainThreadScheduler;
	BOOL _fetchUnified;
	BOOL _meContactNeedsUpdate;
	CNContactFormatter* contactFormatter;
	id<CNContactDataSourceDelegate> delegate;
	CNContactStoreFilter* _filter;
	CNContactStore* _store;
	CNManagedConfiguration* _managedConfiguration;
	NSArray* _keysToFetch;
	CNContact* _meContact;
	NSDictionary* _localizedSectionIndices;

}

@property (nonatomic,copy) CNContact * meContact;                                                          //@synthesize meContact=_meContact - In the implementation block
@property (assign,nonatomic) BOOL meContactNeedsUpdate;                                                    //@synthesize meContactNeedsUpdate=_meContactNeedsUpdate - In the implementation block
@property (nonatomic,retain) CNContactStore * store;                                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) CNContactStoreSnapshot * currentSnapshot; 
@property (nonatomic,readonly) long long sortOrder; 
@property (nonatomic,readonly) NSDictionary * sectionHeadersDictionary; 
@property (nonatomic,readonly) NSArray * indexSectionsArray; 
@property (nonatomic,readonly) NSDictionary * localizedSectionHeaders; 
@property (nonatomic,readonly) NSDictionary * localizedSectionIndices;                                     //@synthesize localizedSectionIndices=_localizedSectionIndices - In the implementation block
@property (nonatomic,copy) CNContactStoreFilter * filter;                                                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) CNManagedConfiguration * managedConfiguration;                                //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * keysToFetch;                                                        //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) BOOL fetchUnified;                                                            //@synthesize fetchUnified=_fetchUnified - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSDictionary * contactMatchInfos; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (assign,nonatomic,__weak) id<CNContactDataSourceDelegate> delegate; 
@property (nonatomic,readonly) BOOL canReload; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) CNContactFilter * effectiveFilter; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter; 
@property (nonatomic,readonly) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled; 
+(BOOL)isErrorPossiblyRelatedToExtraStores:(id)arg1 ;
+(id)keyPathsForValuesAffectingEffectiveFilter;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(id<CNContactDataSourceDelegate>)delegate;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)reset;
-(NSString *)displayName;
-(id)initWithStore:(id)arg1 ;
-(CNContactStore *)store;
-(void)setStore:(CNContactStore *)arg1 ;
-(NSArray *)contacts;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(CNContactStoreFilter *)filter;
-(void)reload;
-(NSArray *)sections;
-(BOOL)isLoading;
-(long long)sortOrder;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(NSArray *)keysToFetch;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(CNManagedConfiguration *)managedConfiguration;
-(void)setManagedConfiguration:(CNManagedConfiguration *)arg1 ;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(void)contactStoreDidChange:(id)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(NSArray *)indexSections;
-(BOOL)canReload;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3 ;
-(id)preferredForNameMeContactIdentifier;
-(id)preferredForNameMeContactWithKeysToFetch:(id)arg1 ;
-(BOOL)meContactNeedsUpdate;
-(void)setMeContactNeedsUpdate:(BOOL)arg1 ;
-(CNContactFilter *)effectiveFilter;
-(id)indexPathForContact:(id)arg1 ;
-(NSDictionary *)contactMatchInfos;
-(NSArray *)indexSectionsArray;
-(NSDictionary *)localizedSectionHeaders;
-(NSDictionary *)sectionHeadersDictionary;
-(BOOL)fetchUnified;
-(void)registerForRelevantChangeNotifications;
-(void)contactStoreMeContactDidChange:(id)arg1 ;
-(void)reloadAsynchronously;
-(void)_reloadSynchronously:(BOOL)arg1 ;
-(void)setCurrentSnapshot:(CNContactStoreSnapshot *)arg1 ;
-(CNContactStoreSnapshot *)currentSnapshot;
-(void)setFetchUnified:(BOOL)arg1 ;
-(NSDictionary *)localizedSectionIndices;
@end

