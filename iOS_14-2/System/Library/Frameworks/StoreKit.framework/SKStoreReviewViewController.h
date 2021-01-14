/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKRemoteReviewViewControllerDelegate.h>

@protocol SKUIServiceReviewViewController;
@class SKInvocationQueueProxy, _UIAsyncInvocation, SKRemoteReviewViewController, NSString;

@interface SKStoreReviewViewController : UIViewController <SKRemoteReviewViewControllerDelegate> {

	SKInvocationQueueProxy*<SKUIServiceReviewViewController> _serviceProxy;
	_UIAsyncInvocation* _cancelRequest;
	SKRemoteReviewViewController* _remoteViewController;
	NSString* _reviewRequestToken;

}

@property (nonatomic,retain) SKInvocationQueueProxy*<SKUIServiceReviewViewController> serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelRequest;                                                 //@synthesize cancelRequest=_cancelRequest - In the implementation block
@property (nonatomic,retain) SKRemoteReviewViewController * remoteViewController;                                //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) NSString * reviewRequestToken;                                                      //@synthesize reviewRequestToken=_reviewRequestToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SKRemoteReviewViewController *)remoteViewController;
-(_UIAsyncInvocation *)cancelRequest;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)setRemoteViewController:(SKRemoteReviewViewController *)arg1 ;
-(void)viewDidLoad;
-(void)setServiceProxy:(SKInvocationQueueProxy*<SKUIServiceReviewViewController>)arg1 ;
-(SKInvocationQueueProxy*<SKUIServiceReviewViewController>)serviceProxy;
-(void)dealloc;
-(NSString *)reviewRequestToken;
-(void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2 ;
-(void)setCancelRequest:(_UIAsyncInvocation *)arg1 ;
-(void)remoteReviewViewControllerTerminatedWithError:(id)arg1 ;
-(id)initWithReviewRequestToken:(id)arg1 ;
-(void)setReviewRequestToken:(NSString *)arg1 ;
@end

