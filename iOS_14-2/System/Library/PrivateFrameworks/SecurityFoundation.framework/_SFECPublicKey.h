/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFPublicKey.h>

@class _SFECKeySpecifier;

@interface _SFECPublicKey : _SFPublicKey {

	id _ecPublicKeyInternal;

}

@property (nonatomic,copy,readonly) _SFECKeySpecifier * keySpecifier; 
+(id)_specifierForSecKey:(_SecKey*)arg1 ;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg1 ;
+(id)keyWithSubjectPublicKeyInfo:(id)arg1 ;
-(id)performWithCCKey:(/*^block*/id)arg1 ;
-(id)encodeSubjectPublicKeyInfo;
@end

