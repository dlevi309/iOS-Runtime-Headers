/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)bundleURL;
-(id<TKApplicationViewControllerDelegate>)delegate;
-(NSString *)viewName;
-(UIViewController *)childViewController;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(void)setDelegate:(id<TKApplicationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)setLoadingViewController:(UIViewController *)arg1 ;
-(UIViewController *)loadingViewController;
-(void)dismissApplicationControllerAnimated:(BOOL)arg1 ;
-(id)initWithBundleURL:(id)arg1 viewName:(id)arg2 delegate:(/*^block*/id)arg3 ;
-(BOOL)handleApplicationControllerError;
-(void)didLoadViewController:(id)arg1 ;
-(id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 ;
-(id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withData:(id)arg3 ;
-(id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withDataRequest:(id)arg3 ;
@end

