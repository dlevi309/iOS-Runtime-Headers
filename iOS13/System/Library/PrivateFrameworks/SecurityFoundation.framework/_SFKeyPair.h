/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFKey.h>

@class _SFPublicKey, NSString;

@interface _SFKeyPair : _SFKey {

	id _keyPairInternal;

}

@property (getter=_secKey,nonatomic,readonly) _SecKey* secKey; 
@property (nonatomic,readonly) _SFPublicKey * publicKey; 
@property (nonatomic,copy,readonly) NSString * privateKeyDomain; 
+(Class)_attributesClass;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg1 ;
-(_SFPublicKey *)publicKey;
-(id)initWithAttributes:(id)arg1 ;
-(id)keyData;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(_SecKey*)_secKey;
-(NSString *)privateKeyDomain;
-(id)initWithSecKey:(_SecKey*)arg1 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(id)arg2 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg1 ;
@end

