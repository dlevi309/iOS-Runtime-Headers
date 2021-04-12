/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STTableCell.h>

@class UILabel, STUsageGraphViewController, STUsageItem;

@interface STDrillInGraphCell : STTableCell {

	UILabel* _usageLabel;
	STUsageGraphViewController* _usageGraphViewController;
	STUsageItem* _usageItem;

}

@property (nonatomic,readonly) UILabel * usageLabel;                                               //@synthesize usageLabel=_usageLabel - In the implementation block
@property (nonatomic,readonly) STUsageGraphViewController * usageGraphViewController;              //@synthesize usageGraphViewController=_usageGraphViewController - In the implementation block
@property (nonatomic,readonly) STUsageItem * usageItem;                                            //@synthesize usageItem=_usageItem - In the implementation block
-(void)setValue:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(STUsageItem *)usageItem;
-(STUsageGraphViewController *)usageGraphViewController;
-(UILabel *)usageLabel;
@end

