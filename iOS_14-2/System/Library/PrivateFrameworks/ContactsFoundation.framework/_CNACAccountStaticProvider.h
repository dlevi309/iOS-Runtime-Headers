/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNACAccountProvider.h>

@class NSArray;

@interface _CNACAccountStaticProvider : CNACAccountProvider {

	NSArray* _accountChildAccountsPairs;

}

@property (nonatomic,readonly) NSArray * accountChildAccountsPairs;              //@synthesize accountChildAccountsPairs=_accountChildAccountsPairs - In the implementation block
-(id)allAccountTypes;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 ;
-(id)initWithAccounts:(id)arg1 ;
-(BOOL)isAccountSyncable:(id)arg1 ;
-(NSArray *)accountChildAccountsPairs;
@end

