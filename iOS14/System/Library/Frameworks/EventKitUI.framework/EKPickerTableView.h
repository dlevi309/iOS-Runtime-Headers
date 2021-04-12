/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<EKPickerTableViewDelegate>)delegate;
-(UITableView *)tableView;
-(double)_heightForDatePicker;
-(id)initWithFrame:(CGRect)arg1 tableViewController:(id)arg2 ;
-(CGRect)_frameForDatePicker;
-(void)setShowsDatePicker:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateTableContentInset;
-(void)setUsesKeyboard:(BOOL)arg1 ;
-(void)setUsesBlackDatePicker:(BOOL)arg1 ;
-(void)_updateTableContentInsetForKeyboard:(id)arg1 ;
-(BOOL)usesBlackDatePicker;
-(double)heightWithDatePickerAndTableHeight:(double)arg1 ;
-(BOOL)usesKeyboard;
-(void)_datePickerDoubleTapped:(id)arg1 ;
-(id)inputView;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<EKPickerTableViewDelegate>)arg1 ;
-(UIDatePicker *)datePicker;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)showsDatePicker;
-(void)setShowsDatePicker:(BOOL)arg1 ;
-(void)dealloc;
@end

