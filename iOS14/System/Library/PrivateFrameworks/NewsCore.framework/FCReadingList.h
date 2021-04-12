/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCOfflineArticleContributing.h>

@protocol FCOperationThrottler;
@class FCObservable, NSMutableDictionary, FCCloudContext, FCMTWriterLock, NSString;

@interface FCReadingList : FCPrivateDataController <FCOperationThrottlerDelegate, FCOfflineArticleContributing> {

	FCObservable* _articleIDsToDownload;
	long long _articleDownloadOptions;
	NSMutableDictionary* _entriesByArticleID;
	FCCloudContext* _cloudContext;
	id<FCOperationThrottler> _articleIDsAvailableForOfflineReadingUpdateThrottler;
	FCMTWriterLock* _itemsLock;

}

@property (nonatomic,retain) NSMutableDictionary * entriesByArticleID;                                                  //@synthesize entriesByArticleID=_entriesByArticleID - In the implementation block
@property (nonatomic,retain) FCCloudContext * cloudContext;                                                             //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> articleIDsAvailableForOfflineReadingUpdateThrottler;              //@synthesize articleIDsAvailableForOfflineReadingUpdateThrottler=_articleIDsAvailableForOfflineReadingUpdateThrottler - In the implementation block
@property (nonatomic,retain) FCMTWriterLock * itemsLock;                                                                //@synthesize itemsLock=_itemsLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FCObservable * articleIDsToDownload;                                                     //@synthesize articleIDsToDownload=_articleIDsToDownload - In the implementation block
@property (nonatomic,readonly) long long articleDownloadOptions;                                                        //@synthesize articleDownloadOptions=_articleDownloadOptions - In the implementation block
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(BOOL)requiresPushNotificationSupport;
+(id)backingRecordIDs;
+(BOOL)requiresHighPriorityFirstSync;
+(id)desiredKeys;
+(id)backingRecordZoneIDs;
+(unsigned long long)localStoreVersion;
+(long long)commandQueueUrgency;
+(id)localStoreFilename;
+(id)commandStoreFileName;
+(BOOL)requiresBatchedSync;
-(void)addObserver:(id)arg1 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(void)setItemsLock:(FCMTWriterLock *)arg1 ;
-(void)expressInterestInOfflineArticlesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)dateArticleWasAdded:(id)arg1 ;
-(void)removeArticleFromReadingList:(id)arg1 ;
-(id)_allEntriesInReadingList;
-(FCObservable *)articleIDsToDownload;
-(id)_allSortedEntriesInReadingList;
-(unsigned long long)_maxCountOfArticlesAvailableOfflineWithConfiguration:(id)arg1 ;
-(long long)articleDownloadOptions;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(void)setEntriesByArticleID:(NSMutableDictionary *)arg1 ;
-(id)allSortedArticleIDsInReadingList;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(id)_readingListEntryForArticleID:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(void)setArticleIDsAvailableForOfflineReadingUpdateThrottler:(id<FCOperationThrottler>)arg1 ;
-(NSMutableDictionary *)entriesByArticleID;
-(id)allNonConsumedArticleIDs;
-(void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2 eventInitiationLevel:(long long)arg3 ;
-(BOOL)shouldHideHeadline:(id)arg1 ;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(void)addArticleToReadingList:(id)arg1 eventInitiationLevel:(long long)arg2 origin:(unsigned long long)arg3 ;
-(id)allNonConsumedArticleIDsIntersectingSet:(id)arg1 ;
-(void)_fetchArticleIDsAvailableForOfflineReadingWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareToContributeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isArticleOnReadingList:(id)arg1 ;
-(unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)arg1 ;
-(id<FCOperationThrottler>)articleIDsAvailableForOfflineReadingUpdateThrottler;
-(void)addArticleToReadingList:(id)arg1 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(FCMTWriterLock *)itemsLock;
-(FCCloudContext *)cloudContext;
@end

