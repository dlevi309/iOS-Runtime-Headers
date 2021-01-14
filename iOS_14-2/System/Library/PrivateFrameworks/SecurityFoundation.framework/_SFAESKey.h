/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/_SFSymmetricKey.h>

@class _SFAESKeySpecifier;

@interface _SFAESKey : _SFSymmetricKey {

	id _aesKeyInternal;

}

@property (nonatomic,copy,readonly) _SFAESKeySpecifier * keySpecifier; 
-(id)initRandomKeyWithSpecifier:(id)arg1 error:(id*)arg2 ;
@end

