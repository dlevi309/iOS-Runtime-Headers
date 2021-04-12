/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/CoreRecentsAccountNotificationPlugin.bundle/CoreRecentsAccountNotificationPlugin
*/


@class ACAccountStore;

@interface CRMailAccountIterator : NSObject {

	ACAccountStore* _accountStore;

}
+(id)receivedEmailAddressesFromAccount:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithAccountStore:(id)arg1 ;
-(id)mailAccounts;
-(id)emailAddressesForAccount:(id)arg1 ;
-(void)enumerateEmailAddresses:(/*^block*/id)arg1 ;
@end

