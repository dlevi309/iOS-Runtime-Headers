/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class ACAccountStore;

@interface ACDKeychainMigrator : NSObject {

	ACAccountStore* _accountStore;

}
+(id)sharedInstance;
-(id)init;
-(void)migrateAllKeychainItems;
-(id)allKeychainItems;
-(BOOL)migrateKeychainItem:(id)arg1 ;
-(void)_validateKeychainItemClass:(id)arg1 ;
-(void)_migrateUUIDKeychainItems:(id)arg1 ;
-(id)_keychainItemsForAccount:(id)arg1 accountTypeIdentifiers:(id)arg2 ;
-(id)_keychainItemFromAttributesArray:(id)arg1 ;
-(id)_keychainItemFromAttributes:(id)arg1 ;
@end

