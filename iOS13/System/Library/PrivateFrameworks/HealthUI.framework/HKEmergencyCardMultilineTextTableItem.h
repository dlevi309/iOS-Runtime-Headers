/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3 ;
-(void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3 ;
-(void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(CGRect)arg3 inView:(id)arg4 ;
-(void)setRowHeightChangeDelegate:(id<HKEmergencyCardRowHeightChangeDelegate>)arg1 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(id)_editableCell;
-(id)_multilineStringValue;
-(void)_updateMultilineStringValueWithValue:(id)arg1 ;
-(double)_cellFittedHeightWithWidth:(double)arg1 ;
-(id<HKEmergencyCardRowHeightChangeDelegate>)rowHeightChangeDelegate;
-(void)_configureEditableCell:(id)arg1 ;
@end

