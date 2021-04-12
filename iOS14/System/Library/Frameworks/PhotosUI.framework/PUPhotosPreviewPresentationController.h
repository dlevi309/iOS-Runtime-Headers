/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/_UIPreviewPresentationController.h>

@protocol PUPhotosPreviewPresentationControllerDelegate;
@interface PUPhotosPreviewPresentationController : _UIPreviewPresentationController {

	id<PUPhotosPreviewPresentationControllerDelegate> _photosPreviewingDelegate;

}

@property (assign,nonatomic,__weak) id<PUPhotosPreviewPresentationControllerDelegate> photosPreviewingDelegate;              //@synthesize photosPreviewingDelegate=_photosPreviewingDelegate - In the implementation block
-(void)_revealTransitionDidComplete:(BOOL)arg1 ;
-(void)setPhotosPreviewingDelegate:(id<PUPhotosPreviewPresentationControllerDelegate>)arg1 ;
-(id<PUPhotosPreviewPresentationControllerDelegate>)photosPreviewingDelegate;
@end

