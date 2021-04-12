/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_ASCredentialProviderExtensionHostContextDelegate.h>

@class UIViewController, _ASCredentialProviderExtensionHostContext, NSTimer, NSExtension, NSString;

@interface _ASExtensionViewController : UIViewController <_ASCredentialProviderExtensionHostContextDelegate> {

	UIViewController* _remoteViewController;
	_ASCredentialProviderExtensionHostContext* _nonUIHostContext;
	NSTimer* _nonUIRequestTimer;
	BOOL _allowRequestingUIFromNonUIRequest;
	BOOL _dismissOnBackground;
	NSExtension* _extension;

}

@property (nonatomic,readonly) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) BOOL dismissOnBackground;               //@synthesize dismissOnBackground=_dismissOnBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(NSExtension *)extension;
-(id)initWithExtension:(id)arg1 ;
-(void)setDismissOnBackground:(BOOL)arg1 ;
-(void)_setRemoteViewController:(id)arg1 ;
-(void)prepareToCancelRequestWithHostContext:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_beginRequestWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)_requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidateNonUIRequestTimerIfNeeded;
-(void)_extensionRequestDidFinish:(BOOL)arg1 ;
-(void)_nonUIRequestTimedOut;
-(void)_nonUIRequestDidRequireUserInteraction;
-(void)_beginNonUIRequest:(BOOL)arg1 connectionHandler:(/*^block*/id)arg2 ;
-(BOOL)dismissOnBackground;
@end

