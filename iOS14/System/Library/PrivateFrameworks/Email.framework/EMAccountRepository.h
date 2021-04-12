/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMRepository.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMAccountRepositoryObserver.h>

@protocol EFScheduler, EFCancelable;
@class NSMutableDictionary, EMRemoteConnection, NSArray, NSString;

@interface EMAccountRepository : EMRepository <EFLoggable, EMAccountRepositoryObserver> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _accounts;
	EMRemoteConnection* _connection;
	id<EFScheduler> _recoveryHandlerScheduler;
	id<EFScheduler> _observerScheduler;
	id<EFCancelable> _cancelable;

}

@property (nonatomic,readonly) NSArray * allAccounts; 
@property (nonatomic,readonly) NSArray * receivingAccounts; 
@property (nonatomic,readonly) NSArray * deliveryAccounts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
-(id)initInternal;
-(id)initWithRemoteConnection:(id)arg1 ;
-(NSArray *)receivingAccounts;
-(void)didBeginObserving;
-(void)accountsRemoved:(id)arg1 ;
-(void)didEndObserving;
-(void)_postAccountChangedNotification;
-(NSArray *)allAccounts;
-(id)accountForIdentifier:(id)arg1 ;
-(void)accountsChanged:(id)arg1 ;
-(void)requestAccounts;
-(void)accountsAdded:(id)arg1 ;
-(NSArray *)deliveryAccounts;
-(id)accountForAccountIdentifier:(id)arg1 ;
-(id)_currentAccountsByObjectIDMap;
-(void)_fetchAccountsAndObserveChanges;
-(void)dealloc;
@end

