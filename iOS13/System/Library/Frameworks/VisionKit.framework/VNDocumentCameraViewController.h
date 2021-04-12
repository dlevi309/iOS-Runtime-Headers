/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
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
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<VNDocumentCameraViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VNDocumentCameraViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithChildViewController:(id)arg1 ;
-(UIViewController *)childViewController;
-(void)setChildViewController:(UIViewController *)arg1 ;
@end

