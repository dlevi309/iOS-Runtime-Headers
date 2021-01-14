/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/_SFKey.h>

@class _SFSymmetricKeySpecifier;

@interface _SFSymmetricKey : _SFKey {

	id _symmetricKeyInternal;

}

@property (nonatomic,copy,readonly) _SFSymmetricKeySpecifier * keySpecifier; 
+(Class)_attributesClass;
-(id)_keyData;
-(id)keyData;
-(id)initRandomKeyWithSpecifier:(id)arg1 error:(id*)arg2 ;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
@end

