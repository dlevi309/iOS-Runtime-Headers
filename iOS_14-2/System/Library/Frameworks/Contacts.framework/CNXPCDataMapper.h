/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) NSString * legacyTetheredSyncDeviceAnchor; 
@property (nonatomic,retain) NSString * legacyTetheredSyncComputerAnchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactBuffersDecoderForFetchRequest:(id)arg1 ;
+(id)serviceProtocolInterface;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(id)currentHistoryToken;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)authorizedKeysForContactKeys:(id)arg1 error:(id*)arg2 ;
-(id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2 ;
-(id)currentHistoryAnchor;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)identifierWithError:(id*)arg1 ;
-(BOOL)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4 ;
-(id)meContactIdentifiers:(id*)arg1 ;
-(id)init;
-(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)contactObservableForFetchRequest:(id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4 ;
-(id)defaultContainerIdentifier;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2 ;
-(id)favoritesEntryDictionariesAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeFavoritesPropertyListData:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(id)initWithContactsEnvironment:(id)arg1 connection:(id)arg2 ;
-(void)dealloc;
@end

