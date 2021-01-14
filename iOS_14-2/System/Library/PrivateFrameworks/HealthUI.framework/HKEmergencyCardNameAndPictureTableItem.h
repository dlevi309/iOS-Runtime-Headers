/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_cell;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setData:(id)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(void)commitEditing;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(id)title;
-(void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3 ;
-(void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(CGRect)arg2 inView:(id)arg3 ;
-(void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(CGRect)arg3 inView:(id)arg4 ;
-(void)_updateMedicalIDPhotoMenu;
-(void)_editPhotoTapped:(id)arg1 ;
-(double)_cellFittedHeightWithWidth:(double)arg1 ;
-(id<HKEmergencyCardRowHeightChangeDelegate>)rowHeightChangeDelegate;
-(id)_makeMedicalIDPhotoMenu;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(void)setRowHeightChangeDelegate:(id<HKEmergencyCardRowHeightChangeDelegate>)arg1 ;
@end

