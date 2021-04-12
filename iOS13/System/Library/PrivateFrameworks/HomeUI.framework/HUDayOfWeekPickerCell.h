/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUDayOfWeekPickerCellDelegate;
@class HFItem, NSSet, NSArray, UIStackView, NSString;

@interface HUDayOfWeekPickerCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	id<HUDayOfWeekPickerCellDelegate> _delegate;
	NSSet* _selectedRecurrences;
	NSArray* _buttons;
	UIStackView* _buttonStackView;

}

@property (nonatomic,retain) NSArray * buttons;                                                //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIStackView * buttonStackView;                                    //@synthesize buttonStackView=_buttonStackView - In the implementation block
@property (assign,nonatomic,__weak) id<HUDayOfWeekPickerCellDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * selectedRecurrences;                                      //@synthesize selectedRecurrences=_selectedRecurrences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(id<HUDayOfWeekPickerCellDelegate>)delegate;
-(void)setDelegate:(id<HUDayOfWeekPickerCellDelegate>)arg1 ;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)tintColorDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(void)_setupConstraints;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)_toggleWeekdayButton:(id)arg1 ;
-(void)_updateSelectedDays;
-(NSSet *)selectedRecurrences;
-(void)setSelectedRecurrences:(NSSet *)arg1 ;
@end

