/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/ACAccountStore.h>
#import <libobjc.A.dylib/ACRemoteAccountStoreSessionDelegate.h>

@protocol ACMonitoredAccountStoreDelegateProtocol, NSObject;
@class NSSet, NSMutableDictionary, NSArray, NSString;

@interface ACMonitoredAccountStore : ACAccountStore <ACRemoteAccountStoreSessionDelegate> {

	NSSet* _accountTypesToMonitor;
	NSMutableDictionary* _accountsByID;
	id<ACMonitoredAccountStoreDelegateProtocol> _delegate;
	id<NSObject> _credentialsDidChangeObserver;

}

@property (readonly) NSArray * monitoredAccounts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2 accountTypes:(id)arg3 delegate:(id)arg4 ;
-(void)_registerAccountMonitorSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(void)_registerForCredentialChangedNotifications;
-(void)_registerAccountMonitorWithCompletion:(/*^block*/id)arg1 ;
-(void)_processAccountsListForNotifications:(id)arg1 ;
-(id)connectionDelegate;
-(id)monitoredAccountWithIdentifier:(id)arg1 ;
-(void)credentialsChangedNotification:(id)arg1 ;
-(void)registerSynchronouslyWithError:(id*)arg1 ;
-(id)initWithAccountTypes:(id)arg1 delegate:(id)arg2 ;
-(void)_reregister;
-(NSArray *)monitoredAccounts;
-(void)accountWasAdded:(id)arg1 ;
-(void)connectionClosed;
-(void)accountWasModified:(id)arg1 ;
-(void)_accountsListPopulated:(id)arg1 ;
-(void)registerWithCompletion:(/*^block*/id)arg1 ;
-(void)accountWasRemoved:(id)arg1 ;
-(void)dealloc;
@end

