/*
* Generated on Thursday, January 14, 2021 at 2:29:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/AMSAccountNotificationPlugin.bundle/AMSAccountNotificationPlugin
*/

#import <AppleMediaServices/AMSTask.h>

@class ACAccount;

@interface AMSLogoutTask : AMSTask {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(id)logout;
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
@end

