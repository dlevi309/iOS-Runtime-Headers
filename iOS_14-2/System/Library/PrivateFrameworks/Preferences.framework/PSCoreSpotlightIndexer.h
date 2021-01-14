/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol OS_dispatch_queue;
@class CSSearchableIndex, NSObject, CSTopHitSearchQuery, CSSearchQuery, NSMutableArray, NSDate;

@interface PSCoreSpotlightIndexer : NSObject {

	BOOL _skipManifests;
	CSSearchableIndex* _prefsSearchableIndex;
	NSObject*<OS_dispatch_queue> _spotlightIndexQueue;
	CSTopHitSearchQuery* _searchQuery;
	CSSearchQuery* _hasItemsQuery;
	NSMutableArray* _indexFromControllerLog;

}

@property (nonatomic,retain) CSSearchableIndex * prefsSearchableIndex;                      //@synthesize prefsSearchableIndex=_prefsSearchableIndex - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> spotlightIndexQueue;              //@synthesize spotlightIndexQueue=_spotlightIndexQueue - In the implementation block
@property (nonatomic,retain) CSTopHitSearchQuery * searchQuery;                             //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,retain) CSSearchQuery * hasItemsQuery;                                 //@synthesize hasItemsQuery=_hasItemsQuery - In the implementation block
@property (nonatomic,retain) NSMutableArray * indexFromControllerLog;                       //@synthesize indexFromControllerLog=_indexFromControllerLog - In the implementation block
@property (nonatomic,readonly) BOOL needsIndex; 
@property (nonatomic,readonly) NSDate * lastIndexDate; 
@property (assign,nonatomic) BOOL skipManifests;                                            //@synthesize skipManifests=_skipManifests - In the implementation block
+(id)sharedInstance;
+(id)searchIndexIdentifier;
+(char*)spotlightIndexQueueIdentifier;
-(id)csSearchableItemsFromSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6 ;
-(NSDate *)lastIndexDate;
-(void)setIndexFromControllerLog:(NSMutableArray *)arg1 ;
-(void)setHasIndexed;
-(void)hasfirstPartyIndexItems:(/*^block*/id)arg1 ;
-(void)setNeedsIndex:(BOOL)arg1 ;
-(void)_indexSearchableItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteIndexWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)performYukonManifestMigrationWithCompletion:(/*^block*/id)arg1 ;
-(id)_specifiersPlistPathForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3 ;
-(BOOL)skipManifests;
-(id)_descriptionForSpecifierName:(id)arg1 withParentSpecifierNames:(id)arg2 ;
-(id)searchableItemsFromSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6 ;
-(BOOL)controllerIsBlacklisted:(id)arg1 ;
-(id)_specifiersForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3 ;
-(void)setLastIndexLanguage:(id)arg1 ;
-(void)indexManifestBundlesAtURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(CSSearchableIndex *)prefsSearchableIndex;
-(id)searchableItemForSpecifier:(id)arg1 bundleID:(id)arg2 category:(id)arg3 keywords:(id)arg4 url:(id)arg5 description:(id)arg6 ;
-(void)setLastIndexBuild:(id)arg1 ;
-(void)setNeedsIndex;
-(void)setPrefsSearchableIndex:(CSSearchableIndex *)arg1 ;
-(CSTopHitSearchQuery *)searchQuery;
-(CSSearchQuery *)hasItemsQuery;
-(void)deleteIndexWithDomainIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setSearchQuery:(CSTopHitSearchQuery *)arg1 ;
-(void)setSkipManifests:(BOOL)arg1 ;
-(id)lastIndexLanguage;
-(id)searchableFirstPartyItemClassIdentifier;
-(id)_urlsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2 ;
-(NSMutableArray *)indexFromControllerLog;
-(id)searchableItemsFromManifest:(id)arg1 specifier:(id)arg2 bundle:(id)arg3 ;
-(void)_indexChunkOfSearchableItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_deleteSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)indexThirdPartyAppsWithPrefix:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)manifestFromSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6 ;
-(id)manifestsFromDirectory:(id)arg1 ;
-(void)reindexSpecifiersIfNeeded:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(BOOL)arg4 setHasIndexed:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(id)_bundleForSpecifier:(id)arg1 parentBundle:(id)arg2 ;
-(id)descriptionForCSSearchableItems:(id)arg1 ;
-(id)lastIndexBuild;
-(void)indexSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)topHitSearchForString:(id)arg1 keyboardLanguage:(id)arg2 foundItemsHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_keyValueDictionaryForURL:(id)arg1 ;
-(id)searchableItemClassIdentifier;
-(id)blacklistedControllers;
-(NSObject*<OS_dispatch_queue>)spotlightIndexQueue;
-(id)_rankingHintScoreForURL:(id)arg1 ;
-(void)setHasItemsQuery:(CSSearchQuery *)arg1 ;
-(id)searchableThirdPartyItemClassIdentifier;
-(id)descriptionForCSSearchableItem:(id)arg1 ;
-(void)setLastIndexDate:(NSDate *)arg1 ;
-(id)searchableItemAttributeSetClassIdenfitier;
-(void)deleteSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)needsIndex;
-(void)setSpotlightIndexQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)searchableItemsFromManifestsForSpecifier:(id)arg1 bundle:(id)arg2 ;
-(void)indexManifestBundlesAtURLs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_urlForSpecifier:(id)arg1 identifier:(id)arg2 category:(id)arg3 childCategory:(id*)arg4 prefix:(id)arg5 path:(id*)arg6 baseURL:(id)arg7 shouldLinkToRow:(BOOL)arg8 ;
@end

