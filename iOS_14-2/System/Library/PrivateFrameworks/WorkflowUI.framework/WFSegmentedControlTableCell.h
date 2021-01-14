/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)possibleValues;
-(void)valueChanged:(id)arg1 ;
-(WFSegmentedControlValue *)selectedValue;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)setSelectedValue:(WFSegmentedControlValue *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setPossibleValues:(NSArray *)arg1 ;
-(void)setTableItem:(WFSegmentedControlTableItem *)arg1 ;
-(WFSegmentedControlTableItem *)tableItem;
@end

