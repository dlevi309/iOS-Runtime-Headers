/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNACAccountProvider.h>

@class ACAccountStore;

@interface _CNACAccountStoreBasedProvider : CNACAccountProvider {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(ACAccountStore *)accountStore;
-(id)allAccountTypes;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 ;
-(BOOL)isAccountSyncable:(id)arg1 ;
-(BOOL)isAnyAccountSyncableIgnoringAccount:(id)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
@end

