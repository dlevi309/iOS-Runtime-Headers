/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingPickerViewController : OBWelcomeController <UIPickerViewDataSource, UIPickerViewDelegate> {

	 userInfo;
	 delegate;
	 pickerType;
	 descriptionText;
	 $__lazy_storage_$_dayPickerRange;
	 $__lazy_storage_$_datePicker;
	 $__lazy_storage_$_dayPicker;
	 $__lazy_storage_$_dateComponentsFormatter;
	 $__lazy_storage_$_pickerDetailLabel;
	 $__lazy_storage_$_descriptionLabel;
	 $__lazy_storage_$_nextButton;

}
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)viewDidLoad;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)nextButtonTapped:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
-(void)skipButtonTapped:(id)arg1 ;
@end

