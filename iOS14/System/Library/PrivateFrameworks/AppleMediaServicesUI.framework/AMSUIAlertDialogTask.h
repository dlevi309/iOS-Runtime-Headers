/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest, UIViewController;

@interface AMSUIAlertDialogTask : AMSTask {

	AMSDialogRequest* _request;
	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) AMSDialogRequest * request;                               //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(long long)_keyboardTypeFromType:(long long)arg1 ;
+(id)_convertTextField:(id)arg1 ;
-(id)present;
-(AMSDialogRequest *)request;
-(UIViewController *)presentingViewController;
-(id)initWithRequest:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_createIOSViewControllerFromRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

