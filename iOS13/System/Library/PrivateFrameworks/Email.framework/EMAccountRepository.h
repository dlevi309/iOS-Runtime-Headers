/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMRepository.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMAccountRepositoryObserver.h>

@protocol EFScheduler, EFCancelable;
@class NSMutableDictionary, EMRemoteConnection, NSString;

@interface EMAccountRepository : EMRepository <EFLoggable, EMAccountRepositoryObserver> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _accounts;
	EMRemoteConnection* _connection;
	id<EFScheduler> _recoveryHandlerScheduler;
	id<EFScheduler> _observerScheduler;
	id<EFCancelable> _cancelable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
-(void)dealloc;
-(id)initInternal;
-(id)accountForIdentifier:(id)arg1 ;
-(id)deliveryAccounts;
-(void)accountsAdded:(id)arg1 ;
-(void)accountsRemoved:(id)arg1 ;
-(void)accountsChanged:(id)arg1 ;
-(void)_fetchAccountsAndObserveChanges;
-(void)didBeginObserving;
-(void)didEndObserving;
-(id)_currentAccountsByObjectIDMap;
-(id)allAccounts;
-(id)receivingAccounts;
-(void)_postAccountChangedNotification;
-(id)initWithRemoteConnection:(id)arg1 ;
-(id)accountForAccountIdentifier:(id)arg1 ;
@end

