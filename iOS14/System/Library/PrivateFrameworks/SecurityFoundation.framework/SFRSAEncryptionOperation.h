/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFEncryptionOperation.h>

@class _SFRSAKeySpecifier, NSString;

@interface SFRSAEncryptionOperation : NSObject <_SFEncryptionOperation> {

	id _rsaEncryptionOperationInternal;

}

@property (nonatomic,copy) _SFRSAKeySpecifier * encryptionKeySpecifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_defaultEncryptionOperation;
-(id)init;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEncryptionKeySpecifier:(_SFRSAKeySpecifier *)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_SFRSAKeySpecifier *)encryptionKeySpecifier;
@end

