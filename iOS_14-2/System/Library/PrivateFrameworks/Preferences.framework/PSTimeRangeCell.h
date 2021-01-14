/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)accessibilityConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 ;
-(id)regularConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 ;
@end

