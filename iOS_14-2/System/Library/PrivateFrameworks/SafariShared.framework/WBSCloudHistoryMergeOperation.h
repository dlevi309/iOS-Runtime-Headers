/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue, WBSHistoryServiceDatabaseProtocol;
@class NSObject, WBSCloudHistoryFetchResult, NSMutableDictionary, NSMutableSet, NSSet;

@interface WBSCloudHistoryMergeOperation : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<WBSHistoryServiceDatabaseProtocol> _database;
	WBSCloudHistoryFetchResult* _fetchResult;
	BOOL _mergeStarted;
	NSMutableDictionary* _visitsByVisitIdentifiers;
	NSMutableSet* _redirectChainEarliestVisits;
	NSSet* _tombstones;
	NSMutableDictionary* _tombstonesByURLString;
	NSSet* _existingVisits;
	NSSet* _redirectChainSourceVisits;

}
-(void)_updateClientVersions;
-(void)_buildVisitsByVisitIdentifiersMap;
-(void)_buildRedirectChains;
-(void)_filterVisitsByTombstones;
-(void)_removeDuplicateVisits;
-(void)_mergeVisitsWithCompletion:(/*^block*/id)arg1 ;
-(void)_lookupRedirectChainSourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)_lookUpExistingItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadTombstonesWithCompletion:(/*^block*/id)arg1 ;
-(void)_replayAndAddTombstones:(/*^block*/id)arg1 ;
-(id)initWithDatabase:(id)arg1 fetchResult:(id)arg2 ;
-(void)mergeWithCompletion:(/*^block*/id)arg1 ;
@end

