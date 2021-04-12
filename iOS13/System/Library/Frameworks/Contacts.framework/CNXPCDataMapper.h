/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNDataMapper.h>

@protocol CNContactsLogger, CNXPCDataMapperService;
@class NSString, NSXPCConnection;

@interface CNXPCDataMapper : NSObject <CNDataMapper> {

	NSXPCConnection* _connection;
	id<CNContactsLogger> _logger;
	id<CNXPCDataMapperService> _serviceProxy;

}

@property (retain) NSXPCConnection * connection;                                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<CNContactsLogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) id<CNXPCDataMapperService> serviceProxy;                  //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * legacyTetheredSyncDeviceAnchor; 
@property (nonatomic,retain) NSString * legacyTetheredSyncComputerAnchor; 
+(id)serviceProtocolInterface;
+(id)cursorProtocolInterface;
+(id)contactBuffersDecoderForFetchRequest:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id<CNContactsLogger>)logger;
-(id)currentHistoryToken;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2 ;
-(id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2 ;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)meContactIdentifiers:(id*)arg1 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2 ;
-(id)initWithContactsEnvironment:(id)arg1 connection:(id)arg2 ;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2 ;
-(id)remoteResultForSelector:(SEL)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(id<CNXPCDataMapperService>)serviceProxy;
-(id)remoteResultForSelector:(SEL)arg1 error:(id*)arg2 ;
-(id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 error:(id*)arg3 ;
-(BOOL)fetchAndDecodeEncodedContactsForFetchRequest:(id)arg1 error:(id*)arg2 cancelationToken:(id)arg3 batchHandler:(/*^block*/id)arg4 ;
-(BOOL)fetchContactsForFetchRequest:(id)arg1 error:(id*)arg2 batchHandler:(/*^block*/id)arg3 ;
-(BOOL)fetchEncodedContactsForFetchRequest:(id)arg1 error:(id*)arg2 cancelationToken:(id)arg3 batchHandler:(/*^block*/id)arg4 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4 ;
-(id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 queryParameter:(id)arg3 error:(id*)arg4 ;
-(id)authorizedKeysForContactKeys:(id)arg1 error:(id*)arg2 ;
-(id)contactObservableForFetchRequest:(id)arg1 ;
-(id)identifierWithError:(id*)arg1 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)favoritesEntryDictionariesAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeFavoritesPropertyListData:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(id)mapTableFromMatchInfoDictionary:(id)arg1 ;
-(BOOL)reindexSearchableItemsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)verifyIndexWithError:(id*)arg1 ;
-(void)setLogger:(id<CNContactsLogger>)arg1 ;
-(void)setServiceProxy:(id<CNXPCDataMapperService>)arg1 ;
@end

