/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>
#import <libobjc.A.dylib/PUSlideshowViewControllerDelegate.h>

@class NSString;

@interface PUPXPhotoKitSlideShowAssetActionPerformer : PXPhotoKitAssetActionPerformer <PUSlideshowViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformOnSubsetOfSelection;
+(id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3 ;
+(BOOL)canPerformOnImplicitSelection;
+(BOOL)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2 ;
+(id)createActivityWithActionManager:(id)arg1 ;
-(void)performUserInteractionTask;
-(void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2 ;
-(void)_startSlideshow;
@end

