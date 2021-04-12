/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServices/AMSAuthKitUpdateTask.h>

@class UIViewController;

@interface AMSUIAuthKitUpdateTask : AMSAuthKitUpdateTask {

	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(UIViewController *)presentingViewController;
-(id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3 ;
-(unsigned long long)_authenticationType;
-(id)_createAuthKitContext;
-(void)_configureAuthKitContext:(id)arg1 ;
-(id)_createAuthKitController;
@end

