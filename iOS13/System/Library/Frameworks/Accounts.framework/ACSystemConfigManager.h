/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Accounts/Accounts-Structs.h>
@class NSObject;

@interface ACSystemConfigManager : NSObject {

	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_queue> _preferencesQueue;
	SCPreferencesRef _preferencesSession;
	int _applySkipCount;

}
+(id)sharedInstance;
+(unsigned long long)_timeoutInterval;
+(id)_livingInstance;
-(id)init;
-(void)dealloc;
-(void)_keepAlive;
-(int)accountsWithAccountTypeIdentifierExist:(id)arg1 ;
-(long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(void)_createSCPreferencesSession;
-(void)_destroySCPreferencesSession;
-(void)_tearDown;
-(void*)_getValueForKey:(id)arg1 ;
-(void)_setValue:(void*)arg1 forKey:(id)arg2 ;
-(void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(BOOL)arg2 ;
-(void)setCountOfAccounts:(long long)arg1 withAccountTypeIdentifier:(id)arg2 ;
-(void)_handleSCPreferencesSessionNotification:(unsigned)arg1 ;
@end

