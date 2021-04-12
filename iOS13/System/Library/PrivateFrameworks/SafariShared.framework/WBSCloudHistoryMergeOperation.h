/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSObject, WBSHistory, WBSCloudHistoryFetchResult, NSMutableDictionary, NSMutableSet, NSSet;

@interface WBSCloudHistoryMergeOperation : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	WBSHistory* _history;
	WBSCloudHistoryFetchResult* _fetchResult;
	BOOL _mergeStarted;
	NSMutableDictionary* _visitsByVisitIdentifiers;
	NSMutableSet* _redirectChainEarliestVisits;
	NSSet* _tombstones;
	NSMutableDictionary* _tombstonesByURLString;
	NSSet* _existingVisits;
	NSSet* _redirectChainSourceVisits;

}
-(id)initWithHistory:(id)arg1 fetchResult:(id)arg2 ;
-(void)mergeWithCompletion:(/*^block*/id)arg1 ;
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
@end

