/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class ACAccountStore;

@interface ACDKeychainMigrator : NSObject {

	ACAccountStore* _accountStore;

}
+(id)sharedInstance;
-(id)init;
-(id)keychainItemsForAccounts:(id)arg1 ;
-(BOOL)migrateKeychainItem:(id)arg1 toKeybag:(BOOL)arg2 ;
-(void)migrateAllKeychainItems;
-(id)allKeychainItems;
-(void)_validateKeychainItemClass:(id)arg1 ;
-(void)_migrateUUIDKeychainItems:(id)arg1 ;
-(id)_keychainItemsForAccount:(id)arg1 accountTypeIdentifiers:(id)arg2 ;
-(id)_keychainItemFromAttributesArray:(id)arg1 ;
-(id)_keychainItemFromAttributes:(id)arg1 ;
@end

