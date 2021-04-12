/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFEncryptionOperation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFRSAEncryptionOperation, SFSymmetricEncryptionOperation, _SFKeySpecifier, NSString;

@interface SFRSA_WrappedKeyEncryptionOperation : NSObject <_SFEncryptionOperation, NSCopying> {

	id _wrappedKeyEncryptionOperationInternal;

}

@property (nonatomic,copy) SFRSAEncryptionOperation * keyWrappingOperation; 
@property (nonatomic,copy) SFSymmetricEncryptionOperation * sessionEncryptionOperation; 
@property (nonatomic,copy,readonly) _SFKeySpecifier * encryptionKeySpecifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_SFKeySpecifier *)encryptionKeySpecifier;
-(SFRSAEncryptionOperation *)keyWrappingOperation;
-(SFSymmetricEncryptionOperation *)sessionEncryptionOperation;
-(id)initWithKeyWrappingOperation:(id)arg1 ;
-(id)initWithKeyWrappingOperation:(id)arg1 sessionEncryptionOperation:(id)arg2 ;
-(void)setKeyWrappingOperation:(SFRSAEncryptionOperation *)arg1 ;
-(void)setSessionEncryptionOperation:(SFSymmetricEncryptionOperation *)arg1 ;
@end

