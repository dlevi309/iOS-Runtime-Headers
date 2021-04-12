/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKMedicalIDEditorCell.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class UIPickerView, NSNumber, NSString;

@interface HKMedicalIDEditorWeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIPickerView* _picker;
	long long _localWeightUnit;
	long long _numberOfRowsForPicker;
	NSNumber* _kilogramValue;

}

@property (nonatomic,retain) NSNumber * kilogramValue;              //@synthesize kilogramValue=_kilogramValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)_commonInit;
-(void)commitEditing;
-(id)formattedValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)beginEditing;
-(void)_showPicker;
-(void)_hidePicker;
-(NSNumber *)kilogramValue;
-(void)setKilogramValue:(NSNumber *)arg1 ;
@end

