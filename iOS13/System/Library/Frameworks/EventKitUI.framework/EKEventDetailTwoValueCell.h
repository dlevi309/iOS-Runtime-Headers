/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell {

	int _style;
	UILabel* _titleView;
	UILabel* _valueView;
	UILabel* _value2View;
	int _twoValueCellStyle;

}

@property (nonatomic,readonly) unsigned visibleItems; 
-(BOOL)update;
-(void)layoutSubviews;
-(id)titleView;
-(unsigned)visibleItems;
-(id)valueView;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)value2View;
-(double)_layoutForWidth:(double)arg1 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3 ;
-(int)twoValueCellStyle;
@end

