/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNContactChangesObserver.h>
#import <libobjc.A.dylib/CNContactDataSource.h>

@protocol CNContactDataSourceDelegate;
@class NSArray, NSDictionary, NSString, CNContactStore, CNContactFilter, CNContactFormatter, NSMutableArray, NSMapTable;

@interface CNContactCustomDataSource : NSObject <CNContactChangesObserver, CNContactDataSource> {

	BOOL _autoUpdateContacts;
	BOOL _observingContacts;
	id<CNContactDataSourceDelegate> delegate;
	CNContactFilter* _filter;
	NSMutableArray* _allContacts;
	NSArray* _keysToFetch;
	NSMapTable* _identifiersToIndexes;
	NSArray* _filteredContacts;
	CNContactFormatter* _contactFormatterImpl;

}

@property (nonatomic,retain) NSMutableArray * allContacts;                                                 //@synthesize allContacts=_allContacts - In the implementation block
@property (nonatomic,retain) NSArray * keysToFetch;                                                        //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (nonatomic,retain) NSMapTable * identifiersToIndexes;                                            //@synthesize identifiersToIndexes=_identifiersToIndexes - In the implementation block
@property (nonatomic,retain) NSArray * filteredContacts;                                                   //@synthesize filteredContacts=_filteredContacts - In the implementation block
@property (assign,nonatomic) BOOL observingContacts;                                                       //@synthesize observingContacts=_observingContacts - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatterImpl;                                    //@synthesize contactFormatterImpl=_contactFormatterImpl - In the implementation block
@property (assign,nonatomic) BOOL autoUpdateContacts;                                                      //@synthesize autoUpdateContacts=_autoUpdateContacts - In the implementation block
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
@property (nonatomic,readonly) CNContactStore * store; 
@property (nonatomic,copy) CNContactFilter * filter;                                                       //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) CNContactFilter * effectiveFilter; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter; 
@property (nonatomic,readonly) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled; 
-(NSArray *)keysToFetch;
-(NSArray *)contacts;
-(void)setFilter:(CNContactFilter *)arg1 ;
-(void)contactDidChange:(id)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(CNContactFilter *)filter;
-(CNContactFormatter *)contactFormatter;
-(id<CNContactDataSourceDelegate>)delegate;
-(NSDictionary *)contactMatchInfos;
-(NSArray *)sections;
-(NSMutableArray *)allContacts;
-(id)initWithContacts:(id)arg1 ;
-(void)setAutoUpdateContacts:(BOOL)arg1 ;
-(id)initWithContacts:(id)arg1 keysToFetch:(id)arg2 ;
-(id)initWithContacts:(id)arg1 keysToFetch:(id)arg2 filter:(id)arg3 ;
-(void)_updateFilter;
-(void)_startObservingContacts;
-(void)_stopObservingContacts;
-(void)_updateContactsObserving;
-(void)_sendDataSourceDidChange;
-(BOOL)autoUpdateContacts;
-(void)setAllContacts:(NSMutableArray *)arg1 ;
-(NSMapTable *)identifiersToIndexes;
-(void)setIdentifiersToIndexes:(NSMapTable *)arg1 ;
-(NSArray *)filteredContacts;
-(void)setFilteredContacts:(NSArray *)arg1 ;
-(BOOL)observingContacts;
-(void)setObservingContacts:(BOOL)arg1 ;
-(CNContactFormatter *)contactFormatterImpl;
-(void)setContactFormatterImpl:(CNContactFormatter *)arg1 ;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(BOOL)canReload;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(NSArray *)indexSections;
-(id)preferredForNameMeContactIdentifier;
-(CNContactFilter *)effectiveFilter;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)indexPathForContact:(id)arg1 ;
@end

