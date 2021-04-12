/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <libobjc.A.dylib/SOAuthorizationDelegate.h>

@protocol ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding;
@class SOAuthorization, NSURL, UIWindow, UIViewController, NSArray, NSString;

@interface ASAuthorizationController : NSObject <SOAuthorizationDelegate> {

	SOAuthorization* _appSSOAuthorization;
	NSURL* _appSSORequestURL;
	UIWindow* _appSSOPresentationAnchor;
	UIViewController* _appSSOViewController;
	NSArray* _authorizationRequests;
	id<ASAuthorizationControllerDelegate> _delegate;
	id<ASAuthorizationControllerPresentationContextProviding> _presentationContextProvider;

}

@property (nonatomic,readonly) NSArray * authorizationRequests;                                                                         //@synthesize authorizationRequests=_authorizationRequests - In the implementation block
@property (assign,nonatomic,__weak) id<ASAuthorizationControllerDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<ASAuthorizationControllerPresentationContextProviding> presentationContextProvider;              //@synthesize presentationContextProvider=_presentationContextProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(id<ASAuthorizationControllerDelegate>)delegate;
-(void)setDelegate:(id<ASAuthorizationControllerDelegate>)arg1 ;
-(void)authorizationDidNotHandle:(id)arg1 ;
-(void)authorizationDidCancel:(id)arg1 ;
-(void)authorizationDidComplete:(id)arg1 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3 ;
-(void)authorization:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)authorization:(id)arg1 presentViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setPresentationContextProvider:(id<ASAuthorizationControllerPresentationContextProviding>)arg1 ;
-(id<ASAuthorizationControllerPresentationContextProviding>)presentationContextProvider;
-(id)_authKitRequests;
-(id)_authorizationFromAuthKitResult:(id)arg1 ;
-(void)_finishAppSSO;
-(id)initWithAuthorizationRequests:(id)arg1 ;
-(void)performRequests;
-(NSArray *)authorizationRequests;
@end

