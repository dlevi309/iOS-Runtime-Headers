/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class WFSegmentedControlTableItem, UISegmentedControl, NSArray, WFSegmentedControlValue;

@interface WFSegmentedControlTableCell : UITableViewCell {

	WFSegmentedControlTableItem* _tableItem;
	UISegmentedControl* _segmentedControl;
	NSArray* _possibleValues;
	WFSegmentedControlValue* _selectedValue;

}

@property (assign,nonatomic,__weak) WFSegmentedControlTableItem * tableItem;              //@synthesize tableItem=_tableItem - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                       //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,copy) NSArray * possibleValues;                                      //@synthesize possibleValues=_possibleValues - In the implementation block
@property (nonatomic,retain) WFSegmentedControlValue * selectedValue;                     //@synthesize selectedValue=_selectedValue - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)valueChanged:(id)arg1 ;
-(void)setPossibleValues:(NSArray *)arg1 ;
-(NSArray *)possibleValues;
-(WFSegmentedControlValue *)selectedValue;
-(void)setSelectedValue:(WFSegmentedControlValue *)arg1 ;
-(void)setTableItem:(WFSegmentedControlTableItem *)arg1 ;
-(WFSegmentedControlTableItem *)tableItem;
@end

