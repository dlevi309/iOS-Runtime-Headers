/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFEncryptionOperation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFRSAEncryptionOperation, SFSymmetricEncryptionOperation, NSString, _SFKeySpecifier;

@interface SFRSA_WrappedKeyEncryptionOperation : NSObject <_SFEncryptionOperation, NSCopying> {

	id _wrappedKeyEncryptionOperationInternal;

}

@property (nonatomic,copy) SFRSAEncryptionOperation * keyWrappingOperation; 
@property (nonatomic,copy) SFSymmetricEncryptionOperation * sessionEncryptionOperation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) _SFKeySpecifier * encryptionKeySpecifier; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFRSAEncryptionOperation *)keyWrappingOperation;
-(SFSymmetricEncryptionOperation *)sessionEncryptionOperation;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(_SFKeySpecifier *)encryptionKeySpecifier;
-(id)initWithKeyWrappingOperation:(id)arg1 ;
-(id)initWithKeyWrappingOperation:(id)arg1 sessionEncryptionOperation:(id)arg2 ;
-(void)setKeyWrappingOperation:(SFRSAEncryptionOperation *)arg1 ;
-(void)setSessionEncryptionOperation:(SFSymmetricEncryptionOperation *)arg1 ;
@end

