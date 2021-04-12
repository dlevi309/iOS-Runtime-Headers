/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential {

	NSString* _serialNumber;
	NSString* _passTypeIdentifier;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,copy) NSString * serialNumber;                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * passTypeIdentifier;                     //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) PKPaymentPass * paymentPass;              //@synthesize paymentPass=_paymentPass - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(id)initWithPaymentPass:(id)arg1 ;
-(BOOL)_isEqualToCredential:(id)arg1 ;
@end

