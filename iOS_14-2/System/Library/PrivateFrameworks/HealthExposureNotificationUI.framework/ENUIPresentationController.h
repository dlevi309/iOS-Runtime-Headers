/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
*/

#import <libobjc.A.dylib/ENUIHostViewControllerDelegate.h>
#import <libobjc.A.dylib/ENUIRemotePresentationController.h>

@class _UIAsyncInvocation, ENUIHostViewController, UIWindow, NSString;

@interface ENUIPresentationController : NSObject <ENUIHostViewControllerDelegate, ENUIRemotePresentationController> {

	BOOL _didPresent;
	_UIAsyncInvocation* _requestCancellationInvocation;
	ENUIHostViewController* _hostViewController;
	UIWindow* _savedKeyWindow;
	UIWindow* _window;

}

@property (nonatomic,retain) _UIAsyncInvocation * requestCancellationInvocation;              //@synthesize requestCancellationInvocation=_requestCancellationInvocation - In the implementation block
@property (nonatomic,retain) ENUIHostViewController * hostViewController;                     //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,retain) UIWindow * savedKeyWindow;                                       //@synthesize savedKeyWindow=_savedKeyWindow - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                               //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) BOOL didPresent;                                                 //@synthesize didPresent=_didPresent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)didPresent;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setHostViewController:(ENUIHostViewController *)arg1 ;
-(ENUIHostViewController *)hostViewController;
-(void)setDidPresent:(BOOL)arg1 ;
-(UIWindow *)window;
-(void)cancelPresentation;
-(void)dealloc;
-(void)_requestAndConfigureHostViewController:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(_UIAsyncInvocation *)requestCancellationInvocation;
-(void)setRequestCancellationInvocation:(_UIAsyncInvocation *)arg1 ;
-(UIWindow *)savedKeyWindow;
-(void)setSavedKeyWindow:(UIWindow *)arg1 ;
-(void)_dismissRemoteViewController;
-(void)_makeRemoteViewControllerKeyAndVisible:(id)arg1 ;
-(void)presentWithPresentationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_mainQueue_presentWithPresentationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)hostViewControllerDidFinishWithError:(id)arg1 ;
@end

