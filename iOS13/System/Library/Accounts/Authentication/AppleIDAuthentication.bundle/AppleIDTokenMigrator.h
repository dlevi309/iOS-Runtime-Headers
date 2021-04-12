/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Authentication/AppleIDAuthentication.bundle/AppleIDAuthentication
*/


#import <AppleIDAuthentication/AppleIDAuthentication-Structs.h>
@interface AppleIDTokenMigrator : NSObject
-(id)_potentialServiceNamesForTokenOfAccount:(id)arg1 ;
-(id)_mostRecentTokenWithServiceName:(id)arg1 matchingAccountNames:(id)arg2 ;
-(void)_removeKeychainItemForUsernames:(id)arg1 services:(id)arg2 ;
-(CFDictionaryRef)_newKeychainQueryForAllItemsMatchingAccountName:(id)arg1 serviceName:(id)arg2 ;
-(id)migrateAppleIDBasedCredentialForAccount:(id)arg1 ;
@end

