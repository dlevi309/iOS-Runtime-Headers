/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface SSRankingFeedbackHandler : NSObject {

	NSMutableDictionary* _mapProtectionClassToBundleIdToItem;
	NSMutableArray* _sectionCSItems;
	NSObject*<OS_dispatch_queue> _countQueue;

}

@property (retain) NSMutableDictionary * mapProtectionClassToBundleIdToItem;              //@synthesize mapProtectionClassToBundleIdToItem=_mapProtectionClassToBundleIdToItem - In the implementation block
@property (retain) NSMutableArray * sectionCSItems;                                       //@synthesize sectionCSItems=_sectionCSItems - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> countQueue;                               //@synthesize countQueue=_countQueue - In the implementation block
+(id)sharedInstance;
+(id)copyRenderEngagementCounts;
-(id)init;
-(id)fetchResults;
-(id)getSyntheticTestRankingItemsForStressTest;
-(void)resetResultWithRankingItems:(id)arg1 ;
-(id)getSyntheticTestRankingItem;
-(void)resultsWithRankingItemsDidBecomeVisible:(id)arg1 date:(id)arg2 protectionClassMapping:(id)arg3 ;
-(void)didEngageResultWithRankingItem:(id)arg1 startDate:(id)arg2 protectionClass:(id)arg3 ;
-(void)writeRenderAndEngagementInfo;
-(void)testForDurationWithIntervals:(int*)arg1 maxIndex:(int)arg2 duration:(long long)arg3 counts:(id)arg4 ;
-(void)testCountsUptoOneDay;
-(void)testCountsUptoWeek;
-(void)testCountsUptoMonth;
-(void)testCountsUptoQuarter;
-(void)testCountsUptoHalfYear;
-(void)testCountsUptoYear;
-(void)testCountsAfterYear;
-(void)testCountsAfterCoupleYears;
-(void)testCountsMovingDaysInPast;
-(void)testCountsMovingYearInPast;
-(void)testCountsMovingCoupleOfYearsInPast;
-(void)testForDummyEntry;
-(void)testCountsForRegularEngagement;
-(void)stressTestCounts;
-(void)setCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMapProtectionClassToBundleIdToItem:(NSMutableDictionary *)arg1 ;
-(void)setSectionCSItems:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)countQueue;
-(void)_indexItemWithIdentifier:(id)arg1 bundleID:(id)arg2 startDate:(id)arg3 pc:(id)arg4 ;
-(NSMutableArray *)sectionCSItems;
-(NSMutableDictionary *)mapProtectionClassToBundleIdToItem;
-(void)fetchBundleRenderAndEngagementInfo:(id)arg1 ;
-(void)fetchBundleRenderAndEngagementInfo;
@end

