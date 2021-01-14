/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <libobjc.A.dylib/FIUIHealthSettingsForceUpdatable.h>

@class FIUIHealthSettingsDatePicker, NSString;

@interface FIUIHealthSettingsBirthDatePickerController : NSObject <FIUIHealthSettingsForceUpdatable> {

	FIUIHealthSettingsDatePicker* _datePickerView;
	/*^block*/id _dateOfBirthUpdateHandler;

}

@property (nonatomic,retain) FIUIHealthSettingsDatePicker * datePickerView;              //@synthesize datePickerView=_datePickerView - In the implementation block
@property (nonatomic,copy) id dateOfBirthUpdateHandler;                                  //@synthesize dateOfBirthUpdateHandler=_dateOfBirthUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)forceUpdate;
-(id)init;
-(void)setDateOfBirth:(id)arg1 ;
-(FIUIHealthSettingsDatePicker *)datePickerView;
-(void)setDatePickerView:(FIUIHealthSettingsDatePicker *)arg1 ;
-(id)dateOfBirthUpdateHandler;
-(void)setDateOfBirthUpdateHandler:(id)arg1 ;
@end

