/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {

	UILabel* _recurrenceLabel;
	double _lastLayoutWidth;

}
-(double)height;
-(void)layoutSubviews;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)_recurrenceLabel;
-(id)_myTableView;
-(void)setRecurrenceString:(id)arg1 ;
@end

