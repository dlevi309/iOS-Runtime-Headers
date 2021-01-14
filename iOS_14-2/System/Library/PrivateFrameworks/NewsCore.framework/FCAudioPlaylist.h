/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCAudioPlaylistType.h>

@class NSArray, NSMutableDictionary, NSOrderedSet, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {

	NSMutableDictionary* _itemsByID;
	NSOrderedSet* _orderedArticleIDs;
	FCMTWriterLock* _itemsLock;

}

@property (nonatomic,retain) NSMutableDictionary * itemsByID;               //@synthesize itemsByID=_itemsByID - In the implementation block
@property (nonatomic,retain) NSOrderedSet * orderedArticleIDs;              //@synthesize orderedArticleIDs=_orderedArticleIDs - In the implementation block
@property (nonatomic,readonly) FCMTWriterLock * itemsLock;                  //@synthesize itemsLock=_itemsLock - In the implementation block
@property (nonatomic,readonly) NSArray * articleIDs; 
+(id)localStoreMigrator;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(BOOL)requiresPushNotificationSupport;
+(id)backingRecordIDs;
+(BOOL)requiresHighPriorityFirstSync;
+(id)desiredKeys;
+(id)backingRecordZoneIDs;
+(void)populateLocalStoreClassRegistry:(id)arg1 ;
+(unsigned long long)localStoreVersion;
+(long long)commandQueueUrgency;
+(id)localStoreFilename;
+(id)commandStoreFileName;
+(BOOL)requiresBatchedSync;
-(void)addObserver:(id)arg1 ;
-(void)removeArticleID:(id)arg1 ;
-(NSArray *)articleIDs;
-(void)_modifyWithInsertedOrChangedItems:(id)arg1 removedArticleIDs:(id)arg2 ;
-(void)setItemsByID:(NSMutableDictionary *)arg1 ;
-(NSOrderedSet *)orderedArticleIDs;
-(NSMutableDictionary *)itemsByID;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(BOOL)containsArticleID:(id)arg1 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)setOrderedArticleIDs:(NSOrderedSet *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(id)_itemWithArticleID:(id)arg1 ;
-(void)_regenerateOrderedArticleIDs;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(void)ensureSyncedWithCompletion:(/*^block*/id)arg1 ;
-(void)insertArticleID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(FCMTWriterLock *)itemsLock;
@end

