/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)frequency;
-(id)initWithDate:(id)arg1 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(long long)numberOfRows;
-(void)frequencyPickerUpdated:(id)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
@end

