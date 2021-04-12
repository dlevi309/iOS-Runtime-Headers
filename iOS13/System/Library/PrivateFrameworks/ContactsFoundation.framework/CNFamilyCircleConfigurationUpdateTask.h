/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNTask.h>

@protocol CNDelegateAccountSource, CNDelegateAccountSink;
@class ACAccountStore, NSMutableArray, CNResult;

@interface CNFamilyCircleConfigurationUpdateTask : CNTask {

	id<CNDelegateAccountSource> _accountSource;
	id<CNDelegateAccountSink> _accountSink;
	ACAccountStore* _accountStore;
	NSMutableArray* _delegateAccounts;
	CNResult* _result;

}

@property (nonatomic,readonly) id<CNDelegateAccountSource> accountSource;              //@synthesize accountSource=_accountSource - In the implementation block
@property (nonatomic,readonly) id<CNDelegateAccountSink> accountSink;                  //@synthesize accountSink=_accountSink - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                          //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) NSMutableArray * delegateAccounts;                      //@synthesize delegateAccounts=_delegateAccounts - In the implementation block
@property (nonatomic,retain) CNResult * result;                                        //@synthesize result=_result - In the implementation block
+(id)os_log;
-(id)init;
-(id)description;
-(id)initWithName:(id)arg1 ;
-(CNResult *)result;
-(void)setResult:(CNResult *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)run:(id*)arg1 ;
-(id)initWithAccountSource:(id)arg1 accountSink:(id)arg2 accountStore:(id)arg3 ;
-(void)loadDefaultSourceIfNecessary;
-(void)loadDelegateAccountsFromSource;
-(void)loadDefaultSinkIfNecessary;
-(void)updateDelegateAccounts;
-(NSMutableArray *)delegateAccounts;
-(id<CNDelegateAccountSource>)accountSource;
-(id<CNDelegateAccountSink>)accountSink;
@end

