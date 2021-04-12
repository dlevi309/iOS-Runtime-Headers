/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKMedicalIDEditorCell.h>

@class UIDatePicker, NSDate;

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell {

	UIDatePicker* _picker;
	NSDate* _dateValue;

}

@property (nonatomic,retain) NSDate * dateValue;              //@synthesize dateValue=_dateValue - In the implementation block
-(void)beginEditing;
-(void)setDateValue:(NSDate *)arg1 ;
-(NSDate *)dateValue;
-(void)commitEditing;
-(void)_showDatePicker;
-(id)formattedValue;
-(void)_dateChanged:(id)arg1 ;
-(void)_configureDatePicker;
-(void)_hideDatePicker;
@end

