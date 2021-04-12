/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMBackupPaymentInfo : FATObject {

	NSString* _premiumCommerceService;
	NSString* _premiumServiceSKU;
	NSString* _currency;
	NSNumber* _unitPrice;
	NSNumber* _paymentMethodId;

}

@property (nonatomic,retain) NSString * premiumCommerceService;              //@synthesize premiumCommerceService=_premiumCommerceService - In the implementation block
@property (nonatomic,retain) NSString * premiumServiceSKU;                   //@synthesize premiumServiceSKU=_premiumServiceSKU - In the implementation block
@property (nonatomic,retain) NSString * currency;                            //@synthesize currency=_currency - In the implementation block
@property (nonatomic,retain) NSNumber * unitPrice;                           //@synthesize unitPrice=_unitPrice - In the implementation block
@property (nonatomic,retain) NSNumber * paymentMethodId;                     //@synthesize paymentMethodId=_paymentMethodId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)premiumCommerceService;
-(void)setPremiumCommerceService:(NSString *)arg1 ;
-(NSString *)premiumServiceSKU;
-(void)setPremiumServiceSKU:(NSString *)arg1 ;
-(NSNumber *)unitPrice;
-(void)setUnitPrice:(NSNumber *)arg1 ;
-(NSNumber *)paymentMethodId;
-(void)setPaymentMethodId:(NSNumber *)arg1 ;
@end

