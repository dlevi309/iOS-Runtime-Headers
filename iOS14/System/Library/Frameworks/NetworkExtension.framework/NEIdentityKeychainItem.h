/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEKeychainItem.h>

@interface NEIdentityKeychainItem : NEKeychainItem
+(id)copyPersistentReferenceForIdentity:(SecIdentityRef)arg1 ;
+(id)copyPropertiesForIdentity:(SecIdentityRef)arg1 persistentReference:(id)arg2 ;
+(id)importPKCS12Data:(id)arg1 passphrase:(id)arg2 ;
+(id)copyIdentities:(id)arg1 fromDomain:(long long)arg2 ;
-(void)sync;
-(id)copyPassword;
-(id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyQueryWithReturnTypes:(id)arg1 ;
@end

