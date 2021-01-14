/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNContactDataSource.h>

@protocol CNCancelable, CNSchedulerProvider;
@class CNContactDataSourceSafeDelegate, CNContactFormatter, CNContactStore, CNContactStoreFilter, NSArray, CNPublishingSubject, NSMutableArray, NSDictionary, NSString, CNContactFilter;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)contacts;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(CNContactStoreFilter *)filter;
-(void)setStore:(CNContactStore *)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(CNContactStore *)store;
-(id<CNContactDataSourceDelegate>)delegate;
-(id)initWithStore:(id)arg1 ;
-(NSDictionary *)contactMatchInfos;
-(NSArray *)sections;
-(BOOL)shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(BOOL)canReload;
-(void)reload;
-(NSArray *)indexSections;
-(id)preferredForNameMeContactIdentifier;
-(CNContactFilter *)effectiveFilter;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3 ;
-(void)invalidate;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1 ;
-(CNPublishingSubject *)reloadStream;
-(void)reloadWithRequest:(id)arg1 ;
-(void)invalidateResults;
-(void)invalidateSearch;
-(id<CNCancelable>)searchCancelationToken;
-(NSArray *)allKeysToFetchForTransientContacts;
-(void)setAllKeysToFetchForTransientContacts:(NSArray *)arg1 ;
-(void)setSearchCancelationToken:(id<CNCancelable>)arg1 ;
-(id<CNSchedulerProvider>)reloadSchedulerProvider;
-(void)setReloadSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)setReloadStream:(CNPublishingSubject *)arg1 ;
-(NSMutableArray *)resultingContacts;
-(void)setResultingContacts:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)dealloc;
-(id)indexPathForContact:(id)arg1 ;
@end

