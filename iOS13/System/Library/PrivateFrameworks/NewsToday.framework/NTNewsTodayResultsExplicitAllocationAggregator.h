/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTTodayResultsAggregator.h>

@protocol FCCoreConfigurationManager, FCFeedPersonalizing, FCTodayPrivateData;
@class NTPBSectionSlotCostInfo, NSDate, NSObject, NSString;

@interface NTNewsTodayResultsExplicitAllocationAggregator : NSObject <NTTodayResultsAggregator> {

	BOOL _allowLeadingCell;
	BOOL _allowSectionTitles;
	BOOL _respectMinMaxLimit;
	id<FCCoreConfigurationManager> _configurationManager;
	id<FCFeedPersonalizing> _feedPersonalizer;
	NTPBSectionSlotCostInfo* _nonVideoSectionSlotCostInfo;
	NTPBSectionSlotCostInfo* _videoSectionSlotCostInfo;
	unsigned long long _embedsLimit;
	double _slotsLimit;
	NSDate* _filterDate;
	NSObject*<FCTodayPrivateData> _todayData;

}

@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;                         //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (nonatomic,copy) NTPBSectionSlotCostInfo * nonVideoSectionSlotCostInfo;              //@synthesize nonVideoSectionSlotCostInfo=_nonVideoSectionSlotCostInfo - In the implementation block
@property (nonatomic,copy) NTPBSectionSlotCostInfo * videoSectionSlotCostInfo;                 //@synthesize videoSectionSlotCostInfo=_videoSectionSlotCostInfo - In the implementation block
@property (assign,nonatomic) unsigned long long embedsLimit;                                   //@synthesize embedsLimit=_embedsLimit - In the implementation block
@property (assign,nonatomic) BOOL allowLeadingCell;                                            //@synthesize allowLeadingCell=_allowLeadingCell - In the implementation block
@property (assign,nonatomic) BOOL allowSectionTitles;                                          //@synthesize allowSectionTitles=_allowSectionTitles - In the implementation block
@property (assign,nonatomic) BOOL respectMinMaxLimit;                                          //@synthesize respectMinMaxLimit=_respectMinMaxLimit - In the implementation block
@property (assign,nonatomic) double slotsLimit;                                                //@synthesize slotsLimit=_slotsLimit - In the implementation block
@property (nonatomic,copy) NSDate * filterDate;                                                //@synthesize filterDate=_filterDate - In the implementation block
@property (nonatomic,copy) NSObject*<FCTodayPrivateData> todayData;                            //@synthesize todayData=_todayData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(void)setVideoSectionSlotCostInfo:(NTPBSectionSlotCostInfo *)arg1 ;
-(void)setNonVideoSectionSlotCostInfo:(NTPBSectionSlotCostInfo *)arg1 ;
-(void)setSlotsLimit:(double)arg1 ;
-(void)setAllowLeadingCell:(BOOL)arg1 ;
-(void)setAllowSectionTitles:(BOOL)arg1 ;
-(void)setEmbedsLimit:(unsigned long long)arg1 ;
-(double)slotsLimit;
-(NTPBSectionSlotCostInfo *)videoSectionSlotCostInfo;
-(NTPBSectionSlotCostInfo *)nonVideoSectionSlotCostInfo;
-(BOOL)allowLeadingCell;
-(BOOL)allowSectionTitles;
-(unsigned long long)embedsLimit;
-(NSObject*<FCTodayPrivateData>)todayData;
-(void)setTodayData:(NSObject*<FCTodayPrivateData>)arg1 ;
-(id)initWithConfigurationManager:(id)arg1 feedPersonalizer:(id)arg2 nonVideoSectionSlotCostInfo:(id)arg3 videoSectionSlotCostInfo:(id)arg4 embedsLimit:(unsigned long long)arg5 allowLeadingCell:(BOOL)arg6 allowSectionTitles:(BOOL)arg7 respectMinMaxLimit:(BOOL)arg8 filterDate:(id)arg9 todayData:(id)arg10 slotsLimit:(double)arg11 ;
-(id)aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2 ;
-(NSDate *)filterDate;
-(void)setFilterDate:(NSDate *)arg1 ;
-(BOOL)respectMinMaxLimit;
-(id)_itemsForSection:(id)arg1 items:(id)arg2 previouslyChosenItems:(id)arg3 allowLeadingCell:(BOOL)arg4 leadingCellItemID:(id*)arg5 priorClusterIDsInOtherSections:(id)arg6 sectionItemsLimit:(unsigned long long)arg7 otherArticleIDs:(id)arg8 embedsLimit:(unsigned long long)arg9 remainingSlots:(double)arg10 slotsUsed:(double*)arg11 noMoreItemsToGive:(BOOL*)arg12 noRoomForMoreItems:(BOOL*)arg13 slotAllocationByDynamicSlotItemID:(id)arg14 ;
-(id)_sectionFilterTransformationWithDescriptor:(id)arg1 priorClusterIDsInOtherSections:(id)arg2 priorClusterIDsInSection:(id)arg3 otherArticleIDs:(id)arg4 embedsLimit:(unsigned long long)arg5 ;
-(void)setRespectMinMaxLimit:(BOOL)arg1 ;
@end

