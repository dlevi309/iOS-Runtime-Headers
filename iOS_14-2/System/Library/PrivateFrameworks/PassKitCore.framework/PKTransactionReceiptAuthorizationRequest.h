/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKTransactionReceiptAuthorizationRequest : PKPaymentWebServiceRequest {

	NSString* _receiptServiceIdentifier;
	NSString* _receiptIdentifier;
	NSString* _cardNumberSuffix;

}

@property (nonatomic,readonly) NSString * receiptServiceIdentifier;              //@synthesize receiptServiceIdentifier=_receiptServiceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * receiptIdentifier;                     //@synthesize receiptIdentifier=_receiptIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * cardNumberSuffix;                      //@synthesize cardNumberSuffix=_cardNumberSuffix - In the implementation block
-(void)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 webService:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)receiptServiceIdentifier;
-(NSString *)cardNumberSuffix;
-(NSString *)receiptIdentifier;
-(id)initWithReceiptServiceIdentifier:(id)arg1 receiptIdentifier:(id)arg2 cardNumberSuffix:(id)arg3 ;
@end

