/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCReadingListContentControllerObserving.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>

@protocol FCOperationThrottler;
@class NSMutableDictionary, FCReadingListContentController, FCCloudContext, FCMTWriterLock, NSString;

@interface FCReadingList : FCPrivateDataController <FCReadingListContentControllerObserving, FCOperationThrottlerDelegate> {

	NSMutableDictionary* _entriesByArticleID;
	FCReadingListContentController* _readingListContentController;
	FCCloudContext* _cloudContext;
	id<FCOperationThrottler> _articleIDsAvailableForOfflineReadingUpdateThrottler;
	FCMTWriterLock* _itemsLock;

}

@property (nonatomic,retain) NSMutableDictionary * entriesByArticleID;                                                  //@synthesize entriesByArticleID=_entriesByArticleID - In the implementation block
@property (nonatomic,retain) FCReadingListContentController * readingListContentController;                             //@synthesize readingListContentController=_readingListContentController - In the implementation block
@property (nonatomic,retain) FCCloudContext * cloudContext;                                                             //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> articleIDsAvailableForOfflineReadingUpdateThrottler;              //@synthesize articleIDsAvailableForOfflineReadingUpdateThrottler=_articleIDsAvailableForOfflineReadingUpdateThrottler - In the implementation block
@property (nonatomic,retain) FCMTWriterLock * itemsLock;                                                                //@synthesize itemsLock=_itemsLock - In the implementation block
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
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(FCMTWriterLock *)itemsLock;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(void)setItemsLock:(FCMTWriterLock *)arg1 ;
-(FCCloudContext *)cloudContext;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(id)allSortedArticleIDsInReadingList;
-(BOOL)isArticleOnReadingList:(id)arg1 ;
-(id)_readingListEntryForArticleID:(id)arg1 ;
-(void)addArticleToReadingList:(id)arg1 eventInitiationLevel:(long long)arg2 origin:(unsigned long long)arg3 ;
-(NSMutableDictionary *)entriesByArticleID;
-(void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2 eventInitiationLevel:(long long)arg3 ;
-(id)_allSortedEntriesInReadingList;
-(id)_allEntriesInReadingList;
-(id)allNonConsumedArticleIDsInReadingList;
-(FCReadingListContentController *)readingListContentController;
-(unsigned long long)_maxCountOfArticlesAvailableOfflineWithConfiguration:(id)arg1 ;
-(id<FCOperationThrottler>)articleIDsAvailableForOfflineReadingUpdateThrottler;
-(void)enableDownloadingForOfflineReading;
-(BOOL)isArticleAvailableForOfflineReading:(id)arg1 ;
-(void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)expressInterestInOfflineArticlesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setEntriesByArticleID:(NSMutableDictionary *)arg1 ;
-(void)_fetchArticleIDsAvailableForOfflineReadingWithCompletion:(/*^block*/id)arg1 ;
-(void)readingListContentControllerDidUpdateArticleAvailabilityInOfflineMode:(id)arg1 ;
-(BOOL)shouldHideHeadline:(id)arg1 ;
-(void)addArticleToReadingList:(id)arg1 ;
-(void)removeArticleFromReadingList:(id)arg1 ;
-(id)dateArticleWasAdded:(id)arg1 ;
-(unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)arg1 ;
-(id)allNonConsumedArticleIDsInReadingListForOfflineReading;
-(void)setReadingListContentController:(FCReadingListContentController *)arg1 ;
-(void)setArticleIDsAvailableForOfflineReadingUpdateThrottler:(id<FCOperationThrottler>)arg1 ;
@end

