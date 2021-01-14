/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {

	UILabel* _recurrenceLabel;
	double _lastLayoutWidth;

}
-(double)height;
-(void)setRecurrenceString:(id)arg1 ;
-(void)layoutSubviews;
-(id)_recurrenceLabel;
-(id)_myTableView;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
@end

