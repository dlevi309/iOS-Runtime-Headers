/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UINavigationController.h>

@protocol PUPhotoPickerRemoteNavigationControllerDelegate;
@interface PUPhotoPickerRemoteNavigationController : UINavigationController {

	id<PUPhotoPickerRemoteNavigationControllerDelegate> _remoteViewControllerDelegate;

}

@property (assign,nonatomic,__weak) id<PUPhotoPickerRemoteNavigationControllerDelegate> remoteViewControllerDelegate;              //@synthesize remoteViewControllerDelegate=_remoteViewControllerDelegate - In the implementation block
-(id<PUPhotoPickerRemoteNavigationControllerDelegate>)remoteViewControllerDelegate;
-(void)setRemoteViewControllerDelegate:(id<PUPhotoPickerRemoteNavigationControllerDelegate>)arg1 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
@end

