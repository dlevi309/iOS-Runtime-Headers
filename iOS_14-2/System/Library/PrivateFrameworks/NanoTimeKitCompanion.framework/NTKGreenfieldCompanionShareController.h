/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate.h>

@class NTKFace, UIViewController, NTKGreenfieldCompanionActivityViewController, NSString;

@interface NTKGreenfieldCompanionShareController : NSObject <NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> {

	NTKFace* _face;
	NTKFace* _updatedFace;
	UIViewController* _originatedViewController;
	NTKGreenfieldCompanionActivityViewController* _activityViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)_handleError:(id)arg1 ;
-(void)companionSharePhotosPickerViewController:(id)arg1 didFinishWithFace:(id)arg2 ;
-(void)shareWatchFace:(id)arg1 fromViewController:(id)arg2 ;
-(void)_startFaceSharing;
-(void)_presentInternalWarningIfNeededWithContinueBlock:(/*^block*/id)arg1 ;
-(void)_showPhotosPickerView;
-(void)_prepareForShareSheet;
-(void)_presentShareSheetWithDraftRecipe:(id)arg1 previewImage:(id)arg2 ;
@end

