/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/WFInputViewMutable.h>

@protocol WFVariableProvider, WFVariableUIDelegate;
@class UIView, NSDate, NSSet, UIDatePicker, WFVariableInputCoordinator, NSString;

@interface WFDatePickerButton : UIButton <WFInputViewMutable> {

	UIView* _inputView;
	UIView* _inputAccessoryView;
	NSDate* _currentDate;
	NSDate* _minimumDate;
	NSDate* _maximumDate;
	long long _datePickerMode;
	NSSet* _allowedVariableTypes;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	/*^block*/id _updateBlock;
	/*^block*/id _variableBlock;
	UIDatePicker* _datePicker;
	WFVariableInputCoordinator* _variableCoordinator;

}

@property (nonatomic,readonly) UIDatePicker * datePicker;                                     //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) WFVariableInputCoordinator * variableCoordinator;                //@synthesize variableCoordinator=_variableCoordinator - In the implementation block
@property (nonatomic,retain) NSDate * currentDate;                                            //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,retain) NSDate * minimumDate;                                            //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                                            //@synthesize maximumDate=_maximumDate - In the implementation block
@property (assign,nonatomic) long long datePickerMode;                                        //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                      //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                  //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;              //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,copy) id updateBlock;                                                    //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id variableBlock;                                                  //@synthesize variableBlock=_variableBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * inputView;                                              //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                     //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)tintColorDidChange;
-(BOOL)resignFirstResponder;
-(UIView *)inputAccessoryView;
-(UIView *)inputView;
-(void)setInputView:(UIView *)arg1 ;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDatePickerMode:(long long)arg1 ;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(long long)datePickerMode;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(UIDatePicker *)datePicker;
-(NSDate *)currentDate;
-(id<WFVariableProvider>)variableProvider;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(id)variableBlock;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)setVariableBlock:(id)arg1 ;
-(WFVariableInputCoordinator *)variableCoordinator;
-(void)setVariableCoordinator:(WFVariableInputCoordinator *)arg1 ;
-(void)datePickerValueChanged;
@end

