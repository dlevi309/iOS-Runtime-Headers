/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/APWebProcessDelegate.h>

@interface PromotedContentUI.ExpandViewController : UIViewController <APWebProcessDelegate> {

	 webView;
	 closeButton;
	 maximumExpandedSize;
	 tapGestureRecognizer;
	 webProcessDelegate;
	 actionDelegate;
	 $__lazy_storage_$_closeButtonPadding;

}
-(void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
-(void)webProcessMRAIDJSODidCallClose;
-(void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumWidth:(double)arg2 andHeight:(double)arg3 ;
-(void)webProcessMRAIDJSODidCallOpen:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tapRecognized:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)closeButtonTappedWithSender:(id)arg1 ;
@end

