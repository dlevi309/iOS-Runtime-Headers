/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <SleepHealthAppPlugin/SleepHealthAppPlugin-Structs.h>
#import <UIKitCore/UIPickerView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@interface SleepHealthAppPlugin.TimeIntervalPickerView : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate> {

	 configuration;
	 selectedHourIndex;
	 selectedMinuteIndex;
	 timeIntervalSubscriber;
	 timeIntervalPublisher;
	 $__lazy_storage_$_hourFormatter;
	 $__lazy_storage_$_minuteFormatter;

}
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

