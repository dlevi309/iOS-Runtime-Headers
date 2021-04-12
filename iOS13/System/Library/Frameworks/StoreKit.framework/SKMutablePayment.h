/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/SKPayment.h>

@class NSString, NSDictionary, SKPaymentDiscount, NSData;

@interface SKMutablePayment : SKPayment

@property (assign,nonatomic) BOOL isStoreOriginated; 
@property (nonatomic,copy) NSString * partnerIdentifier; 
@property (nonatomic,copy) NSString * partnerTransactionIdentifier; 
@property (nonatomic,copy) NSDictionary * requestParameters; 
@property (nonatomic,copy) NSString * applicationUsername; 
@property (nonatomic,copy) SKPaymentDiscount * paymentDiscount; 
@property (nonatomic,copy) NSString * productIdentifier; 
@property (assign,nonatomic) long long quantity; 
@property (nonatomic,copy) NSData * requestData; 
@property (assign,nonatomic) BOOL simulatesAskToBuyInSandbox; 
-(void)setQuantity:(long long)arg1 ;
-(void)setRequestData:(NSData *)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(void)setApplicationUsername:(NSString *)arg1 ;
-(void)setIsStoreOriginated:(BOOL)arg1 ;
-(void)setSimulatesAskToBuyInSandbox:(BOOL)arg1 ;
-(void)setPaymentDiscount:(SKPaymentDiscount *)arg1 ;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(void)setPartnerTransactionIdentifier:(NSString *)arg1 ;
-(void)setRequestParameters:(NSDictionary *)arg1 ;
@end

