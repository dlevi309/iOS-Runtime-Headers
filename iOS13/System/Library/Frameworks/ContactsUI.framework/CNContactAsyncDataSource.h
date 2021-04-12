/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNContactDataSource.h>

@protocol CNCancelable, CNSchedulerProvider;
@class CNContactDataSourceSafeDelegate, CNContactFormatter, CNContactStore, CNContactStoreFilter, NSArray, CNPublishingSubject, NSMutableArray, NSString, NSDictionary, CNContactFilter;

@interface CNContactAsyncDataSource : NSObject <CNContactDataSource> {

	CNContactDataSourceSafeDelegate* _delegate;
	CNContactFormatter* _contactFormatter;
	CNContactStore* _store;
	CNContactStoreFilter* _filter;
	NSArray* _allKeysToFetchForTransientContacts;
	id<CNCancelable> _searchCancelationToken;
	id<CNSchedulerProvider> _reloadSchedulerProvider;
	CNPublishingSubject* _reloadStream;
	NSMutableArray* _resultingContacts;

}

@property (nonatomic,retain) CNContactStore * store;                                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<CNCancelable> searchCancelationToken;                                      //@synthesize searchCancelationToken=_searchCancelationToken - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> reloadSchedulerProvider;                              //@synthesize reloadSchedulerProvider=_reloadSchedulerProvider - In the implementation block
@property (nonatomic,retain) CNPublishingSubject * reloadStream;                                           //@synthesize reloadStream=_reloadStream - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultingContacts;                                           //@synthesize resultingContacts=_resultingContacts - In the implementation block
@property (nonatomic,copy) CNContactStoreFilter * filter;                                                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSArray * allKeysToFetchForTransientContacts;                                 //@synthesize allKeysToFetchForTransientContacts=_allKeysToFetchForTransientContacts - In the implementation block
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
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                        //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,readonly) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(id<CNContactDataSourceDelegate>)delegate;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(NSString *)displayName;
-(id)initWithStore:(id)arg1 ;
-(CNContactStore *)store;
-(void)setStore:(CNContactStore *)arg1 ;
-(NSArray *)contacts;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(CNContactStoreFilter *)filter;
-(void)reload;
-(NSArray *)sections;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(NSArray *)indexSections;
-(BOOL)canReload;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3 ;
-(id)preferredForNameMeContactIdentifier;
-(CNContactFilter *)effectiveFilter;
-(BOOL)shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
-(id)indexPathForContact:(id)arg1 ;
-(NSDictionary *)contactMatchInfos;
-(void)reloadWithRequest:(id)arg1 ;
-(void)invalidateResults;
-(void)invalidateSearch;
-(NSArray *)allKeysToFetchForTransientContacts;
-(void)setAllKeysToFetchForTransientContacts:(NSArray *)arg1 ;
-(id<CNCancelable>)searchCancelationToken;
-(void)setSearchCancelationToken:(id<CNCancelable>)arg1 ;
-(id<CNSchedulerProvider>)reloadSchedulerProvider;
-(void)setReloadSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(CNPublishingSubject *)reloadStream;
-(void)setReloadStream:(CNPublishingSubject *)arg1 ;
-(NSMutableArray *)resultingContacts;
-(void)setResultingContacts:(NSMutableArray *)arg1 ;
@end

