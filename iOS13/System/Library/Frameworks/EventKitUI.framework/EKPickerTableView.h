/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol EKPickerTableViewDelegate;
@class UIDatePicker, UITableView;

@interface EKPickerTableView : UIView {

	UIDatePicker* _datePicker;
	UITableView* _tableView;
	BOOL _showsDatePicker;
	BOOL _usesKeyboard;
	id<EKPickerTableViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIDatePicker * datePicker;                                //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<EKPickerTableViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDatePicker;                                       //@synthesize showsDatePicker=_showsDatePicker - In the implementation block
@property (assign,nonatomic) BOOL usesKeyboard;                                          //@synthesize usesKeyboard=_usesKeyboard - In the implementation block
@property (assign,nonatomic) BOOL usesBlackDatePicker; 
-(void)dealloc;
-(id<EKPickerTableViewDelegate>)delegate;
-(void)setDelegate:(id<EKPickerTableViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(id)inputView;
-(BOOL)canBecomeFirstResponder;
-(UIDatePicker *)datePicker;
-(void)_datePickerDoubleTapped:(id)arg1 ;
-(double)_heightForDatePicker;
-(id)initWithFrame:(CGRect)arg1 tableViewController:(id)arg2 ;
-(CGRect)_frameForDatePicker;
-(void)_updateTableContentInsetForKeyboard:(id)arg1 ;
-(void)setShowsDatePicker:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateTableContentInset;
-(void)setUsesKeyboard:(BOOL)arg1 ;
-(void)setUsesBlackDatePicker:(BOOL)arg1 ;
-(BOOL)usesBlackDatePicker;
-(void)setShowsDatePicker:(BOOL)arg1 ;
-(double)heightWithDatePickerAndTableHeight:(double)arg1 ;
-(BOOL)showsDatePicker;
-(BOOL)usesKeyboard;
@end

