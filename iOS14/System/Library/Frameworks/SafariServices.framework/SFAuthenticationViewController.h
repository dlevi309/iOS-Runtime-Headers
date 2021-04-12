/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFSafariViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol SFAuthenticationViewControllerPresentationDelegate;
@class _UIFallbackPresentationViewController, NSString, UIWindow;

@interface SFAuthenticationViewController : SFSafariViewController <UIViewControllerTransitioningDelegate> {

	_UIFallbackPresentationViewController* _fallbackPresentationViewController;
	NSString* _callbackURLScheme;
	UIWindow* _presentationContextWindow;
	id<SFAuthenticationViewControllerPresentationDelegate> _presentationDelegate;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;                                                                       //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<SFAuthenticationViewControllerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDefersAddingRemoteViewController:(BOOL)arg1 ;
-(id<SFAuthenticationViewControllerPresentationDelegate>)presentationDelegate;
-(id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(BOOL)arg3 presentationContextWindow:(id)arg4 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentViewController;
-(void)_restartServiceViewController;
-(void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2 ;
-(void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(BOOL)arg3 ;
-(void)setPresentationDelegate:(id<SFAuthenticationViewControllerPresentationDelegate>)arg1 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
@end

