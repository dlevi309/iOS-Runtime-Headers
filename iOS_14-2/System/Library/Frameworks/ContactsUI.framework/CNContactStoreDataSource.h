/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isErrorPossiblyRelatedToExtraStores:(id)arg1 ;
+(id)keyPathsForValuesAffectingEffectiveFilter;
-(long long)sortOrder;
-(void)setManagedConfiguration:(CNManagedConfiguration *)arg1 ;
-(CNManagedConfiguration *)managedConfiguration;
-(NSDictionary *)localizedSectionHeaders;
-(void)setMeContact:(CNContact *)arg1 ;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(NSArray *)keysToFetch;
-(void)contactStoreDidChange:(id)arg1 ;
-(NSDictionary *)localizedSectionIndices;
-(CNContact *)meContact;
-(NSArray *)contacts;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(BOOL)meContactNeedsUpdate;
-(CNContactStoreSnapshot *)currentSnapshot;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(CNContactStoreFilter *)filter;
-(void)setMeContactNeedsUpdate:(BOOL)arg1 ;
-(void)setStore:(CNContactStore *)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(NSArray *)indexSectionsArray;
-(CNContactStore *)store;
-(BOOL)isLoading;
-(void)_reloadSynchronously:(BOOL)arg1 ;
-(id<CNContactDataSourceDelegate>)delegate;
-(id)initWithStore:(id)arg1 ;
-(NSDictionary *)contactMatchInfos;
-(NSArray *)sections;
-(id)preferredForNameMeContactWithKeysToFetch:(id)arg1 ;
-(void)setCurrentSnapshot:(CNContactStoreSnapshot *)arg1 ;
-(BOOL)fetchUnified;
-(void)reloadAsynchronously;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(BOOL)canReload;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(void)registerForRelevantChangeNotifications;
-(void)reload;
-(NSArray *)indexSections;
-(id)preferredForNameMeContactIdentifier;
-(CNContactFilter *)effectiveFilter;
-(void)setFetchUnified:(BOOL)arg1 ;
-(void)reset;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3 ;
-(void)invalidate;
-(void)contactStoreMeContactDidChange:(id)arg1 ;
-(NSDictionary *)sectionHeadersDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)dealloc;
-(id)indexPathForContact:(id)arg1 ;
@end

