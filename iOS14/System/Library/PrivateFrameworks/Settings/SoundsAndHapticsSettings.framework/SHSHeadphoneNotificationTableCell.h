/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
*/

#import <Preferences/PSTableCell.h>

@class UILabel, NSArray, CCChartView;

@interface SHSHeadphoneNotificationTableCell : PSTableCell {

	UILabel* _titleLabel;
	UILabel* _countLabel;
	NSArray* _constraints;
	NSArray* _notificationData;
	CCChartView* _notificationChart;
	BOOL _shouldHideChart;

}
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)createNotificationChart;
-(id)accessibilityConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 hideChart:(BOOL)arg3 ;
-(id)regularConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 hideChart:(BOOL)arg3 ;
-(id)notificationChartSpec;
@end

