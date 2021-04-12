/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/_SFCiphertext.h>

@class NSData;

@interface _SFAuthenticatedCiphertext : _SFCiphertext {

	id _authenticatedCiphertextInternal;

}

@property (readonly) NSData * authenticationCode; 
@property (readonly) NSData * initializationVector; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSData *)initializationVector;
-(id)initWithCiphertext:(id)arg1 authenticationCode:(id)arg2 initializationVector:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)authenticationCode;
-(BOOL)isEqual:(id)arg1 ;
@end

