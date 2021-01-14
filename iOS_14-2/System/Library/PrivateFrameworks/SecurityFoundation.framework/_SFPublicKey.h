/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFKey.h>

@interface _SFPublicKey : _SFKey {

	id _publicKeyInternal;

}

@property (getter=_secKey,nonatomic,readonly) _SecKey* secKey; 
+(Class)_attributesClass;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(_SecKey*)_secKey;
-(id)keyData;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(id)initWithSecKey:(_SecKey*)arg1 ;
@end

