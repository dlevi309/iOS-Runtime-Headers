/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityTextSizeModule.bundle/AccessibilityTextSizeModule
*/

#import <UIKitCore/UIViewController.h>

@protocol AXCCIconViewControllerDelegate;
@class UIImage, UIImageView, UITapGestureRecognizer;

@interface AXCCIconViewController : UIViewController {

	UIImage* _image;
	UIImageView* _glyphImageView;
	UITapGestureRecognizer* _tapRecognizer;
	id<AXCCIconViewControllerDelegate> _iconDelegate;

}

@property (assign,nonatomic,__weak) id<AXCCIconViewControllerDelegate> iconDelegate;              //@synthesize iconDelegate=_iconDelegate - In the implementation block
-(id)initWithImage:(id)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)setIconDelegate:(id<AXCCIconViewControllerDelegate>)arg1 ;
-(id<AXCCIconViewControllerDelegate>)iconDelegate;
@end

