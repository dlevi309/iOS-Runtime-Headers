/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServices/AMSAuthenticateTask.h>
#import <libobjc.A.dylib/AMSAuthenticateTaskDelegate.h>

@class UIViewController, NSString;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask <AMSAuthenticateTaskDelegate> {

	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag; 
@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentingViewController;
-(id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3 ;
-(id)performAuthentication;
-(id)_createAuthKitUpdateTaskForAccount:(id)arg1 ;
-(void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithRequest:(id)arg1 presentingViewController:(id)arg2 ;
@end

