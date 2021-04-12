/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)serialNumber;
-(id)init;
-(BOOL)_isEqualToCredential:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setSerialNumber:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

