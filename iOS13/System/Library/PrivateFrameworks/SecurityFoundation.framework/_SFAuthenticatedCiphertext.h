/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)initializationVector;
-(NSData *)authenticationCode;
-(id)initWithCiphertext:(id)arg1 authenticationCode:(id)arg2 initializationVector:(id)arg3 ;
@end

