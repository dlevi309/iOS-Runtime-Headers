/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKNavigatorViewController.h>

@class OKPageViewController;

@interface OKNavigatorFixedViewControllerProxy : OKNavigatorViewController {

	OKPageViewController* _pageViewController;

}

@property (nonatomic,retain) OKPageViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prepareForDisplay;
-(void)viewWillLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)commonInit;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(OKPageViewController *)pageViewController;
-(void)setPageViewController:(OKPageViewController *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)resolutionDidChange;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)updatePageViewController;
@end

