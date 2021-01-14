/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFSSHKeyFormat.h>

@class NSString;

@interface WFSSHKeyFormatED25519 : NSObject <WFSSHKeyFormat>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultKeySize;
+(id)localizedDisplayName;
+(id)possibleKeySizes;
+(id)privateKeyType;
+(id)publicKeyType;
+(id)privateKeySpecifier;
+(id)publicKeySpecifier;
+(id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id*)arg3 ;
+(id)generateKeyPairWithKeySize:(unsigned long long)arg1 comment:(id)arg2 ;
+(id)sshPublicKeyFromED25519Data:(id)arg1 ;
+(id)sshPrivateKeyFromED25519PrivateKey:(id)arg1 publicKey:(id)arg2 comment:(id)arg3 ;
@end

