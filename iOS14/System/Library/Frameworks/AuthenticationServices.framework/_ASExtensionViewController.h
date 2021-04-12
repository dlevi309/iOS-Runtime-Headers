/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_ASExtensionHostContextDelegate.h>

@protocol _ASExtensionHostContext;
@class UIViewController, NSExtensionContext, NSTimer, NSExtension, NSString;

@interface _ASExtensionViewController : UIViewController <_ASExtensionHostContextDelegate> {

	UIViewController* _remoteViewController;
	NSExtensionContext*<_ASExtensionHostContext> _nonUIHostContext;
	NSTimer* _nonUIRequestTimer;
	BOOL _allowRequestingUIFromNonUIRequest;
	BOOL _dismissOnBackground;
	NSExtension* _extension;

}

@property (nonatomic,readonly) NSExtension * extension;                            //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSExtensionContext * nonUIHostContext;              //@synthesize nonUIHostContext=_nonUIHostContext - In the implementation block
@property (assign,nonatomic) BOOL dismissOnBackground;                             //@synthesize dismissOnBackground=_dismissOnBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setRemoteViewController:(id)arg1 ;
-(void)setDismissOnBackground:(BOOL)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(NSExtension *)extension;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(void)_beginNonUIRequest:(BOOL)arg1 connectionHandler:(/*^block*/id)arg2 ;
-(void)_beginRequestWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)prepareToCancelRequestWithHostContext:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_nonUIRequestDidRequireUserInteraction;
-(BOOL)_shouldUseNonUIRequestTimer;
-(void)_requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidateNonUIRequestTimerIfNeeded;
-(void)_extensionRequestDidFinish:(BOOL)arg1 ;
-(void)_nonUIRequestTimedOut;
-(BOOL)dismissOnBackground;
-(NSExtensionContext *)nonUIHostContext;
@end

