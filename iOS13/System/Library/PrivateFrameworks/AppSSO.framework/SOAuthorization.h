/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/

#import <libobjc.A.dylib/SOExtensionDelegate.h>
#import <libobjc.A.dylib/SOUIAuthorizationViewControllerDelegate.h>

@protocol SOAuthorizationDelegate;
@class SOAuthorizationCore, SOExtension, SORemoteExtensionViewController, NSDictionary, NSString;

@interface SOAuthorization : NSObject <SOExtensionDelegate, SOUIAuthorizationViewControllerDelegate> {

	SOAuthorizationCore* _authorizationCore;
	SOExtension* _extension;
	SORemoteExtensionViewController* _extensionViewController;
	BOOL _enableEmbeddedAuthorizationViewController;
	id<SOAuthorizationDelegate> _delegate;

}

@property (__weak) id<SOAuthorizationDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateDispatchQueue; 
@property (nonatomic,retain) NSDictionary * authorizationOptions; 
@property (assign,nonatomic) BOOL enableEmbeddedAuthorizationViewController;              //@synthesize enableEmbeddedAuthorizationViewController=_enableEmbeddedAuthorizationViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 ;
+(BOOL)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 useInternalExtensions:(BOOL)arg3 ;
-(id)init;
-(id<SOAuthorizationDelegate>)delegate;
-(void)setDelegate:(id<SOAuthorizationDelegate>)arg1 ;
-(void)cancelAuthorization;
-(void)setAuthorizationOptions:(NSDictionary *)arg1 ;
-(void)setEnableEmbeddedAuthorizationViewController:(BOOL)arg1 ;
-(void)beginAuthorizationWithURL:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3 ;
-(NSDictionary *)authorizationOptions;
-(void)beginAuthorizationWithParameters:(id)arg1 ;
-(void)setDelegateDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 ;
-(void)viewControllerDidCancel:(id)arg1 ;
-(void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2 ;
-(id)realms;
-(void)debugHintsWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateDispatchQueue;
-(void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishAuthorizationWithCredential:(id)arg1 error:(id)arg2 ;
-(void)_cancelAuthorization;
-(void)_extensionCleanup;
-(BOOL)enableEmbeddedAuthorizationViewController;
@end

