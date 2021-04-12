/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SFSymmetricEncryptionOperation.h>

@class _SFAESKeySpecifier;

@interface SFAESEncryptionOperation : SFSymmetricEncryptionOperation {

	id _aesEncryptionOperationInternal;

}

@property (nonatomic,copy) _SFAESKeySpecifier * encryptionKeySpecifier; 
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2 ;
@end

