/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKSimpleDataEntryItem.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class HKSimpleDataEntryPlainTextCell, NSString, UIPickerView, NSNumber;

@interface HKSimpleDataEntryHeightItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource> {

	HKSimpleDataEntryPlainTextCell* _cell;
	NSString* _title;
	NSString* _registrantModelKey;
	UIPickerView* _picker;
	BOOL _usesImperialUnits;
	NSNumber* _defaultValue;
	NSNumber* _centimeterValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginEditing;
-(id)cell;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)localeDidChange:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 heightInCm:(id)arg3 defaultHeightInCm:(id)arg4 ;
-(id)formattedKeyAndValue;
-(void)_setupPlaceholder;
-(void)updateCellDisplay;
-(void)_setTextForInputTextField:(id)arg1 ;
-(void)_updateLocaleDependentValues;
-(double)_defaultCentimeterValue;
-(void)_setHeightValueForPicker:(id)arg1 selectedRow:(long long)arg2 ;
-(void)_valueDidChange;
-(id)_formattedValueForDisplay;
@end

