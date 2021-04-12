/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class ACAccountStore, NSString;

@interface ECAccountsObserver : NSObject <EFLoggable> {

	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)observedAccountTypes;
-(void)_accountStoreDidChange:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
-(void)_credentialsDidChange:(id)arg1 ;
-(void)_mailAccountsChanged:(id)arg1 ;
-(BOOL)_shouldNotifyOnAccountChangeForNotification:(id)arg1 ;
-(void)handleAccountStoreChangeForAccountIdentifier:(id)arg1 ;
-(void)handleCredentialChangeForAccountIdentifier:(id)arg1 ;
-(void)handleMailAccountsHaveChanged:(id)arg1 accountsNeedInitialization:(BOOL)arg2 ;
@end

