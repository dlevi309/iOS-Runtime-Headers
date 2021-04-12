/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertySimpleEditingCell.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class UIDatePicker, CNDatePickerContainerView, UIViewController, NSString;

@interface CNPropertyDateEditingCell : CNPropertySimpleEditingCell <UITextFieldDelegate, CNPickerControllerDelegate> {

	UIDatePicker* _datePicker;
	CNDatePickerContainerView* _datePickerContainerView;
	UIViewController* _contentViewController;

}

@property (nonatomic,retain) UIDatePicker * datePicker;                                        //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) CNDatePickerContainerView * datePickerContainerView;              //@synthesize datePickerContainerView=_datePickerContainerView - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                         //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(UIDatePicker *)datePicker;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)updateValueWithPropertyItem:(id)arg1 ;
-(void)labelButtonClicked:(id)arg1 ;
-(void)regainFocus;
-(void)localeUpdated:(id)arg1 ;
-(void)dateChanged:(id)arg1 ;
-(BOOL)_shouldUseYearlessPickerForDateComponents:(id)arg1 ;
-(void)applyCalendarAndDateToDatePicker;
-(CNDatePickerContainerView *)datePickerContainerView;
-(void)setDatePickerContainerView:(CNDatePickerContainerView *)arg1 ;
@end

