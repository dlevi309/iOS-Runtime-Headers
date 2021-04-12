/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/AMSAccountNotificationPlugin.bundle/AMSAccountNotificationPlugin
*/

#import <AppleMediaServices/AMSTask.h>

@class ACAccount;

@interface AMSLogoutTask : AMSTask {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(id)logout;
@end

