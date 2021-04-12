/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICUserIdentityStoreBackend.h>

@protocol OS_dispatch_queue, ICUserIdentityStoreBackendDelegate;
@class ACAccountStore, NSMapTable, NSArray, NSMutableDictionary, ACAccountType, NSObject, NSOperationQueue, NSString;

@interface ICUserIdentityStoreACAccountBackend : NSObject <ICUserIdentityStoreBackend> {

	id _activeAccountDSIDValue;
	id _activeLockerAccountDSIDValue;
	ACAccountStore* _accountStore;
	NSMapTable* _accountToIdentityProperties;
	NSArray* _allStoreAccounts;
	NSMutableDictionary* _dsidToAccount;
	id _primaryICloudAccountIdentityPropertiesValue;
	ACAccountType* _storeAccountType;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _operationQueue;
	id<ICUserIdentityStoreBackendDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)synchronize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)setDelegate:(id<ICUserIdentityStoreBackendDelegate>)arg1 ;
-(void)_synchronize;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(id)initWithACAccountStore:(id)arg1 ;
-(void)_allStoreAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)_storeAccountForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_activeStoreAccountWithCompletion:(/*^block*/id)arg1 ;
-(id)_newUserIdentityPropertiesForAccount:(id)arg1 ;
-(void)_applyIdentityProperties:(id)arg1 toAccount:(id)arg2 ;
-(void)_storeAccountTypeWithCompletion:(/*^block*/id)arg1 ;
-(id)_newLocalStoreAccountPropertiesFromAccount:(id)arg1 ;
-(void)_applyLocalStoreAccountProperties:(id)arg1 toAccount:(id)arg2 ;
-(void)_handleITunesStoreAccountsChanged;
-(void)activeAccountDSIDWithCompletion:(/*^block*/id)arg1 ;
-(void)updateActiveAccountDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activeLockerAccountDSIDWithCompletion:(/*^block*/id)arg1 ;
-(void)updateActiveLockerAccountDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)identityPropertiesForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)identityPropertiesForPrimaryICloudAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)localStoreAccountPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(id)localStoreAccountPropertiesWithError:(id*)arg1 ;
-(void)setLocalStoreAccountProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verificationContextForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verificationContextForAccountEstablishmentWithCompletion:(/*^block*/id)arg1 ;
-(id)_primaryICloudAccountIdentityProperties;
@end

