/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/AVTPoseSelectionViewControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol CNAvatarEditingManagerDelegate, AVTAvatarRecord;
@class CNPhotoPickerProviderItem, UIViewController, CNPhotoPickerVariantsManager, UIImage, NSString;

@interface CNAvatarEditingManager : NSObject <AVTPoseSelectionViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	id<CNAvatarEditingManagerDelegate> _delegate;
	CNPhotoPickerProviderItem* _originalItem;
	id<AVTAvatarRecord> _avatarRecord;
	UIViewController* _viewController;
	CNPhotoPickerVariantsManager* _variantsManager;
	UIImage* _imageWithAlpha;

}

@property (nonatomic,readonly) id<AVTAvatarRecord> avatarRecord;                              //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) CNPhotoPickerVariantsManager * variantsManager;                //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,retain) UIImage * imageWithAlpha;                                        //@synthesize imageWithAlpha=_imageWithAlpha - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarEditingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * originalItem;                        //@synthesize originalItem=_originalItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)setViewController:(UIViewController *)arg1 ;
-(id<CNAvatarEditingManagerDelegate>)delegate;
-(void)setOriginalItem:(CNPhotoPickerProviderItem *)arg1 ;
-(void)poseSelectionControllerDidCancel:(id)arg1 ;
-(void)poseSelectionController:(id)arg1 didSelectPoseWithConfiguration:(id)arg2 ;
-(id)renderImage:(id)arg1 inRect:(CGRect)arg2 ;
-(id)initForEditingWithAvatarRecord:(id)arg1 variantsManager:(id)arg2 fromViewController:(id)arg3 ;
-(UIImage *)imageWithAlpha;
-(id)captureFlashViewWithSize:(CGSize)arg1 alpha:(double)arg2 ;
-(id)fullScreenImageFromImage:(id)arg1 inSize:(CGSize)arg2 ;
-(void)setImageWithAlpha:(UIImage *)arg1 ;
-(CGRect)computeFullscreenImageRectForScreenWithSize:(CGSize)arg1 ;
-(id)compositeImageDataForImage:(id)arg1 backgroundColor:(id)arg2 ;
-(void)presentImagePickerForImage:(id)arg1 fadeIn:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)imagePickerForItem:(id)arg1 ;
-(id)createImagePickerForEditingImageData:(id)arg1 withCropRect:(CGRect)arg2 customBackgroundColor:(id)arg3 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(CNPhotoPickerProviderItem *)originalItem;
-(void)setDelegate:(id<CNAvatarEditingManagerDelegate>)arg1 ;
-(UIViewController *)viewController;
-(id<AVTAvatarRecord>)avatarRecord;
-(id)initWithAvatarRecord:(id)arg1 variantsManager:(id)arg2 ;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
@end
