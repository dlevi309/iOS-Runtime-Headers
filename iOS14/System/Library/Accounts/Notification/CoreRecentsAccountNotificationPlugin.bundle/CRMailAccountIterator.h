/*
* Generated on Thursday, January 14, 2021 at 2:29:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/CoreRecentsAccountNotificationPlugin.bundle/CoreRecentsAccountNotificationPlugin
*/


@class ACAccountStore;

@interface CRMailAccountIterator : NSObject {

	ACAccountStore* _accountStore;

}
+(id)receivedEmailAddressesFromAccount:(id)arg1 ;
-(id)init;
-(id)initWithAccountStore:(id)arg1 ;
-(id)mailAccounts;
-(id)emailAddressesForAccount:(id)arg1 ;
-(void)enumerateEmailAddresses:(/*^block*/id)arg1 ;
@end

