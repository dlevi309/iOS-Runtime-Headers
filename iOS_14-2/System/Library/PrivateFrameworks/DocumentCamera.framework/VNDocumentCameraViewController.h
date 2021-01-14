/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UIViewController.h>

@protocol VNDocumentCameraViewControllerDelegate;
@class UIViewController;

@interface VNDocumentCameraViewController : UIViewController {

	id<VNDocumentCameraViewControllerDelegate> _delegate;
	UIViewController* _childViewController;

}

@property (setter=setChildViewController:,nonatomic,retain) UIViewController * childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
@property (assign,nonatomic,__weak) id<VNDocumentCameraViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isSupported;
+(id)newDefaultViewController;
+(id)newViewServiceViewController;
+(id)newInProcessViewController;
-(BOOL)prefersStatusBarHidden;
-(id)init;
-(id<VNDocumentCameraViewControllerDelegate>)delegate;
-(UIViewController *)childViewController;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(void)setDelegate:(id<VNDocumentCameraViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithChildViewController:(id)arg1 ;
@end

