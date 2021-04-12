/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCIssueReadingHistoryType.h>
#import <libobjc.A.dylib/FCClearableReadingHistory.h>

@class NSString, NSArray, NSMutableDictionary, FCMTWriterLock;

@interface FCIssueReadingHistory : FCPrivateDataController <FCIssueReadingHistoryType, FCClearableReadingHistory> {

	NSMutableDictionary* _itemsByID;
	FCMTWriterLock* _itemsLock;

}

@property (nonatomic,retain) NSMutableDictionary * itemsByID;                      //@synthesize itemsByID=_itemsByID - In the implementation block
@property (nonatomic,readonly) FCMTWriterLock * itemsLock;                         //@synthesize itemsLock=_itemsLock - In the implementation block
@property (nonatomic,readonly) NSString * mostRecentlyVisitedIssueID; 
@property (nonatomic,readonly) NSArray * recentlyVisitedIssueIDs; 
@property (nonatomic,readonly) NSArray * recentlyEngagedIssueIDs; 
@property (nonatomic,readonly) NSArray * allEngagedIssueIDs; 
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
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)clearHistory;
-(void)setItemsByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)itemsByID;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)_modifyHistoryForIssueID:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)bookmarkForLastVisitToIssueWithID:(id)arg1 ;
-(id)_historyItemForIssueID:(id)arg1 ;
-(id)_allHistoryItems;
-(FCMTWriterLock *)itemsLock;
-(void)_didChangeForIssueIDs:(id)arg1 ;
-(void)_addHistoryItems:(id)arg1 ;
-(id)_historyItemForID:(id)arg1 ;
-(void)markIssueWithID:(id)arg1 asVisitedWithBookmark:(id)arg2 ;
-(void)markIssueAsBadgedWithID:(id)arg1 ;
-(void)markIssueAsEngagedWithID:(id)arg1 ;
-(void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg1 ;
-(BOOL)hasIssueWithIDBeenVisited:(id)arg1 ;
-(BOOL)hasIssueWithIDBeenBadged:(id)arg1 ;
-(BOOL)hasIssueWithIDBeenEngaged:(id)arg1 ;
-(id)lastVisitedDateForIssueWithID:(id)arg1 ;
-(id)lastEngagedDateForIssueWithID:(id)arg1 ;
-(id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg1 ;
-(NSString *)mostRecentlyVisitedIssueID;
-(NSArray *)recentlyVisitedIssueIDs;
-(NSArray *)recentlyEngagedIssueIDs;
-(NSArray *)allEngagedIssueIDs;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
@end

