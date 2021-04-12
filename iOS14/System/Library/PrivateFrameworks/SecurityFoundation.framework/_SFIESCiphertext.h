/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/_SFCiphertext.h>

@class _SFECPublicKey, NSData;

@interface _SFIESCiphertext : _SFCiphertext {

	id _iesCiphertextInternal;

}

@property (readonly) _SFECPublicKey * ephemeralSenderPublicKey; 
@property (readonly) NSData * authenticationCode; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCiphertext:(id)arg1 ephemeralSenderPublicKey:(id)arg2 authenticationCode:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(_SFECPublicKey *)ephemeralSenderPublicKey;
-(NSData *)authenticationCode;
-(BOOL)isEqual:(id)arg1 ;
@end

