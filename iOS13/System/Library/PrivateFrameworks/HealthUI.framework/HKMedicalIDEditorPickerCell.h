/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKMedicalIDEditorCell.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class UIPickerView, NSArray, NSString;

@interface HKMedicalIDEditorPickerCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIPickerView* _picker;
	long long _chosenValueIndex;
	NSArray* _possibleValues;

}

@property (assign,nonatomic) long long chosenValueIndex;              //@synthesize chosenValueIndex=_chosenValueIndex - In the implementation block
@property (nonatomic,retain) NSArray * possibleValues;                //@synthesize possibleValues=_possibleValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)beginEditing;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)commitEditing;
-(void)setPossibleValues:(NSArray *)arg1 ;
-(NSArray *)possibleValues;
-(id)formattedValue;
-(void)_showPicker;
-(void)_hidePicker;
-(void)setChosenValueIndex:(long long)arg1 ;
-(long long)chosenValueIndex;
@end

