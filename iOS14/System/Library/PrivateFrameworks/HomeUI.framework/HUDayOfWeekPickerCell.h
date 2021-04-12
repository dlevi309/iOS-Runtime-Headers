/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConstraints;
-(void)tintColorDidChange;
-(id<HUDayOfWeekPickerCellDelegate>)delegate;
-(NSArray *)buttons;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)setDelegate:(id<HUDayOfWeekPickerCellDelegate>)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(void)_toggleWeekdayButton:(id)arg1 ;
-(void)_updateSelectedDays;
-(NSSet *)selectedRecurrences;
-(void)setSelectedRecurrences:(NSSet *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

