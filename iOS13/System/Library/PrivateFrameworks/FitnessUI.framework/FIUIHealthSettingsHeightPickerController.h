/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@class NSLengthFormatter;

@interface FIUIHealthSettingsHeightPickerController : FIUIHealthSettingsPickerController {

	NSLengthFormatter* _heightFormatter;
	/*^block*/id _heightUpdateHandler;

}

@property (nonatomic,copy) id heightUpdateHandler;              //@synthesize heightUpdateHandler=_heightUpdateHandler - In the implementation block
-(void)forceUpdate;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)_heightPickerUpdated;
-(id)_pickerDisplayStringForHeightForRow:(long long)arg1 forComponent:(long long)arg2 ;
-(id)heightUpdateHandler;
-(void)setHeightQuantity:(id)arg1 ;
-(void)setHeightUpdateHandler:(id)arg1 ;
@end

