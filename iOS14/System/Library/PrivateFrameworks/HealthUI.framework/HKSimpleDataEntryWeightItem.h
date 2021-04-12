/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKSimpleDataEntryItem.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class HKSimpleDataEntryPlainTextCell, NSString, UIPickerView, NSNumber;

@interface HKSimpleDataEntryWeightItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource> {

	HKSimpleDataEntryPlainTextCell* _cell;
	NSString* _title;
	NSString* _registrantModelKey;
	UIPickerView* _picker;
	long long _localWeightUnit;
	long long _numberOfRowsForPicker;
	NSNumber* _defaultValue;
	NSNumber* _kilogramValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cell;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)localeDidChange:(id)arg1 ;
-(void)beginEditing;
-(void)updateCellDisplay;
-(id)formattedKeyAndValue;
-(void)_setupPlaceholder;
-(void)_setTextForInputTextField:(id)arg1 ;
-(void)_updateLocaleDependentValues;
-(double)_defaultKilogramValue;
-(id)_formattedValueForDisplay;
-(void)_setWeightValueForSelectedRow:(long long)arg1 ;
-(void)_valueDidChange;
-(id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 weightInKg:(id)arg3 defaultWeightInKg:(id)arg4 ;
@end

