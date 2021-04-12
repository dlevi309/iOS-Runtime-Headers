/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFPublicKey.h>
#import <libobjc.A.dylib/TPPublicKey.h>

@class NSString, _SFECKeySpecifier;

@interface _SFECPublicKey : _SFPublicKey <TPPublicKey> {

	id _ecPublicKeyInternal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) _SFECKeySpecifier * keySpecifier; 
+(id)keyWithSubjectPublicKeyInfo:(id)arg1 ;
+(id)_specifierForSecKey:(_SecKey*)arg1 ;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg1 ;
-(id)spki;
-(BOOL)checkSignature:(id)arg1 matchesData:(id)arg2 ;
-(id)encodeSubjectPublicKeyInfo;
-(id)performWithCCKey:(/*^block*/id)arg1 ;
@end

