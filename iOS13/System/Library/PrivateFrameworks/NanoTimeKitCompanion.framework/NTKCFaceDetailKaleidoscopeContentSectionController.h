/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionHorizontalSectionController.h>
#import <libobjc.A.dylib/NTKCFaceDetailKaleidoscopeEditOptionCellDelegate.h>

@protocol NTKCFaceDetailEditOptionSectionDelegate;
@class NTKCompanionKaleidoscopeEditor, UIImagePickerController, UIViewController, NSString;

@interface NTKCFaceDetailKaleidoscopeContentSectionController : NTKCFaceDetailEditOptionHorizontalSectionController <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> {

	NTKCompanionKaleidoscopeEditor* _editor;
	UIImagePickerController* _presentedPicker;
	BOOL _externalAssetSet;
	id<NTKCFaceDetailEditOptionSectionDelegate> delegate;
	UIViewController* _parentViewController;

}

@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasSectionForFace:(id)arg1 forEditMode:(long long)arg2 ;
+(BOOL)supressesSectionForExternalAssets:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(UIViewController *)parentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)_presentPhotoPicker;
-(void)setSelectedOptions:(id)arg1 ;
-(BOOL)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2 ;
-(void)kaleidoscopeEditOptionCellDidSelectUserOption:(id)arg1 ;
-(id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5 ;
-(void)setExternalAsset:(id)arg1 ;
-(void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2 ;
-(BOOL)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2 ;
-(BOOL)_handleDidSelectActionRowForOption:(id)arg1 ;
-(Class)editCellClass;
-(void)_setPhotoFromDictionary:(id)arg1 ;
-(void)_setPhotoFromAsset:(id)arg1 ;
-(void)_setRawPhoto:(id)arg1 ;
-(void)_finalizeEditor;
@end
