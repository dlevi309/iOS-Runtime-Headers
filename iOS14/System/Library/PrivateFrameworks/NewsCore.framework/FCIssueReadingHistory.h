/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)lastVisitedDateForIssueWithID:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_didChangeForIssueIDs:(id)arg1 ;
-(id)_historyItemForIssueID:(id)arg1 ;
-(void)_modifyHistoryForIssueID:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSArray *)allEngagedIssueIDs;
-(void)clearHistory;
-(id)lastSeenDateForIssueWithID:(id)arg1 ;
-(void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg1 ;
-(void)setItemsByID:(NSMutableDictionary *)arg1 ;
-(NSString *)mostRecentlyVisitedIssueID;
-(NSMutableDictionary *)itemsByID;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(BOOL)hasIssueWithIDBeenEngaged:(id)arg1 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(NSArray *)recentlyVisitedIssueIDs;
-(void)removeObserver:(id)arg1 ;
-(void)markIssueWithID:(id)arg1 asVisitedWithBookmark:(id)arg2 ;
-(void)loadLocalCachesFromStore;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(id)_historyItemForID:(id)arg1 ;
-(void)markIssueAsEngagedWithID:(id)arg1 ;
-(BOOL)hasIssueWithIDBeenVisited:(id)arg1 ;
-(BOOL)hasIssueWithIDBeenSeen:(id)arg1 ;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg1 ;
-(BOOL)hasIssueWithIDBeenBadged:(id)arg1 ;
-(void)markIssueAsSeenWithID:(id)arg1 ;
-(id)_allHistoryItems;
-(void)_addHistoryItems:(id)arg1 ;
-(NSArray *)recentlyEngagedIssueIDs;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(void)markIssueAsBadgedWithID:(id)arg1 ;
-(FCMTWriterLock *)itemsLock;
-(id)lastEngagedDateForIssueWithID:(id)arg1 ;
-(id)bookmarkForLastVisitToIssueWithID:(id)arg1 ;
@end

