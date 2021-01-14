/*
* Generated on Thursday, January 14, 2021 at 2:29:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/AMSAccountNotificationPlugin.bundle/AMSAccountNotificationPlugin
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount;

@interface AMSSyncAccountFlagsTask : AMSTask {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;

}

@property (nonatomic,retain) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;              //@synthesize bag=_bag - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(id)performSync;
@end

