/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/


@protocol OS_dispatch_queue;
#import <Accounts/Accounts-Structs.h>
@class NSObject;

@interface ACSystemConfigManager : NSObject {

	NSObject*<OS_dispatch_queue> _preferencesQueue;
	SCPreferencesRef _preferencesSession;
	int _applySkipCount;

}
+(id)sharedInstance;
+(void)_scheduleSharedInstanceTeardown;
+(id)_livingInstance;
+(void)_tearDown;
+(unsigned long long)_timeoutInterval;
-(long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(id)init;
-(int)accountsWithAccountTypeIdentifierExist:(id)arg1 ;
-(void)_handleSCPreferencesSessionNotification:(unsigned)arg1 ;
-(void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(BOOL)arg2 ;
-(void)setCountOfAccounts:(long long)arg1 withAccountTypeIdentifier:(id)arg2 ;
-(void)_setValue:(void*)arg1 forKey:(id)arg2 ;
-(void)_destroySCPreferencesSession;
-(void)_createSCPreferencesSession;
-(void*)_getValueForKey:(id)arg1 ;
-(void)dealloc;
@end

