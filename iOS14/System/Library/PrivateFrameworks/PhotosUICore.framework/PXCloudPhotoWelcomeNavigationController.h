/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UINavigationController.h>

@protocol PXCloudPhotoWelcomeNavigationControllerDismissDelegate;
@interface PXCloudPhotoWelcomeNavigationController : UINavigationController {

	id<PXCloudPhotoWelcomeNavigationControllerDismissDelegate> _dismissDelegate;

}

@property (assign,nonatomic,__weak) id<PXCloudPhotoWelcomeNavigationControllerDismissDelegate> dismissDelegate;              //@synthesize dismissDelegate=_dismissDelegate - In the implementation block
+(id)new;
+(BOOL)shouldPresentWelcomeViewController:(BOOL*)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(id)init;
-(id)initWithRootViewController:(id)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDismissDelegate:(id<PXCloudPhotoWelcomeNavigationControllerDismissDelegate>)arg1 ;
-(id<PXCloudPhotoWelcomeNavigationControllerDismissDelegate>)dismissDelegate;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithWelcomeController:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

