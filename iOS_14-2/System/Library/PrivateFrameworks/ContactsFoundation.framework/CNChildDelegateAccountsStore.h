/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)configureChildAccount:(id)arg1 withSettingsFromDelegateInfo:(id)arg2 parent:(id)arg3 ;
+(id)os_log;
-(id)removeAccount:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(ACAccount *)parentAccount;
-(NSString *)description;
-(id)updateAccount:(id)arg1 ;
-(id)primaryAccount;
-(id)delegateAccounts;
-(id)initWithParentAccount:(id)arg1 accountStore:(id)arg2 ;
-(BOOL)updateAccounts:(id)arg1 error:(id*)arg2 ;
-(id)addChildWithDelegateInfo:(id)arg1 ;
@end

