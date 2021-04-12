/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNDelegateAccountSource.h>
#import <libobjc.A.dylib/CNDelegateAccountSink.h>

@class ACAccount, ACAccountStore, NSString;

@interface CNChildDelegateAccountsStore : NSObject <CNDelegateAccountSource, CNDelegateAccountSink> {

	ACAccount* _parentAccount;
	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccount * parentAccount;                  //@synthesize parentAccount=_parentAccount - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)os_log;
+(void)configureChildAccount:(id)arg1 withSettingsFromDelegateInfo:(id)arg2 parent:(id)arg3 ;
-(NSString *)description;
-(ACAccount *)parentAccount;
-(ACAccountStore *)accountStore;
-(id)primaryAccount;
-(id)updateAccount:(id)arg1 ;
-(id)removeAccount:(id)arg1 ;
-(id)delegateAccounts;
-(id)initWithParentAccount:(id)arg1 accountStore:(id)arg2 ;
-(BOOL)updateAccounts:(id)arg1 error:(id*)arg2 ;
-(id)addChildWithDelegateInfo:(id)arg1 ;
@end

