/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSArray, NSData;

@interface PKPeerPaymentStatusResponse : PKPeerPaymentWebServiceResponse {

	long long _status;
	NSString* _paymentIdentifier;
	NSString* _transactionIdentifier;
	NSArray* _actions;
	NSData* _amountHash;

}

@property (nonatomic,readonly) long long status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentIdentifier;                  //@synthesize paymentIdentifier=_paymentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                             //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSData * amountHash;                           //@synthesize amountHash=_amountHash - In the implementation block
-(NSString *)paymentIdentifier;
-(NSArray *)actions;
-(id)initWithData:(id)arg1 ;
-(NSData *)amountHash;
-(BOOL)amountHashIsValidForAmount:(id)arg1 andCurrency:(id)arg2 ;
-(NSString *)transactionIdentifier;
-(long long)status;
@end

