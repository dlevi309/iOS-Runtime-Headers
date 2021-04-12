/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFEncryptionOperation.h>

@class _SFKeySpecifier, _SFSymmetricKeySpecifier, NSString;

@interface SFSymmetricEncryptionOperation : NSObject <_SFEncryptionOperation> {

	id _symmetricEncryptionOperationInternal;

}

@property (assign,nonatomic) long long mode; 
@property (nonatomic,copy) _SFSymmetricKeySpecifier * encryptionKeySpecifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_defaultEncryptionOperation;
+(long long)_defaultEncryptionMode;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(id)initWithKeySpecifier:(id)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2 ;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(_SFSymmetricKeySpecifier *)encryptionKeySpecifier;
-(id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id*)arg4 ;
-(void)setEncryptionKeySpecifier:(_SFSymmetricKeySpecifier *)arg1 ;
@end

