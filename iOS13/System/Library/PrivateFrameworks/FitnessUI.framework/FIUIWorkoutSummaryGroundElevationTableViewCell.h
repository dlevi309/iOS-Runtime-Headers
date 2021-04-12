/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIFont, UILabel, FIUIDividerView, NSString;

@interface FIUIWorkoutSummaryGroundElevationTableViewCell : UITableViewCell {

	UIFont* _labelFont;
	UILabel* _titleLabel;
	UILabel* _minElevationLabel;
	UILabel* _maxElevationLabel;
	FIUIDividerView* _dividerView;
	NSString* _minElevation;
	NSString* _maxElevation;

}
+(double)rowHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupUI;
-(void)setMinElevationString:(id)arg1 ;
-(void)setMaxElevationString:(id)arg1 ;
@end

