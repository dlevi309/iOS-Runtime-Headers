/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WFTimeTriggerDayOfWeekCellDelegate;
@class NSSet, NSArray, UIStackView;

@interface WFTimeTriggerDayOfWeekCell : UITableViewCell {

	id<WFTimeTriggerDayOfWeekCellDelegate> _delegate;
	NSSet* _selectedRecurrences;
	NSArray* _buttons;
	UIStackView* _stackView;

}

@property (nonatomic,retain) NSArray * buttons;                                                   //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                             //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic,__weak) id<WFTimeTriggerDayOfWeekCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * selectedRecurrences;                                         //@synthesize selectedRecurrences=_selectedRecurrences - In the implementation block
-(void)tintColorDidChange;
-(id<WFTimeTriggerDayOfWeekCellDelegate>)delegate;
-(NSArray *)buttons;
-(UIStackView *)stackView;
-(void)setDelegate:(id<WFTimeTriggerDayOfWeekCellDelegate>)arg1 ;
-(void)setupConstraints;
-(void)setButtons:(NSArray *)arg1 ;
-(NSSet *)selectedRecurrences;
-(void)setSelectedRecurrences:(NSSet *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateSelectedDays;
-(void)toggleWeekdayButton:(id)arg1 ;
@end

