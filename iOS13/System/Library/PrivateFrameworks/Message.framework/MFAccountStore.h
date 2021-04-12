/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
@class ACAccountStore;

@interface MFAccountStore : NSObject {

	os_unfair_lock_s _accountStoreLock;
	ACAccountStore* _accountStore;

}

@property (readonly) ACAccountStore * persistentStore; 
+(id)sharedAccountStore;
+(BOOL)_shouldUpdateAccountsInPlace;
+(id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(BOOL)arg3 ;
-(id)init;
-(void)dealloc;
-(ACAccountStore *)persistentStore;
-(id)existingAccountWithPersistentAccount:(id)arg1 ;
-(id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1 ;
-(id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1 ;
-(void)savePersistentAccountWithAccount:(id)arg1 ;
-(void)removePersistentAccountWithAccount:(id)arg1 ;
-(id)accountsWithTypeIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)setPersistentStore:(ACAccountStore *)arg1 ;
-(void)_accountsStoreChanged:(id)arg1 ;
-(id)_accountWithPersistentAccount:(id)arg1 useExisting:(BOOL)arg2 ;
@end

