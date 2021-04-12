/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDictionary, NSData, SKPaymentDiscount;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {

	id _internal;

}

@property (nonatomic,copy,readonly) NSString * partnerIdentifier; 
@property (nonatomic,copy,readonly) NSString * partnerTransactionIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * requestParameters; 
@property (nonatomic,readonly) BOOL isStoreOriginated; 
@property (nonatomic,copy,readonly) NSString * productIdentifier; 
@property (nonatomic,copy,readonly) NSData * requestData; 
@property (nonatomic,readonly) long long quantity; 
@property (nonatomic,copy,readonly) NSString * applicationUsername; 
@property (nonatomic,readonly) BOOL simulatesAskToBuyInSandbox; 
@property (nonatomic,copy,readonly) SKPaymentDiscount * paymentDiscount; 
+(id)paymentWithProduct:(id)arg1 ;
+(id)paymentFromPurchaseIntentWithProduct:(id)arg1 ;
+(id)paymentWithProductIdentifier:(id)arg1 ;
-(id)init;
-(NSData *)requestData;
-(long long)quantity;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)productIdentifier;
-(NSString *)partnerIdentifier;
-(unsigned long long)hash;
-(NSDictionary *)requestParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)applicationUsername;
-(BOOL)simulatesAskToBuyInSandbox;
-(SKPaymentDiscount *)paymentDiscount;
-(BOOL)isStoreOriginated;
-(NSString *)partnerTransactionIdentifier;
@end

