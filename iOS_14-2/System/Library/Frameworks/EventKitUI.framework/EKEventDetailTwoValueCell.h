/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)titleView;
-(double)_layoutForWidth:(double)arg1 ;
-(id)valueView;
-(BOOL)update;
-(void)layoutSubviews;
-(unsigned)visibleItems;
-(id)value2View;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3 ;
-(int)twoValueCellStyle;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
@end

