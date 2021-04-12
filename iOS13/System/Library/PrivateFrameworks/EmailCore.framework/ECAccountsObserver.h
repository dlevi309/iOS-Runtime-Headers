/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithAccountStore:(id)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_credentialsDidChange:(id)arg1 ;
-(void)_mailAccountsChanged:(id)arg1 ;
-(void)handleAccountStoreChangeForAccountIdentifier:(id)arg1 ;
-(void)handleCredentialChangeForAccountIdentifier:(id)arg1 ;
-(void)handleMailAccountsHaveChanged:(id)arg1 accountsNeedInitialization:(BOOL)arg2 ;
@end

