/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSTableCell.h>

@protocol PSTimeRangeCellDelegate;
@class UILabel, NSArray;

@interface PSTimeRangeCell : PSTableCell {

	UILabel* _fromTitle;
	UILabel* _toTitle;
	UILabel* _fromTime;
	UILabel* _toTime;
	NSArray* _constraints;
	id<PSTimeRangeCellDelegate> _delegate;

}
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(id)accessibilityConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 ;
-(id)regularConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 ;
@end

