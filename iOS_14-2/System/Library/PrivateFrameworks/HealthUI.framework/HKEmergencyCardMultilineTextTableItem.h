/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellHeightChangeDelegate.h>

@protocol HKEmergencyCardRowHeightChangeDelegate;
@class HKMedicalIDEditorMultilineStringCell;

@interface HKEmergencyCardMultilineTextTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate> {

	HKMedicalIDEditorMultilineStringCell* _editableCell;
	id<HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate;              //@synthesize rowHeightChangeDelegate=_rowHeightChangeDelegate - In the implementation block
-(void)setData:(id)arg1 ;
-(void)commitEditing;
-(id)_placeholderText;
-(void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3 ;
-(void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3 ;
-(void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(CGRect)arg3 inView:(id)arg4 ;
-(id)_multilineStringValue;
-(void)_updateMultilineStringValueWithValue:(id)arg1 ;
-(double)_cellFittedHeightWithWidth:(double)arg1 ;
-(id<HKEmergencyCardRowHeightChangeDelegate>)rowHeightChangeDelegate;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(void)setRowHeightChangeDelegate:(id<HKEmergencyCardRowHeightChangeDelegate>)arg1 ;
-(void)_configureEditableCell:(id)arg1 ;
-(id)_editableCell;
@end

