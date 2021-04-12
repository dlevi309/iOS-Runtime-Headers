/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(id)initRandomKeyWithSpecifier:(id)arg1 error:(id*)arg2 ;
@end

