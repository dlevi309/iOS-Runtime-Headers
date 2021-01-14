/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDAddDataManualEntryItem.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class UIPickerView, WDManualDataEntryTableViewCell, NSString;

@interface _WDHeightPickerManualEntryItem : WDAddDataManualEntryItem <UIPickerViewDelegate, UIPickerViewDataSource> {

	UIPickerView* _heightPicker;
	WDManualDataEntryTableViewCell* _tableViewCell;
	NSString* _feetUnitString;
	NSString* _inchUnitString;

}

@property (nonatomic,retain) NSString * feetUnitString;              //@synthesize feetUnitString=_feetUnitString - In the implementation block
@property (nonatomic,retain) NSString * inchUnitString;              //@synthesize inchUnitString=_inchUnitString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTitle:(id)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)generateValue;
-(id)tableViewCells;
-(void)setFeetUnitString:(NSString *)arg1 ;
-(void)setInchUnitString:(NSString *)arg1 ;
-(id)_setupHeightPicker;
-(void)_updateTableViewCell;
-(NSString *)feetUnitString;
-(NSString *)inchUnitString;
-(void)beginEditing;
@end

