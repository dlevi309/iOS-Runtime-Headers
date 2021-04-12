/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeightQuantity:(id)arg1 ;
-(void)_heightPickerUpdated;
-(id)_pickerDisplayStringForHeightForRow:(long long)arg1 forComponent:(long long)arg2 ;
-(id)heightUpdateHandler;
-(void)setHeightUpdateHandler:(id)arg1 ;
@end

