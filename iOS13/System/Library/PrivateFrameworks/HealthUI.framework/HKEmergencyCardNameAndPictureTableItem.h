/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellHeightChangeDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@protocol HKEmergencyCardRowHeightChangeDelegate;
@class HKMedicalIDEditorNameAndPhotoCell, NSString;

@interface HKEmergencyCardNameAndPictureTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	HKMedicalIDEditorNameAndPhotoCell* _cell;
	id<HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate;              //@synthesize rowHeightChangeDelegate=_rowHeightChangeDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setData:(id)arg1 ;
-(id)title;
-(id)_cell;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)commitEditing;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3 ;
-(void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3 ;
-(void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(CGRect)arg3 inView:(id)arg4 ;
-(void)setRowHeightChangeDelegate:(id<HKEmergencyCardRowHeightChangeDelegate>)arg1 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(void)_editPhotoTapped:(id)arg1 ;
-(double)_cellFittedHeightWithWidth:(double)arg1 ;
-(id<HKEmergencyCardRowHeightChangeDelegate>)rowHeightChangeDelegate;
@end

