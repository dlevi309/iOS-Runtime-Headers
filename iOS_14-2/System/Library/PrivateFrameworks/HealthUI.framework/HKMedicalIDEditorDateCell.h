/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKMedicalIDEditorCell.h>

@class UIDatePicker, NSDate;

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell {

	UIDatePicker* _picker;
	NSDate* _dateValue;

}

@property (nonatomic,retain) NSDate * dateValue;              //@synthesize dateValue=_dateValue - In the implementation block
-(NSDate *)dateValue;
-(void)setDateValue:(NSDate *)arg1 ;
-(void)commitEditing;
-(id)formattedValue;
-(void)beginEditing;
-(void)_dateChanged:(id)arg1 ;
-(void)_configureDatePicker;
-(void)_showDatePicker;
-(void)_hideDatePicker;
@end

