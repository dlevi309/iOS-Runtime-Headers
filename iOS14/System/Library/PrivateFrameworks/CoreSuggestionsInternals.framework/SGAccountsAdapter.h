/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSSet, ACAccountStore, NSString, NSObject;

@interface SGAccountsAdapter : NSObject {

	NSSet* _usernamesCache;
	ACAccountStore* _accountStore;
	NSString* _cachedPrimaryICloudAccount;
	NSObject*<OS_dispatch_queue> _updateQueue;
	NSObject*<OS_dispatch_source> _updateSource;
	BOOL _updateTimerIsSet;
	NSObject*<OS_dispatch_queue> _updateTimerQueue;
	NSObject*<OS_dispatch_source> _updateTimerSource;

}
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)readCachedAccounts;
-(id)init;
-(void)setUpdateTimerWithDelaySeconds:(unsigned long long)arg1 ;
-(void)registerNotificationObserver;
-(void)setCachedAccounts;
-(void)accountsStoreDidChange:(id)arg1 ;
-(void)refreshCacheFromAccountsService;
-(id)primaryICloudCalendarAccount;
-(void)cancelUpdateTimer;
-(id)serverIdentifierForAccount:(id)arg1 ;
-(void)removeNotificationObserver;
-(BOOL)hasCalendarAccount:(id)arg1 ;
-(void)dealloc;
@end

