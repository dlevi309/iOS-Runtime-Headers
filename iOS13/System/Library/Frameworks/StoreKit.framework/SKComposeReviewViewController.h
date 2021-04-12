/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<SKComposeReviewDelegate>)delegate;
-(void)setDelegate:(id<SKComposeReviewDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_addRemoteView;
-(void)_didPrepareWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_requestRemoteViewController;
-(void)_didFinishWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithCompositionURL:(id)arg1 ;
-(void)_tearDownAfterError:(id)arg1 ;
@end

