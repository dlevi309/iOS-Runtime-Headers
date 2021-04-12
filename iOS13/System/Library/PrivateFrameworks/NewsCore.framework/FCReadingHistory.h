/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCClearableReadingHistory.h>

@class NSMutableDictionary, FCMTWriterLock, NSSet, NSString;

@interface FCReadingHistory : FCPrivateDataController <FCClearableReadingHistory> {

	NSMutableDictionary* _itemsByIdentifier;
	NSMutableDictionary* _itemsByArticleID;
	FCMTWriterLock* _itemsLock;

}

@property (nonatomic,retain) NSMutableDictionary * itemsByIdentifier;              //@synthesize itemsByIdentifier=_itemsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemsByArticleID;               //@synthesize itemsByArticleID=_itemsByArticleID - In the implementation block
@property (nonatomic,retain) FCMTWriterLock * itemsLock;                           //@synthesize itemsLock=_itemsLock - In the implementation block
@property (nonatomic,readonly) NSSet * allReadArticleIDs; 
@property (nonatomic,readonly) NSSet * allSeenArticleIDs; 
@property (nonatomic,readonly) NSSet * allConsumedArticleIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)desiredKeys;
+(BOOL)requiresPushNotificationSupport;
+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(id)backingRecordZoneIDs;
+(id)backingRecordIDs;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(void)populateLocalStoreClassRegistry:(id)arg1 ;
+(id)localStoreMigrator;
+(void)configureKeyValueStoreForJSONHandling:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)clearHistory;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(FCMTWriterLock *)itemsLock;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(NSMutableDictionary *)itemsByArticleID;
-(void)_addHistoryItems:(id)arg1 addToStore:(BOOL)arg2 ;
-(void)setItemsByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setItemsByArticleID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)itemsByIdentifier;
-(void)_removeHistoryItemWithItemID:(id)arg1 articleID:(id)arg2 ;
-(id)syncReadingHistoryItemRecords:(id)arg1 deletedArticleIDs:(id)arg2 didRemoveLastVisitedAt:(out BOOL*)arg3 ;
-(id)allReadingHistoryItems;
-(id)_sortedReadingHistoryItemsWithMaxCount:(unsigned long long)arg1 ;
-(id)_readingHistoryItemForArticleID:(id)arg1 ;
-(id)markArticlesAsSeenWithHeadlines:(id)arg1 ;
-(BOOL)_markArticleAsSeenWithHeadline:(id)arg1 historyItem:(id)arg2 modifiedHistoryFeaturesOut:(unsigned long long*)arg3 ;
-(BOOL)_markArticleAsSeenWithArticleID:(id)arg1 articleVersion:(long long)arg2 historyItem:(id)arg3 modifiedHistoryFeaturesOut:(unsigned long long*)arg4 ;
-(unsigned long long)likingStatusForArticleID:(id)arg1 ;
-(void)_modifyHistoryForArticleID:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_markArticle:(id)arg1 withLikingStatus:(unsigned long long)arg2 ;
-(BOOL)hasArticleBeenMarkedAsOffensive:(id)arg1 ;
-(void)markArticle:(id)arg1 asOffensive:(BOOL)arg2 ;
-(BOOL)hasArticleBeenConsumed:(id)arg1 ;
-(BOOL)markArticleAsReadWithArticleID:(id)arg1 articleVersion:(long long)arg2 readDate:(id)arg3 ;
-(void)markArticleAsReadWithHeadline:(id)arg1 fromGroupType:(long long)arg2 swipedToArticle:(BOOL)arg3 onScreenChecker:(/*^block*/id)arg4 ;
-(BOOL)canHelpPruneZoneName:(id)arg1 ;
-(id)pruneRecords:(id)arg1 forZoneName:(id)arg2 ;
-(double)softMaxRecordAgeWhenMigratingZoneName:(id)arg1 ;
-(unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)arg1 ;
-(id)historyItemsForArticleIDs:(id)arg1 ;
-(id)mostRecentlyReadArticlesWithMaxCount:(unsigned long long)arg1 ;
-(id)allSortedArticleIDsInReadingHistory;
-(NSSet *)allReadArticleIDs;
-(NSSet *)allSeenArticleIDs;
-(NSSet *)allConsumedArticleIDs;
-(id)consumedArticleIDsForTagID:(id)arg1 fromTime:(id)arg2 ;
-(id)lastVisitedDateForArticleID:(id)arg1 ;
-(BOOL)hasArticleBeenRead:(id)arg1 ;
-(BOOL)hasArticleBeenVisited:(id)arg1 ;
-(BOOL)hasArticleBeenSeen:(id)arg1 ;
-(BOOL)markArticleAsSeenWithHeadline:(id)arg1 ;
-(BOOL)markArticle:(id)arg1 withLikingStatus:(unsigned long long)arg2 ;
-(BOOL)toggleLikeForArticleWithID:(id)arg1 ;
-(BOOL)toggleDislikeForArticleWithID:(id)arg1 ;
-(BOOL)toggleArticleHasBeenMarkedAsOffensive:(id)arg1 ;
-(void)markArticle:(id)arg1 asArticleConsumed:(BOOL)arg2 sourceChannelTagID:(id)arg3 ;
-(void)markArticleAsReadWithHeadline:(id)arg1 ;
-(void)removeArticleFromHistory:(id)arg1 ;
-(void)setItemsLock:(FCMTWriterLock *)arg1 ;
@end

