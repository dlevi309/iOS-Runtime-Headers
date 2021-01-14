/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


#import <MessageLegacy/MessageLegacy-Structs.h>
@class ACAccountStore;

@interface MFAccountStore : NSObject {

	os_unfair_lock_s _accountStoreLock;
	ACAccountStore* _accountStore;

}

@property (readonly) ACAccountStore * persistentStore; 
+(id)sharedAccountStore;
+(BOOL)_shouldUpdateAccountsInPlace;
+(id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(BOOL)arg3 ;
-(ACAccountStore *)persistentStore;
-(id)init;
-(void)_accountsStoreChanged:(id)arg1 ;
-(id)existingAccountWithPersistentAccount:(id)arg1 ;
-(id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1 ;
-(id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1 ;
-(void)savePersistentAccountWithAccount:(id)arg1 ;
-(void)removePersistentAccountWithAccount:(id)arg1 ;
-(id)_accountWithPersistentAccount:(id)arg1 useExisting:(BOOL)arg2 ;
-(void)setPersistentStore:(ACAccountStore *)arg1 ;
-(id)accountsWithTypeIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

