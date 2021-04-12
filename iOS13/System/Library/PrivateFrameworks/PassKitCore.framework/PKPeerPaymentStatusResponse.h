/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithData:(id)arg1 ;
-(long long)status;
-(NSArray *)actions;
-(NSString *)transactionIdentifier;
-(NSString *)paymentIdentifier;
-(BOOL)amountHashIsValidForAmount:(id)arg1 andCurrency:(id)arg2 ;
-(NSData *)amountHash;
@end

