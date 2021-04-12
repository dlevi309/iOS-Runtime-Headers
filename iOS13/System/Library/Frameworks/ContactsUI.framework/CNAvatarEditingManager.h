/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNAvatarCaptureViewControllerDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerVariantListControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol CNAvatarEditingManagerDelegate, AVTAvatarRecord;
@class CNPhotoPickerProviderItem, UIViewController, CNPhotoPickerVariantsManager, UIImage, NSString;

@interface CNAvatarEditingManager : NSObject <CNAvatarCaptureViewControllerDelegate, CNPhotoPickerVariantListControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

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
+(id)croppedAndCenteredAvatarImageFor:(id)arg1 ;
-(id<CNAvatarEditingManagerDelegate>)delegate;
-(void)setDelegate:(id<CNAvatarEditingManagerDelegate>)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2 ;
-(void)photoPickerVariantListControllerDidCancel:(id)arg1 ;
-(void)avatarCaptureController:(id)arg1 didCaptureImage:(id)arg2 ;
-(id)initWithAvatarRecord:(id)arg1 variantsManager:(id)arg2 ;
-(id)initForEditingWithAvatarRecord:(id)arg1 variantsManager:(id)arg2 fromViewController:(id)arg3 ;
-(CNPhotoPickerProviderItem *)originalItem;
-(id)captureFlashViewWithSize:(CGSize)arg1 alpha:(double)arg2 ;
-(id)fullScreenImageFromImage:(id)arg1 inSize:(CGSize)arg2 ;
-(CGRect)computeFullscreenImageRectForScreenWithSize:(CGSize)arg1 ;
-(id)renderImage:(id)arg1 inRect:(CGRect)arg2 ;
-(id)compositeImageDataForImage:(id)arg1 backgroundColor:(id)arg2 ;
-(void)presentImagePickerForImage:(id)arg1 fadeIn:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)imagePickerForItem:(id)arg1 ;
-(id)createImagePickerForEditingImageData:(id)arg1 withCropRect:(CGRect)arg2 customBackgroundColor:(id)arg3 ;
-(void)setOriginalItem:(CNPhotoPickerProviderItem *)arg1 ;
-(UIImage *)imageWithAlpha;
-(void)setImageWithAlpha:(UIImage *)arg1 ;
@end

