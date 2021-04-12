/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServices/AMSAuthenticateTask.h>

@protocol AMSBagProtocol;
@class UIViewController;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask {

	id<AMSBagProtocol> _bag;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                                     //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3 ;
-(id)performAuthentication;
-(UIViewController *)presentingViewController;
-(id<AMSBagProtocol>)bag;
-(id)_updateAccountWithAuthKit:(id)arg1 error:(id*)arg2 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithRequest:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_handleDialogForFailedAuthenticationWithError:(id)arg1 ;
@end

