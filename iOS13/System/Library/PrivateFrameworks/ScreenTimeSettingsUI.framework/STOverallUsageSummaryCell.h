/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STTableCell.h>

@class STUsageSummaryTitleView, STUsageGraphViewController, STNoUsageDataView;

@interface STOverallUsageSummaryCell : STTableCell {

	STUsageSummaryTitleView* _titleView;
	STUsageGraphViewController* _weekGraphViewController;
	STNoUsageDataView* _noUsageDataView;

}

@property (readonly) STUsageSummaryTitleView * titleView;                               //@synthesize titleView=_titleView - In the implementation block
@property (readonly) STUsageGraphViewController * weekGraphViewController;              //@synthesize weekGraphViewController=_weekGraphViewController - In the implementation block
@property (readonly) STNoUsageDataView * noUsageDataView;                               //@synthesize noUsageDataView=_noUsageDataView - In the implementation block
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(STUsageSummaryTitleView *)titleView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)_hasMulitlineLayoutDidChangeFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(STUsageGraphViewController *)weekGraphViewController;
-(STNoUsageDataView *)noUsageDataView;
-(void)_setNoUsageDataViewVisibility;
@end

