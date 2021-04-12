/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTTodayResultsAggregator.h>

@protocol FCCoreConfigurationManager, FCFeedPersonalizing, FCTodayPrivateData;
@class NSDate, NSObject, NSString;

@interface NTNewsTodayResultsExplicitAllocationAggregator : NSObject <NTTodayResultsAggregator> {

	id<FCCoreConfigurationManager> _configurationManager;
	id<FCFeedPersonalizing> _feedPersonalizer;
	NSDate* _filterDate;
	NSObject*<FCTodayPrivateData> _todayData;

}

@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;                         //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (nonatomic,copy) NSDate * filterDate;                                                //@synthesize filterDate=_filterDate - In the implementation block
@property (nonatomic,copy) NSObject*<FCTodayPrivateData> todayData;                            //@synthesize todayData=_todayData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCCoreConfigurationManager>)configurationManager;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(id)init;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(NSObject*<FCTodayPrivateData>)todayData;
-(void)setTodayData:(NSObject*<FCTodayPrivateData>)arg1 ;
-(id)initWithConfigurationManager:(id)arg1 feedPersonalizer:(id)arg2 filterDate:(id)arg3 todayData:(id)arg4 ;
-(id)aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2 budgetInfo:(id)arg3 ;
-(NSDate *)filterDate;
-(void)setFilterDate:(NSDate *)arg1 ;
-(id)_itemsForSection:(id)arg1 items:(id)arg2 withBudgetInfo:(id)arg3 previouslyChosenItems:(id)arg4 priorClusterIDsInOtherSections:(id)arg5 sectionItemsLimit:(unsigned long long)arg6 otherArticleIDs:(id)arg7 embedsLimit:(unsigned long long)arg8 remainingSlots:(double)arg9 slotsUsed:(double*)arg10 noMoreItemsToGive:(BOOL*)arg11 noRoomForMoreItems:(BOOL*)arg12 slotAllocationByDynamicSlotItemID:(id)arg13 ;
-(id)_sectionFilterTransformationWithDescriptor:(id)arg1 priorClusterIDsInOtherSections:(id)arg2 priorClusterIDsInSection:(id)arg3 otherArticleIDs:(id)arg4 embedsLimit:(unsigned long long)arg5 ;
@end

