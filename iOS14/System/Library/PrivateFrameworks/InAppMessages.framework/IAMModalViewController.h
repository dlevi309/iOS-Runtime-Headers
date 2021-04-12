/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UISheetPresentationControllerDelegate.h>

@protocol IAMViewControllerMetricsDelegate;
@class UIViewController, UIView, NSString;

@interface IAMModalViewController : UIViewController <_UISheetPresentationControllerDelegate> {

	BOOL _shouldPresentFullscreen;
	BOOL _shouldUsePadLayout;
	UIViewController* _contentViewController;
	id<IAMViewControllerMetricsDelegate> _metricsDelegate;
	/*^block*/id _viewControllerWillDismissBlock;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;                                                     //@synthesize contentView=_contentView - In the implementation block
@property (readonly) BOOL shouldUsePadLayout;                                                          //@synthesize shouldUsePadLayout=_shouldUsePadLayout - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                                 //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<IAMViewControllerMetricsDelegate> metricsDelegate;              //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (nonatomic,copy) id viewControllerWillDismissBlock;                                          //@synthesize viewControllerWillDismissBlock=_viewControllerWillDismissBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentFullscreen;                                             //@synthesize shouldPresentFullscreen=_shouldPresentFullscreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IAMViewControllerMetricsDelegate>)metricsDelegate;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)init;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(BOOL)shouldAutorotate;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(long long)preferredStatusBarStyle;
-(UIView *)contentView;
-(id)viewControllerWillDismissBlock;
-(BOOL)shouldPresentFullscreen;
-(void)setViewControllerWillDismissBlock:(id)arg1 ;
-(void)setShouldPresentFullscreen:(BOOL)arg1 ;
-(BOOL)shouldUsePadLayout;
-(void)setMetricsDelegate:(id<IAMViewControllerMetricsDelegate>)arg1 ;
@end

