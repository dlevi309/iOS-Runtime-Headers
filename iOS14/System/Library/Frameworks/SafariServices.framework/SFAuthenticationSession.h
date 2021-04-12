/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/SFAuthenticationViewControllerPresentationDelegate.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegateInternal.h>

@protocol _SFAuthenticationSessionDelegate;
@class NSURL, SFAuthenticationViewController, NSString;

@interface SFAuthenticationSession : NSObject <SFAuthenticationViewControllerPresentationDelegate, SFSafariViewControllerDelegateInternal> {

	NSURL* _initialURL;
	/*^block*/id _completionHandler;
	SFAuthenticationViewController* _authViewController;
	NSString* _callbackURLScheme;
	BOOL _prefersEphemeralWebBrowserSession;
	BOOL _sessionStarted;
	id<_SFAuthenticationSessionDelegate> __delegate;

}

@property (assign,nonatomic,__weak) id<_SFAuthenticationSessionDelegate> _delegate;              //@synthesize _delegate=__delegate - In the implementation block
@property (assign,nonatomic) BOOL prefersEphemeralWebBrowserSession;                             //@synthesize prefersEphemeralWebBrowserSession=_prefersEphemeralWebBrowserSession - In the implementation block
@property (assign,getter=isSessionStarted,nonatomic) BOOL sessionStarted;                        //@synthesize sessionStarted=_sessionStarted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_SFAuthenticationSessionDelegate>)_delegate;
-(BOOL)start;
-(id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_startRequestingFromWebAuthenticationSession:(BOOL)arg1 inWindow:(id)arg2 dryRun:(BOOL)arg3 ;
-(void)set_delegate:(id<_SFAuthenticationSessionDelegate>)arg1 ;
-(id)presentingViewControllerForAuthenticationViewController:(id)arg1 ;
-(void)safariViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(BOOL)arg3 ;
-(void)safariViewController:(id)arg1 hostApplicationOpenURL:(id)arg2 ;
-(id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(BOOL)startASWebAuthenticationSessionInWindow:(id)arg1 dryRun:(BOOL)arg2 ;
-(BOOL)prefersEphemeralWebBrowserSession;
-(void)setPrefersEphemeralWebBrowserSession:(BOOL)arg1 ;
-(BOOL)isSessionStarted;
-(void)setSessionStarted:(BOOL)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

