/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDecimalNumber, NSString, NSData;

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse {

	NSDecimalNumber* _amount;
	NSString* _secureElementIdentifier;
	NSData* _instructions;
	NSData* _signature;

}

@property (nonatomic,readonly) NSDecimalNumber * amount;                        //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) NSString * secureElementIdentifier;              //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * instructions;                           //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSData * signature;                              //@synthesize signature=_signature - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(NSData *)signature;
-(NSData *)instructions;
-(NSString *)secureElementIdentifier;
@end

