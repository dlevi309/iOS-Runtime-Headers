/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@interface FIUIHealthSettingsSexPickerController : FIUIHealthSettingsPickerController {

	/*^block*/id _sexUpdateHandler;

}

@property (nonatomic,copy) id sexUpdateHandler;              //@synthesize sexUpdateHandler=_sexUpdateHandler - In the implementation block
-(void)forceUpdate;
-(void)setBiologicalSex:(long long)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(long long)_biologicalSexForRow:(long long)arg1 ;
-(void)_updateWithBiologicalSex:(long long)arg1 ;
-(id)sexUpdateHandler;
-(void)setSexUpdateHandler:(id)arg1 ;
@end

