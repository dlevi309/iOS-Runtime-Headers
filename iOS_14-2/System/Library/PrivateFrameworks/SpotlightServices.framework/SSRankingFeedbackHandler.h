/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)fetchResults;
-(void)setMapProtectionClassToBundleIdToItem:(NSMutableDictionary *)arg1 ;
-(void)resetResultWithRankingItems:(id)arg1 ;
-(id)init;
-(void)testForDurationWithIntervals:(int*)arg1 maxIndex:(int)arg2 duration:(long long)arg3 counts:(id)arg4 ;
-(void)testCountsForRegularEngagement;
-(void)didEngageResultWithRankingItem:(id)arg1 startDate:(id)arg2 protectionClass:(id)arg3 ;
-(void)testCountsUptoQuarter;
-(void)stressTestCounts;
-(void)testCountsUptoWeek;
-(void)resultsWithRankingItemsDidBecomeVisible:(id)arg1 date:(id)arg2 protectionClassMapping:(id)arg3 ;
-(void)setSectionCSItems:(NSMutableArray *)arg1 ;
-(void)testCountsMovingCoupleOfYearsInPast;
-(void)testCountsUptoYear;
-(NSObject*<OS_dispatch_queue>)countQueue;
-(void)fetchBundleRenderAndEngagementInfo:(id)arg1 ;
-(void)setCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)testCountsAfterCoupleYears;
-(void)fetchBundleRenderAndEngagementInfo;
-(void)testCountsMovingYearInPast;
-(NSMutableDictionary *)mapProtectionClassToBundleIdToItem;
-(void)testForDummyEntry;
-(void)testCountsUptoOneDay;
-(void)writeRenderAndEngagementInfo;
-(void)_indexItemWithIdentifier:(id)arg1 bundleID:(id)arg2 startDate:(id)arg3 pc:(id)arg4 ;
-(id)getSyntheticTestRankingItemsForStressTest;
-(void)testCountsMovingDaysInPast;
-(void)testCountsUptoHalfYear;
-(void)testCountsUptoMonth;
-(id)getSyntheticTestRankingItem;
-(NSMutableArray *)sectionCSItems;
-(void)testCountsAfterYear;
@end

