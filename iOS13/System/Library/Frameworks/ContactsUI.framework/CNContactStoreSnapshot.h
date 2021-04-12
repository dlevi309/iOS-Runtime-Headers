/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol OS_dispatch_semaphore;
#import <ContactsUI/ContactsUI-Structs.h>
@class NSMapTable, NSObject, NSArray, CNContactMatchSummarizer, NSMutableAttributedString, CNContactStoreDataSource, CNContactStoreFilter, CNManagedConfiguration, NSMutableDictionary, CNContactDataSourceLIFOScheduler, NSPointerArray, NSMutableArray;

@interface CNContactStoreSnapshot : NSObject {

	unsigned long long _contactsCount;
	NSMapTable* _contactsCache;
	NSObject*<OS_dispatch_semaphore> _cacheAccessSemaphore;
	NSRange _currentlyLoadingBackgroundRange;
	NSArray* _sections;
	NSArray* _indexSections;
	CNContactMatchSummarizer* _summarizer;
	NSMutableAttributedString* _emptyExcerptInstanceMarker;
	unsigned long long _lastRequestedIndex;
	CNContactStoreDataSource* _dataSource;
	CNContactStoreFilter* _filter;
	CNManagedConfiguration* _managedConfiguration;
	NSMutableDictionary* _contactMatchInfos;
	CNContactDataSourceLIFOScheduler* _summarizationQueue;
	NSPointerArray* _summarizationFutures;
	NSMapTable* _identifiersToIndexPath;
	NSMutableArray* _batchContactIdentifiers;

}

@property (assign,nonatomic,__weak) CNContactStoreDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) CNContactStoreFilter * filter;                                        //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) CNManagedConfiguration * managedConfiguration;                        //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSMutableDictionary * contactMatchInfos;                            //@synthesize contactMatchInfos=_contactMatchInfos - In the implementation block
@property (nonatomic,readonly) CNContactDataSourceLIFOScheduler * summarizationQueue;              //@synthesize summarizationQueue=_summarizationQueue - In the implementation block
@property (nonatomic,readonly) NSPointerArray * summarizationFutures;                              //@synthesize summarizationFutures=_summarizationFutures - In the implementation block
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (nonatomic,readonly) NSMapTable * identifiersToIndexPath;                                //@synthesize identifiersToIndexPath=_identifiersToIndexPath - In the implementation block
@property (nonatomic,readonly) NSMutableArray * batchContactIdentifiers;                           //@synthesize batchContactIdentifiers=_batchContactIdentifiers - In the implementation block
-(id)init;
-(void)dealloc;
-(CNContactStoreDataSource *)dataSource;
-(NSArray *)contacts;
-(void)setDataSource:(CNContactStoreDataSource *)arg1 ;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(CNContactStoreFilter *)filter;
-(NSArray *)sections;
-(CNManagedConfiguration *)managedConfiguration;
-(void)setManagedConfiguration:(CNManagedConfiguration *)arg1 ;
-(id)_keysToFetch;
-(NSArray *)indexSections;
-(NSMutableDictionary *)contactMatchInfos;
-(unsigned long long)countOf_contacts;
-(id)objectIn_contactsAtIndex:(unsigned long long)arg1 ;
-(void)_loadContactsInRange:(NSRange)arg1 inBackground:(BOOL)arg2 ;
-(void)_generateExcerptsInRange:(NSRange)arg1 ;
-(void)_loadAllContacts;
-(void)prepareEnoughContacts;
-(void)prepareAllContacts;
-(CNContactDataSourceLIFOScheduler *)summarizationQueue;
-(NSPointerArray *)summarizationFutures;
-(NSMapTable *)identifiersToIndexPath;
-(NSMutableArray *)batchContactIdentifiers;
@end

