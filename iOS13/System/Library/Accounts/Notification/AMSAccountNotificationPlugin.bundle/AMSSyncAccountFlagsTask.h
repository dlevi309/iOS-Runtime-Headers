/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)performSync;
-(id<AMSBagProtocol>)bag;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
@end

