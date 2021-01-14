/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBHHomeScreenUsageMonitorObserver <NSObject>
@optional
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconRemoved:(id)arg2;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidAppear:(id)arg2 forWidgetIcon:(id)arg3;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteCurrentPageIndexChanged:(unsigned long long)arg2;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidDisappear:(id)arg2 forWidgetIcon:(id)arg3;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconAdded:(id)arg2;
-(void)homeScreenUsageAggregatorDidNoteHomeScreenLayoutChanged:(id)arg1;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconStackChangedActiveWidget:(id)arg2;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteUserDislikedWidgetIconStackSuggestion:(id)arg2;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteUserTappedWidgetIcon:(id)arg2;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteRootControllerWillAppearWithPageIndex:(unsigned long long)arg2;

@end

