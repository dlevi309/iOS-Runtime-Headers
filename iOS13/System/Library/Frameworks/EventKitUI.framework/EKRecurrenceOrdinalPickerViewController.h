/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol EKRecurrenceOrdinalPickerViewControllerDelegate;
@class UIPickerView, NSString;

@interface EKRecurrenceOrdinalPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

	id<EKRecurrenceOrdinalPickerViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIPickerView * pickerView; 
@property (assign) id<EKRecurrenceOrdinalPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<EKRecurrenceOrdinalPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<EKRecurrenceOrdinalPickerViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(UIPickerView *)pickerView;
-(int)ordinalValue;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)_leftColumn;
-(id)_rightColumn;
-(int)dayMask;
@end

