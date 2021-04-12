/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKContactInformation;

@interface PKContactInformationResponse : PKPaymentWebServiceResponse {

	PKContactInformation* _contactInformation;

}

@property (nonatomic,readonly) PKContactInformation * contactInformation;              //@synthesize contactInformation=_contactInformation - In the implementation block
-(PKContactInformation *)contactInformation;
-(id)initWithData:(id)arg1 ;
@end

