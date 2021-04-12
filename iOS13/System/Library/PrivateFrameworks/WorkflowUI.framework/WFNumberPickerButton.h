/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFBackgroundFadingButton.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <libobjc.A.dylib/WFInputViewMutable.h>

@protocol WFVariableProvider, WFVariableUIDelegate;
@class UIView, NSSet, UIPickerView, WFVariableInputCoordinator, NSString;

@interface WFNumberPickerButton : WFBackgroundFadingButton <UIPickerViewDataSource, UIPickerViewDelegate, WFInputViewMutable> {

	UIView* _inputView;
	UIView* _inputAccessoryView;
	NSSet* _allowedVariableTypes;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	unsigned long long _currentValue;
	/*^block*/id _updateBlock;
	/*^block*/id _variableBlock;
	UIPickerView* _pickerView;
	WFVariableInputCoordinator* _variableCoordinator;
	NSRange _allowedRange;

}

@property (nonatomic,readonly) UIPickerView * pickerView;                                     //@synthesize pickerView=_pickerView - In the implementation block
@property (nonatomic,retain) WFVariableInputCoordinator * variableCoordinator;                //@synthesize variableCoordinator=_variableCoordinator - In the implementation block
@property (assign,nonatomic) NSRange allowedRange;                                            //@synthesize allowedRange=_allowedRange - In the implementation block
@property (assign,nonatomic) unsigned long long currentValue;                                 //@synthesize currentValue=_currentValue - In the implementation block
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
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(unsigned long long)currentValue;
-(void)setCurrentValue:(unsigned long long)arg1 ;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(UIPickerView *)pickerView;
-(id<WFVariableProvider>)variableProvider;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(id)variableBlock;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)setVariableBlock:(id)arg1 ;
-(WFVariableInputCoordinator *)variableCoordinator;
-(void)setVariableCoordinator:(WFVariableInputCoordinator *)arg1 ;
-(void)setAllowedRange:(NSRange)arg1 ;
-(void)updateVariableBlock;
-(NSRange)allowedRange;
@end

