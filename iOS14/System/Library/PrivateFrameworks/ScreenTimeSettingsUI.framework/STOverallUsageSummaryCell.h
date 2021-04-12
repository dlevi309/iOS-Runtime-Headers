/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(STUsageSummaryTitleView *)titleView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)dealloc;
-(void)_hasMulitlineLayoutDidChangeFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(STUsageGraphViewController *)weekGraphViewController;
-(STNoUsageDataView *)noUsageDataView;
-(void)_setNoUsageDataViewVisibility;
@end

