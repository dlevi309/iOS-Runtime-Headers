/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


#import <CDDataAccess/CDDataAccess-Structs.h>
@interface DAKeychain : NSObject
+(id)sharedKeychain;
-(void)migratePasswordForAccount:(id)arg1 ;
-(int)_daKeychainAccessibilityForSecAccessibility:(void*)arg1 ;
-(BOOL)canAccessCredentialsWithAccessibility:(int)arg1 ;
-(void)removePersistentCredentials;
-(CFDictionaryRef)_DACopyMutableQueryForAccountWithPersistentUUID:(id)arg1 ;
-(void*)_secAccessibilityForDAKeychainAccessibility:(int)arg1 ;
-(CFDictionaryRef)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)arg1 accessibility:(int)arg2 ;
-(BOOL)removePasswordForAccount:(id)arg1 withPersistentUUID:(id)arg2 ;
-(id)passwordForAccountWithPersistentUUID:(id)arg1 expectedAccessibility:(int)arg2 shouldSetAccessibility:(BOOL)arg3 passwordExpected:(BOOL)arg4 ;
-(id)guessPasswordForURL:(id)arg1 ;
-(void)removeKeychainInformationsForURL:(id)arg1 ;
-(BOOL)setPassword:(id)arg1 forAccount:(id)arg2 withPersistentUUID:(id)arg3 withAccessibility:(int)arg4 ;
-(id)loadKeychainInformationsForURL:(id)arg1 ;
-(BOOL)saveKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2 withAccessibility:(int)arg3 ;
@end

