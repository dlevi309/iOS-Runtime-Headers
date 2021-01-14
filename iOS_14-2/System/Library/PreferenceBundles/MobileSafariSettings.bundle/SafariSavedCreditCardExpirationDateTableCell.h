/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/MobileSafariSettings-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPickerView, UIPopoverController, NSNumberFormatter, NSString;

@interface SafariSavedCreditCardExpirationDateTableCell : PSTableCell <UIPickerViewDataSource, UIPickerViewDelegate, UIPopoverControllerDelegate> {

	UIPickerView* _pickerView;
	UIPopoverController* _popoverController;
	NSNumberFormatter* _monthNumberFormatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)becomeFirstResponder;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)_pickerView;
-(id)inputView;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)dealloc;
-(void)_updateDetailTextLabel;
-(id)_pickerTitleFont;
-(id)_monthNumberFormatter;
@end

