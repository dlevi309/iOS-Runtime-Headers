/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSFrequentlyVisitedSitesBannedURLStore, WBSHistory, NSArray;

@interface WBSFrequentlyVisitedSitesController : NSObject {

	WBSFrequentlyVisitedSitesBannedURLStore* _bannedURLStore;
	double _timeOfLastFrequentlyVisitedSitesComputation;
	WBSHistory* _history;

}

@property (nonatomic,readonly) NSArray * frequentlyVisitedSites; 
+(float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2 withMinimumVisitCount:(unsigned long long)arg3 ;
+(float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3 withMinimumVisitCount:(unsigned long long)arg4 ;
+(float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2 ;
+(float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3 ;
-(void)_recomputeFrequentlyVisitedSitesNow;
-(id)_computeFrequentlyVisitedSiteCandidates;
-(void)_updateFrequentlyVisitedSitesWithCandidates:(id)arg1 ;
-(float)_scoreForHistoryItem:(id)arg1 ;
-(id)_canonicalizedFavoritesURLStringSet;
-(BOOL)_saveFrequentlyVisitedSites:(id)arg1 ;
-(void)_postFrequentlyVisitedSitesDidChangeNotification;
-(id)initWithHistory:(id)arg1 bannedURLStore:(id)arg2 ;
-(NSArray *)frequentlyVisitedSites;
-(BOOL)recomputeFrequentlyVisitedSitesIfNecessary;
-(void)clearFrequentlyVisitedSites;
@end

