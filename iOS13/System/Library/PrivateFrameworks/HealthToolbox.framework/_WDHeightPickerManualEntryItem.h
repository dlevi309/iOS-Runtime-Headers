/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDAddDataManualEntryItem.h>
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
-(void)beginEditing;
-(void)setTitle:(id)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)generateValue;
-(void)setFeetUnitString:(NSString *)arg1 ;
-(void)setInchUnitString:(NSString *)arg1 ;
-(id)tableViewCells;
-(id)_setupHeightPicker;
-(void)_updateTableViewCell;
-(NSString *)feetUnitString;
-(NSString *)inchUnitString;
@end

