/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKHealthPrivacyHostAuthorizationControllerDelegate.h>
#import <libobjc.A.dylib/_HKAuthorizationPresentationController.h>

@class _UIAsyncInvocation, HKHealthPrivacyHostAuthorizationViewController, HKNanoHostAuthorizationController, UIWindow, NSString;

@interface HKAuthorizationPresentationController : NSObject <HKHealthPrivacyHostAuthorizationControllerDelegate, _HKAuthorizationPresentationController> {

	BOOL _didPresent;
	_UIAsyncInvocation* _requestCancellationInvocation;
	HKHealthPrivacyHostAuthorizationViewController* _hostViewController;
	HKNanoHostAuthorizationController* _nanoAuthorizationController;
	UIWindow* _savedKeyWindow;
	UIWindow* _window;

}

@property (nonatomic,retain) _UIAsyncInvocation * requestCancellationInvocation;                               //@synthesize requestCancellationInvocation=_requestCancellationInvocation - In the implementation block
@property (nonatomic,retain) HKHealthPrivacyHostAuthorizationViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,retain) HKNanoHostAuthorizationController * nanoAuthorizationController;                  //@synthesize nanoAuthorizationController=_nanoAuthorizationController - In the implementation block
@property (nonatomic,retain) UIWindow * savedKeyWindow;                                                        //@synthesize savedKeyWindow=_savedKeyWindow - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                                //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) BOOL didPresent;                                                                  //@synthesize didPresent=_didPresent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)didPresent;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setHostViewController:(HKHealthPrivacyHostAuthorizationViewController *)arg1 ;
-(HKHealthPrivacyHostAuthorizationViewController *)hostViewController;
-(void)setDidPresent:(BOOL)arg1 ;
-(UIWindow *)window;
-(void)cancelPresentation;
-(void)presentWithPresentationRequests:(id)arg1 authorizationRequestRecord:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)_requestAndConfigureHostViewController:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(_UIAsyncInvocation *)requestCancellationInvocation;
-(void)setRequestCancellationInvocation:(_UIAsyncInvocation *)arg1 ;
-(UIWindow *)savedKeyWindow;
-(void)setSavedKeyWindow:(UIWindow *)arg1 ;
-(void)_mainQueue_presentWithPresentationRequests:(id)arg1 authorizationRequestRecord:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dismissRemoteViewController;
-(void)setNanoAuthorizationController:(HKNanoHostAuthorizationController *)arg1 ;
-(void)_makeRemoteViewControllerKeyAndVisible:(id)arg1 ;
-(void)_requestAndConfigureCarouselAlert:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(HKNanoHostAuthorizationController *)nanoAuthorizationController;
-(void)healthPrivacyHostAuthorizationControllerDidFinishWithError:(id)arg1 ;
@end

