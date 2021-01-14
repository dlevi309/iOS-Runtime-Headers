/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PSIGroupCacheDelegate.h>
#import <libobjc.A.dylib/PSIQueryDelegate.h>
#import <libobjc.A.dylib/PSITableDelegate.h>

@protocol OS_dispatch_queue;
@class PSITokenizer, PSIIntArray, PSIWordEmbeddingTable, PSIStatement, NSObject, NSDictionary, NSMutableString, NSMutableArray, NSString;

@interface PSIDatabase : NSObject <PSIGroupCacheDelegate, PSIQueryDelegate, PSITableDelegate> {

	sqlite3Ref _inqDatabase;
	BOOL _databaseIsValid;
	CFDictionaryRef _inqPreparedStatements;
	PSIIntArray* _matchingIds;
	PSIWordEmbeddingTable* _inqWordEmbeddingTable;
	PSIStatement* _assetUUIDByAssetIdWithAssetIdsStatement;
	PSIStatement* _collectionResultByCollectionIdWithCollectionIdsStatement;
	PSIStatement* _inqAssetIdsByGroupIdForAssetIdsStatement;
	PSIStatement* _inqCollectionIdsByGroupIdForCollectionIdsStatement;
	PSIStatement* _inqNumberOfAssetsMatchingGroupWithIdStatement;
	PSIStatement* _inqNumberOfAssetsByGroupIdMatchingGroupsWithIdsStatement;
	PSIStatement* _inqNumberOfCollectionsMatchingGroupWithIdStatement;
	PSIStatement* _inqNumberOfCollectionsByGroupIdMatchingGroupsWithIdsStatement;
	PSIStatement* _inqIdsOfAllGroupsStatement;
	PSIStatement* _inqIdsOfAllGroupsInPrefixStatement;
	PSIStatement* _inqIdsOfAllGroupsInLookupStatement;
	PSIStatement* _inqRemoveGroupsFromLookupStatement;
	CFDictionaryRef _inqGroupObjectsById;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _searchQueue;
	NSObject*<OS_dispatch_queue> _groupResultsQueue;
	NSDictionary* _inqSearchMetadata;
	long long _options;
	PSITokenizer* _tokenizer;
	NSMutableString* _tokenizerOutputString;
	NSMutableArray* _tokenizerOutputTokens;
	NSMutableArray* _tokenizerOutputNormalizedTokens;
	SCD_Struct_PS28 _tokenizerOutputRanges[8];
	NSString* _path;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) PSITokenizer * tokenizer; 
@property (readonly) NSObject*<OS_dispatch_queue> groupResultsQueue; 
@property (nonatomic,copy,readonly) NSString * path;                              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) long long options;                                 //@synthesize options=_options - In the implementation block
+(void)dropDatabaseAtPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)searchDatabaseLog;
+(void)_dropDatabase:(sqlite3Ref)arg1 withCompletion:(/*^block*/id)arg2 ;
+(sqlite3Ref)_openDatabaseAtPath:(id)arg1 options:(long long)arg2 ;
+(BOOL)_integrityCheckDatabase:(sqlite3Ref)arg1 ;
+(id)_scoreByUserCategory;
-(void)_inqRemoveUnusedGroups;
-(CFSetRef)_inqNewGroupIdsForAssetIds:(CFSetRef)arg1 ;
-(long long)insertCollection:(id)arg1 ;
-(id)_inqNumberOfAssetsByGroupIdMatchingGroupsWithIds:(id)arg1 ;
-(long long)insertAsset:(id)arg1 ;
-(unsigned long long)_inqAssetIdWithAsset:(id)arg1 ;
-(void)addAsset:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)assetExistsWithUUID:(id)arg1 ;
-(unsigned long long)_inqAssetIdForUUID:(id)arg1 uuid_0:(unsigned long long*)arg2 uuid_1:(unsigned long long*)arg3 ;
-(id)_inqCollectionResultByCollectionIdWithCollectionIds:(id)arg1 ;
-(void)_inqAsync:(/*^block*/id)arg1 ;
-(void)addCollections:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_processNextKeywordSuggestionsForQuery:(id)arg1 groupResults:(id)arg2 allowIdentifiers:(BOOL)arg3 ;
-(unsigned long long)_inqUpdateGroupForText:(id)arg1 normalizedText:(id)arg2 identifier:(id)arg3 category:(short)arg4 owningGroupId:(unsigned long long)arg5 shouldUpdateOwningGroupId:(BOOL)arg6 didUpdateGroup:(out BOOL*)arg7 ;
-(id)_inqGroupWithStatement:(sqlite3_stmtRef)arg1 dateFilter:(id)arg2 includeObjects:(BOOL)arg3 isFilenameStatement:(BOOL)arg4 excludingGroupId:(unsigned long long)arg5 ;
-(void)_inqRemoveUUID:(id)arg1 objectType:(unsigned long long)arg2 isInBatch:(BOOL)arg3 ;
-(void)executeStatementFromString:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2 ;
-(id)meNodeIdentifier;
-(id)_inqDequeueGroupObjectWithId:(unsigned long long)arg1 isCachedGroup:(BOOL*)arg2 ;
-(unsigned long long)_inqNumberOfCollectionsMatchingGroupWithId:(unsigned long long)arg1 ;
-(void)unprepareMatchingIds;
-(const CFSetRef)groupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3 ;
-(void)executeStatement:(id)arg1 ;
-(long long)lastInsertedRowID;
-(CFSetRef)_inqNewGroupIdsForAssetId:(unsigned long long)arg1 ;
-(id)allAssetUUIDsForGroupsWithCategories:(id)arg1 ;
-(CFSetRef)_inqNewGroupIdsForCollectionIds:(CFSetRef)arg1 ;
-(unsigned long long)updateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out BOOL*)arg5 ;
-(id)_inqContentStringForGroupId:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)groupResultsQueue;
-(void)dropDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)addAssets:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_inqUpdateSearchTermsWithSearchableTermsByGroupIds:(id)arg1 ;
-(id)_inqAssetIdsByGroupIdForAssetIds:(id)arg1 ;
-(BOOL)isDatabaseCorrupted;
-(unsigned long long)_inqUpdateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out BOOL*)arg5 ;
-(void)_inqExecutePreparedStatement:(sqlite3_stmtRef)arg1 allowError:(int)arg2 withStatementBlock:(/*^block*/id)arg3 ;
-(void)executeStatementFromString:(id)arg1 ;
-(long long)options;
-(id)_inqOwningContentStringForGroupResult:(id)arg1 ;
-(id)_inqCollectionIdsByGroupIdForCollectionIds:(id)arg1 ;
-(NSString *)path;
-(void)_removeUUIDs:(id)arg1 objectType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAssetUUIDsForAssetIDs:(CFArrayRef)arg1 creationDateSorted:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)wordEmbeddingVersion;
-(sqlite3_stmtRef)_inqPrepareStatement:(const char*)arg1 ;
-(id)wordEmbeddingMatchesForToken:(id)arg1 ;
-(id)groupIdsInLookupTable;
-(PSITokenizer *)tokenizer;
-(void)bindMatchingIds:(CFSetRef)arg1 ;
-(id)groupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2 ;
-(void)group:(id)arg1 fetchOwningContentString:(BOOL)arg2 assetIdRange:(NSRange)arg3 collectionIdRange:(NSRange)arg4 completionHandler:(/*^block*/id)arg5 ;
-(unsigned long long)_inqNumberOfAssetsMatchingGroupWithId:(unsigned long long)arg1 ;
-(CFSetRef)_inqNewGroupIdsMatchingString:(id)arg1 textIsSearchable:(BOOL)arg2 ;
-(id)dumpLookupStrings;
-(BOOL)isLookupTableOutOfSync;
-(void)_inqUpdateGCTableWithGroupId:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 ;
-(void)_inSearchQueueAsync:(/*^block*/id)arg1 ;
-(id)_inqGroupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_inqRecycleGroups;
-(id)_inqAssetUUIDsForAssetIds:(CFArrayRef)arg1 range:(NSRange)arg2 creationDateSorted:(BOOL)arg3 ;
-(id)_inqGroupsWithMatchingGroupIds:(CFSetRef)arg1 dateFilter:(id)arg2 includeObjects:(BOOL)arg3 matchingPredicateBlock:(/*^block*/id)arg4 ;
-(void)updateSearchMetadata:(id)arg1 ;
-(void)addCollection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)statementFromString:(id)arg1 ;
-(unsigned long long)_inqAssetIdForUUID:(id)arg1 ;
-(void)removeAssetsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CFArrayRef)_inqNewAssetIdsWithDateFilter:(id)arg1 ;
-(id)groupIdsInPrefixTable;
-(id)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2 ;
-(void)_inqAddToLookupTableWithGroupId:(unsigned long long)arg1 text:(id)arg2 category:(short)arg3 ;
-(id)dumpPrefixStrings;
-(void)removeCollectionsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_inqGroupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2 ;
-(id)_inqGroupWithFilenameStatement:(sqlite3_stmtRef)arg1 dateFilter:(id)arg2 excludingGroupId:(unsigned long long)arg3 ;
-(id)newQueryWithSearchText:(id)arg1 representedObjects:(id)arg2 useWildcardSearchText:(BOOL)arg3 ;
-(void)_inqSync:(/*^block*/id)arg1 ;
-(void)deleteFromLookupTableWithGroupId:(unsigned long long)arg1 ;
-(void)_inqPerformBatch:(/*^block*/id)arg1 ;
-(void)_executeQuery:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
-(long long)insertGroup:(id)arg1 ;
-(void)linkAssetWithId:(long long)arg1 toGroupWithId:(long long)arg2 ;
-(id)_inqCollectionResultsForCollectionIds:(CFArrayRef)arg1 range:(NSRange)arg2 ;
-(void)_inqGetTokensFromString:(id)arg1 category:(short)arg2 tokenOutput:(tokenOutput_t*)arg3 ;
-(CFSetRef)_inqNewGroupIdsForCollectionId:(unsigned long long)arg1 ;
-(void)removeUnusedGroups;
-(void)_inqExecutePreparedStatement:(sqlite3_stmtRef)arg1 withStatementBlock:(/*^block*/id)arg2 ;
-(void)_inqUpdateGATableWithGroupId:(unsigned long long)arg1 assetId:(unsigned long long)arg2 ;
-(id)suggestionWhitelistedScenes;
-(id)_inqFilenameGroupsWithMatchingGroupIds:(CFSetRef)arg1 dateFilter:(id)arg2 matchingPredicateBlock:(/*^block*/id)arg3 ;
-(CFSetRef)_inqNewGroupIdsWithCategories:(id)arg1 ;
-(CFArrayRef)_inqNewAssetIdsForGroupId:(unsigned long long)arg1 dateFilter:(id)arg2 ;
-(id)_inqNonFilenameGroupsWithMatchingGroupIds:(CFSetRef)arg1 dateFilter:(id)arg2 includeObjects:(BOOL)arg3 matchingPredicateBlock:(/*^block*/id)arg4 ;
-(id)assetUUIDByAssetIdWithAssetIds:(id)arg1 ;
-(unsigned long long)_inqCollectionIdWithCollection:(id)arg1 ;
-(id)_inqGroupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2 ;
-(void)executeStatement:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2 ;
-(void)bindMatchingIds:(CFArrayRef)arg1 range:(NSRange)arg2 ;
-(unsigned long long)_inqCollectionIdForUUID:(id)arg1 uuid_0:(unsigned long long*)arg2 uuid_1:(unsigned long long*)arg3 ;
-(void)prepareForNumberOfMatchingIds:(unsigned long long)arg1 ;
-(CFArrayRef)_inqNewCollectionIdsWithDateFilter:(id)arg1 ;
-(id)_inqNewSynonymTextsByOwningGroupIdWithGroupIds:(CFSetRef)arg1 ;
-(id)newQueryWithSearchText:(id)arg1 ;
-(void)unbindMatchingIds;
-(void)_prepareTokenOutput:(tokenOutput_t*)arg1 forIndexing:(BOOL)arg2 ;
-(void)linkCollectionWithId:(long long)arg1 toGroupWithId:(long long)arg2 ;
-(void)removeCollectionWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CFSetRef)_inqNewGroupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3 ;
-(id)_inqAssetUUIDsForAssetIds:(CFSetRef)arg1 ;
-(void)_finalizeEverything;
-(id)allCollectionUUIDsWithCollectionType:(unsigned long long)arg1 ;
-(id)collectionResultByCollectionIdWithCollectionIds:(id)arg1 ;
-(id)initWithPath:(id)arg1 options:(long long)arg2 searchMetadata:(id)arg3 ;
-(void)removeAssetWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_inqNumberOfCollectionsByGroupIdMatchingGroupsWithIds:(id)arg1 ;
-(void)executeQuery:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
-(id)newQueryWithSearchText:(id)arg1 queryTokens:(id)arg2 useWildcardSearchText:(BOOL)arg3 ;
-(CFArrayRef)_inqNewCollectionIdsForGroupId:(unsigned long long)arg1 dateFilter:(id)arg2 ;
-(void)_inqPrepareAndExecuteStatement:(const char*)arg1 ;
-(void)_ingRebuildPrefixTableIfNeeded;
-(void)_inqDeleteFromLookupTableWithGroupId:(unsigned long long)arg1 ;
-(id)groupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(unsigned long long)_inqGroupIdForCategory:(short)arg1 owningGroupId:(unsigned long long)arg2 contentString:(id)arg3 normalizedString:(id)arg4 identifier:(id)arg5 insertIfNeeded:(BOOL)arg6 tokenOutput:(const tokenOutput_t*)arg7 shouldUpdateOwningGroupId:(BOOL)arg8 didUpdateGroup:(out BOOL*)arg9 ;
-(id)_inqAssetUUIDByAssetIdWithAssetIds:(id)arg1 ;
-(unsigned long long)_inqCollectionIdForUUID:(id)arg1 ;
-(void)bindMatchingIds:(const long long*)arg1 numberOfMatchingIds:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)_inqGroupWithStatement:(sqlite3_stmtRef)arg1 dateFilter:(id)arg2 includeObjects:(BOOL)arg3 ;
-(id)newQueryWithSearchText:(id)arg1 identifiers:(id)arg2 useWildcardSearchText:(BOOL)arg3 ;
-(id)allGroupIds;
@end

