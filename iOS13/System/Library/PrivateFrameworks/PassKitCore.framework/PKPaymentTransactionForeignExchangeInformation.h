/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class PKCurrencyAmount, NSDecimalNumber;

@interface PKPaymentTransactionForeignExchangeInformation : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	PKCurrencyAmount* _destinationCurrencyAmount;
	NSDecimalNumber* _exchangeRate;

}

@property (nonatomic,copy) PKCurrencyAmount * destinationCurrencyAmount;              //@synthesize destinationCurrencyAmount=_destinationCurrencyAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * exchangeRate;                            //@synthesize exchangeRate=_exchangeRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)itemType;
-(id)jsonDictionaryRepresentation;
-(id)jsonString;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(BOOL)isEqualToForeignExchangeInformation:(id)arg1 ;
-(PKCurrencyAmount *)destinationCurrencyAmount;
-(void)setDestinationCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(NSDecimalNumber *)exchangeRate;
-(void)setExchangeRate:(NSDecimalNumber *)arg1 ;
@end

