/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKRecurrenceChooserController.h>
#import <libobjc.A.dylib/EKRecurrenceOrdinalPickerViewControllerDelegate.h>

@class EKRecurrenceOrdinalPickerViewController, UITableViewCell, NSString;

@interface EKRecurrenceOrdinalChooserController : EKRecurrenceChooserController <EKRecurrenceOrdinalPickerViewControllerDelegate> {

	EKRecurrenceOrdinalPickerViewController* _pickerViewController;
	UITableViewCell* _cell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDate:(id)arg1 ;
-(long long)numberOfRows;
-(long long)frequency;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(void)frequencyPickerUpdated:(id)arg1 ;
@end

