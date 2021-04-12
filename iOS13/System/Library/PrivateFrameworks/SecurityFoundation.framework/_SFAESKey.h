/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

