/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFPasswordRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/SFQueueingServiceViewControllerProxyDelegate.h>

@protocol _SFPasswordViewControllerDelegate;
@class _UIAsyncInvocation, NSString;

@interface _SFPasswordViewController : UIViewController <SFPasswordRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate> {

	_UIAsyncInvocation* _cancelViewServiceRequest;
	id<_SFPasswordViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFPasswordViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_remoteViewController;
-(id)init;
-(id<_SFPasswordViewControllerDelegate>)delegate;
-(void)_addRemoteView;
-(void)setDelegate:(id<_SFPasswordViewControllerDelegate>)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(void)_setUpServiceProxyIfNeeded;
-(void)remoteViewControllerWillDismiss:(id)arg1 ;
-(void)_addRemoteViewAsChild;
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(void)_connectToService;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(void)_dismissPasswordViewController;
-(void)serviceProxyWillQueueInvocation:(id)arg1 ;
@end

