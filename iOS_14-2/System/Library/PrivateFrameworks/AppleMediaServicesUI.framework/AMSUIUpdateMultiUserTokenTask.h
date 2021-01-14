/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSUUID, UIViewController;

@interface AMSUIUpdateMultiUserTokenTask : AMSTask {

	ACAccount* _account;
	NSUUID* _homeIdentifier;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) ACAccount * account;                            //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSUUID * homeIdentifier;                        //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
+(BOOL)_errorIsRecoverable:(id)arg1 ;
-(ACAccount *)account;
-(UIViewController *)viewController;
-(NSUUID *)homeIdentifier;
-(id)performTask;
-(id)initWithAccount:(id)arg1 homeIdentifier:(id)arg2 viewController:(id)arg3 ;
@end

