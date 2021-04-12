/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFKeyPair.h>
#import <libobjc.A.dylib/TPKeyPair.h>

@class NSString, _SFECKeySpecifier;

@interface _SFECKeyPair : _SFKeyPair <TPKeyPair> {

	id _ecKeyPairInternal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) _SFECKeySpecifier * keySpecifier; 
+(id)_specifierForSecKey:(_SecKey*)arg1 ;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg1 ;
-(id)signatureForData:(id)arg1 withError:(id*)arg2 ;
-(id)publicKey;
-(id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(id)arg2 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg1 ;
-(id)performWithCCKey:(/*^block*/id)arg1 ;
@end

