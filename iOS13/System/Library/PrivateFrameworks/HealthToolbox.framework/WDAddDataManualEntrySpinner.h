/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDAddDataManualEntryItem.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol WDAddDataManualEntrySpinnerDataSource;
@class UIPickerView, WDManualDataEntryTableViewCell, NSString;

@interface WDAddDataManualEntrySpinner : WDAddDataManualEntryItem <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIPickerView* _pickerView;
	WDManualDataEntryTableViewCell* _tableViewCell;
	long long _selectedPickerViewIndex;
	id<WDAddDataManualEntrySpinnerDataSource> _dataSource;

}

@property (assign,nonatomic) long long _wd_deliveryReason; 
@property (assign,nonatomic,__weak) id<WDAddDataManualEntrySpinnerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginEditing;
-(void)setValue:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<WDAddDataManualEntrySpinnerDataSource>)dataSource;
-(void)setDataSource:(id<WDAddDataManualEntrySpinnerDataSource>)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)generateValue;
-(id)tableViewCells;
-(void)_updateTableViewCellValue;
-(void)set_wd_deliveryReason:(long long)arg1 ;
-(long long)_wd_deliveryReason;
@end

