/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIViewControllerPreviewing.h>

@class UIViewController, NSString;

@interface SKUIPreviewContainerViewController : UIViewController <SKUIViewControllerPreviewing> {

	UIViewController* _childViewController;

}

@property (nonatomic,retain) UIViewController * childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)childViewController;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(id)previewCommitViewController;
@end

