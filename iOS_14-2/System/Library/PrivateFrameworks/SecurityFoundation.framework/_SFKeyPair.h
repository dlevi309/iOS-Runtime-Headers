/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_SecKey*)_secKey;
-(id)keyData;
-(NSString *)privateKeyDomain;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(id)initWithSecKey:(_SecKey*)arg1 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(id)arg2 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg1 ;
@end

