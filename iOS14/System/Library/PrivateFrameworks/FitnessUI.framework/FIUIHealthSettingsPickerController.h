/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <libobjc.A.dylib/FIUIHealthSettingsForceUpdatable.h>

@class UIPickerView, NSString;

@interface FIUIHealthSettingsPickerController : NSObject <UIPickerViewDelegate, UIPickerViewDataSource, FIUIHealthSettingsForceUpdatable> {

	BOOL _isMetricLocale;
	UIPickerView* _pickerView;

}

@property (nonatomic,retain) UIPickerView * pickerView;              //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic) BOOL isMetricLocale;                    //@synthesize isMetricLocale=_isMetricLocale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)forceUpdate;
-(id)init;
-(void)setPickerView:(UIPickerView *)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(UIPickerView *)pickerView;
-(BOOL)isMetricLocale;
-(void)setIsMetricLocale:(BOOL)arg1 ;
@end

