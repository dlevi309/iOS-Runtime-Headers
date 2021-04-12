/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIViewController.h>

@protocol SKUIServiceComposeReviewViewController, SKComposeReviewDelegate;
@class _UIAsyncInvocation, NSURL, SKRemoteComposeReviewViewController, SKInvocationQueueProxy;

@interface SKComposeReviewViewController : UIViewController {

	_UIAsyncInvocation* _cancelRequest;
	NSURL* _compositionURL;
	/*^block*/id _prepareBlock;
	SKRemoteComposeReviewViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceComposeReviewViewController> _serviceProxy;
	id<SKComposeReviewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKComposeReviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<SKComposeReviewDelegate>)delegate;
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)setDelegate:(id<SKComposeReviewDelegate>)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_didPrepareWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_didFinishWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithCompositionURL:(id)arg1 ;
-(void)_tearDownAfterError:(id)arg1 ;
@end

