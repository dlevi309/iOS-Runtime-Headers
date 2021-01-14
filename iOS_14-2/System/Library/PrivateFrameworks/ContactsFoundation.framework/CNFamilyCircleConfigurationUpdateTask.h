/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNTask.h>

@protocol CNDelegateAccountSource, CNDelegateAccountSink;
@class ACAccountStore, NSArray, CNResult;

@interface CNFamilyCircleConfigurationUpdateTask : CNTask {

	id<CNDelegateAccountSource> _accountSource;
	id<CNDelegateAccountSink> _accountSink;
	ACAccountStore* _accountStore;
	NSArray* _delegateAccounts;
	CNResult* _result;

}

@property (nonatomic,readonly) id<CNDelegateAccountSource> accountSource;              //@synthesize accountSource=_accountSource - In the implementation block
@property (nonatomic,readonly) id<CNDelegateAccountSink> accountSink;                  //@synthesize accountSink=_accountSink - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                          //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) NSArray * delegateAccounts;                             //@synthesize delegateAccounts=_delegateAccounts - In the implementation block
@property (nonatomic,retain) CNResult * result;                                        //@synthesize result=_result - In the implementation block
+(id)os_log;
-(void)setResult:(CNResult *)arg1 ;
-(id)init;
-(id<CNDelegateAccountSource>)accountSource;
-(ACAccountStore *)accountStore;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(NSArray *)delegateAccounts;
-(void)loadDefaultSourceIfNecessary;
-(id<CNDelegateAccountSink>)accountSink;
-(id)initWithAccountSource:(id)arg1 accountSink:(id)arg2 accountStore:(id)arg3 ;
-(void)loadDelegateAccountsFromSource;
-(void)loadDefaultSinkIfNecessary;
-(void)updateDelegateAccounts;
-(CNResult *)result;
-(id)run:(id*)arg1 ;
@end

