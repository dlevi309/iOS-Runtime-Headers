/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STTableCell.h>

@class STDailyAverageView, STUsageSummaryTitleView, STUsageGraphViewController, STHorizontallySegmentedView;

@interface STDailyAverageSummaryTableViewCell : STTableCell {

	STDailyAverageView* _dailyAverageView;
	STUsageSummaryTitleView* _titleView;
	STUsageGraphViewController* _usageGraphViewController;
	STHorizontallySegmentedView* _topItemsView;

}

@property (readonly) STUsageSummaryTitleView * titleView;                                //@synthesize titleView=_titleView - In the implementation block
@property (readonly) STUsageGraphViewController * usageGraphViewController;              //@synthesize usageGraphViewController=_usageGraphViewController - In the implementation block
@property (readonly) STHorizontallySegmentedView * topItemsView;                         //@synthesize topItemsView=_topItemsView - In the implementation block
@property (readonly) STDailyAverageView * dailyAverageView;                              //@synthesize dailyAverageView=_dailyAverageView - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(STUsageSummaryTitleView *)titleView;
-(void)_numberOfLinesDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)_layoutDidChangeFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(id)initWithUsageReport:(id)arg1 ;
-(STDailyAverageView *)dailyAverageView;
-(STUsageGraphViewController *)usageGraphViewController;
-(STHorizontallySegmentedView *)topItemsView;
@end

