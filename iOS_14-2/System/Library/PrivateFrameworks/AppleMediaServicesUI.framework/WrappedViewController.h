/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AMSUICommonViewController.h>

@class UIViewController;

@interface WrappedViewController : AMSUICommonViewController {

	/*^block*/id _dismissBlock;
	UIViewController* _viewController;

}

@property (nonatomic,copy) id dismissBlock;                                  //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(UIViewController *)viewController;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
@end

