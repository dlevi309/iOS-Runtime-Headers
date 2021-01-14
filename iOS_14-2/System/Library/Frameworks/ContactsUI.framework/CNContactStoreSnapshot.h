/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setManagedConfiguration:(CNManagedConfiguration *)arg1 ;
-(CNManagedConfiguration *)managedConfiguration;
-(NSArray *)contacts;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(CNContactStoreFilter *)filter;
-(id)init;
-(unsigned long long)countOf_contacts;
-(NSPointerArray *)summarizationFutures;
-(NSMutableDictionary *)contactMatchInfos;
-(NSArray *)sections;
-(void)prepareAllContacts;
-(NSMapTable *)identifiersToIndexPath;
-(CNContactStoreDataSource *)dataSource;
-(void)_loadContactsInRange:(NSRange)arg1 inBackground:(BOOL)arg2 ;
-(CNContactDataSourceLIFOScheduler *)summarizationQueue;
-(void)setDataSource:(CNContactStoreDataSource *)arg1 ;
-(id)objectIn_contactsAtIndex:(unsigned long long)arg1 ;
-(NSArray *)indexSections;
-(void)prepareEnoughContacts;
-(NSMutableArray *)batchContactIdentifiers;
-(void)_generateExcerptsInRange:(NSRange)arg1 ;
-(void)_loadAllContacts;
-(id)_keysToFetch;
-(void)dealloc;
@end

