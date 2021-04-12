/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDecimalNumber, NSString;

@interface PKPaymentInstallmentConfiguration : NSObject <NSSecureCoding> {

	BOOL _inStorePurchase;
	long long _feature;
	NSData* _merchandisingImageData;
	NSDecimalNumber* _openToBuyThresholdAmount;
	NSDecimalNumber* _bindingTotalAmount;
	NSString* _currencyCode;
	long long _installmentItemType;
	NSString* _installmentMerchantIdentifier;
	NSString* _referrerIdentifier;

}

@property (assign,nonatomic) long long feature;                                          //@synthesize feature=_feature - In the implementation block
@property (nonatomic,copy) NSData * merchandisingImageData;                              //@synthesize merchandisingImageData=_merchandisingImageData - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * openToBuyThresholdAmount;                 //@synthesize openToBuyThresholdAmount=_openToBuyThresholdAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * bindingTotalAmount;                       //@synthesize bindingTotalAmount=_bindingTotalAmount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                      //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,getter=isInStorePurchase,nonatomic) BOOL inStorePurchase;              //@synthesize inStorePurchase=_inStorePurchase - In the implementation block
@property (assign,nonatomic) long long installmentItemType;                              //@synthesize installmentItemType=_installmentItemType - In the implementation block
@property (nonatomic,copy) NSString * installmentMerchantIdentifier;                     //@synthesize installmentMerchantIdentifier=_installmentMerchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * referrerIdentifier;                                //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(long long)feature;
-(void)setFeature:(long long)arg1 ;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(void)setBindingTotalAmount:(NSDecimalNumber *)arg1 ;
-(void)setInStorePurchase:(BOOL)arg1 ;
-(void)setOpenToBuyThresholdAmount:(NSDecimalNumber *)arg1 ;
-(void)setMerchandisingImageData:(NSData *)arg1 ;
-(void)setInstallmentMerchantIdentifier:(NSString *)arg1 ;
-(NSString *)referrerIdentifier;
-(BOOL)isEqualToInstallmentConfiguration:(id)arg1 ;
-(NSData *)merchandisingImageData;
-(NSDecimalNumber *)openToBuyThresholdAmount;
-(NSDecimalNumber *)bindingTotalAmount;
-(BOOL)isInStorePurchase;
-(long long)installmentItemType;
-(void)setInstallmentItemType:(long long)arg1 ;
-(NSString *)installmentMerchantIdentifier;
@end

