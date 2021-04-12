/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>
#import <libobjc.A.dylib/AMSAuthKitUpdateController.h>

@class UIViewController, NSString;

@interface AMSUIAuthKitUpdatePromptController : NSObject <AKAppleIDAuthenticationDelegate, AMSAuthKitUpdateController> {

	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createAuthenticationController;
+(Class)_authKitAuthenticationContextClass;
-(UIViewController *)presentingViewController;
-(id)initWithPresentingViewController:(id)arg1 ;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(id)performAuthKitUpdateForAccount:(id)arg1 options:(id)arg2 ;
-(id)_createAuthenticationContextForAccount:(id)arg1 options:(id)arg2 ;
-(void)_handleAuthKitError:(id)arg1 options:(id)arg2 ;
@end

