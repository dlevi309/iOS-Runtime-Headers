/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/

#import <UIKitCore/UIViewController.h>

@protocol TKApplicationViewControllerDelegate;
@class NSURL, NSString, UIViewController;

@interface TKApplicationViewController : UIViewController {

	NSURL* _bundleURL;
	NSString* _viewName;
	UIViewController* _childViewController;
	UIViewController* _loadingViewController;
	id<TKApplicationViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIViewController * childViewController;                               //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,readonly) NSURL * bundleURL;                                                  //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,readonly) NSString * viewName;                                                //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,retain) UIViewController * loadingViewController;                             //@synthesize loadingViewController=_loadingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TKApplicationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)applicationViewController:(id)arg1 ;
-(id<TKApplicationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TKApplicationViewControllerDelegate>)arg1 ;
-(NSURL *)bundleURL;
-(NSString *)viewName;
-(void)viewDidLoad;
-(UIViewController *)childViewController;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(UIViewController *)loadingViewController;
-(void)setLoadingViewController:(UIViewController *)arg1 ;
-(void)dismissApplicationControllerAnimated:(BOOL)arg1 ;
-(id)initWithBundleURL:(id)arg1 viewName:(id)arg2 delegate:(/*^block*/id)arg3 ;
-(BOOL)handleApplicationControllerError;
-(void)didLoadViewController:(id)arg1 ;
-(id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 ;
-(id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withData:(id)arg3 ;
-(id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withDataRequest:(id)arg3 ;
@end

