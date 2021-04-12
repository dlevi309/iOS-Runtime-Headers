/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIFont, UILabel, FIUIDividerView, NSDate, NSDateFormatter;

@interface FIUIWorkoutSummaryDateTimeTableViewCell : UITableViewCell {

	UIFont* _labelFont;
	UIFont* _smallCapFont;
	UILabel* _dateLabel;
	UILabel* _timeLabel;
	FIUIDividerView* _dividerView;
	NSDate* _workoutDate;
	NSDateFormatter* _timeFormatter;

}
+(double)rowHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupUI;
-(void)_configureAttributedString:(id)arg1 ;
-(void)_addSmallCapAttributeToString:(id)arg1 matchingString:(id)arg2 ;
-(void)setDateStringWithDate:(id)arg1 ;
-(void)setTimeStringWithStartDate:(id)arg1 endDate:(id)arg2 ;
@end

