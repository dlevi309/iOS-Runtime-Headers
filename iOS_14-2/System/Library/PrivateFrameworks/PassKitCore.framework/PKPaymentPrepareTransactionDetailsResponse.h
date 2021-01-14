/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDecimalNumber, NSString, NSDictionary;

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse {

	NSDecimalNumber* _amount;
	NSString* _secureElementIdentifier;
	NSDictionary* _instructionsDictionary;

}

@property (nonatomic,readonly) NSDecimalNumber * amount;                           //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) NSString * secureElementIdentifier;                 //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * instructionsDictionary;              //@synthesize instructionsDictionary=_instructionsDictionary - In the implementation block
-(NSString *)secureElementIdentifier;
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)instructionsDictionary;
-(NSDecimalNumber *)amount;
@end

