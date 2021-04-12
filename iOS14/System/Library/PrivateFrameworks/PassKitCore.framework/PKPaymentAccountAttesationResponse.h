/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentAccountAttesationResponse : PKPaymentWebServiceResponse {

	NSData* _attestation;

}

@property (nonatomic,readonly) NSData * attestation;              //@synthesize attestation=_attestation - In the implementation block
-(NSData *)attestation;
-(id)initWithData:(id)arg1 ;
@end

