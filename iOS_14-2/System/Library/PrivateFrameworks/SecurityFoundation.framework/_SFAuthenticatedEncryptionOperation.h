/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(long long)_defaultAuthenticationMode;
+(id)_defaultEncryptionOperation;
-(void)setAuthenticationMode:(long long)arg1 ;
-(id)init;
-(long long)authenticationCodeLength;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEncryptionKeySpecifier:(_SFAESKeySpecifier *)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 ;
-(long long)authenticationMode;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)encrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 ivGenerator:(id)arg4 error:(id*)arg5 ;
-(id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id*)arg4 ;
-(id)encrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4 ;
-(id)initWithKeySpecifier:(id)arg1 authenticationMode:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_SFAESKeySpecifier *)encryptionKeySpecifier;
-(void)setAuthenticationCodeLength:(long long)arg1 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4 ;
@end

