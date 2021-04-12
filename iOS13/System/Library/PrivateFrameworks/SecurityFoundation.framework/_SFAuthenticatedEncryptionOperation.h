/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFEncryptionOperation.h>

@class _SFAESKeySpecifier, NSString;

@interface _SFAuthenticatedEncryptionOperation : NSObject <_SFEncryptionOperation> {

	id _authenticatedEncryptionOperationInternal;

}

@property (nonatomic,copy) _SFAESKeySpecifier * encryptionKeySpecifier; 
@property (assign,nonatomic) long long authenticationMode; 
@property (assign,nonatomic) long long authenticationCodeLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_defaultEncryptionOperation;
+(long long)_defaultAuthenticationMode;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 ;
-(long long)authenticationMode;
-(long long)authenticationCodeLength;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(_SFAESKeySpecifier *)encryptionKeySpecifier;
-(id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id*)arg4 ;
-(void)setEncryptionKeySpecifier:(_SFAESKeySpecifier *)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 authenticationMode:(long long)arg2 ;
-(id)encrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 ivGenerator:(id)arg4 error:(id*)arg5 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4 ;
-(id)encrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4 ;
-(void)setAuthenticationMode:(long long)arg1 ;
-(void)setAuthenticationCodeLength:(long long)arg1 ;
@end

