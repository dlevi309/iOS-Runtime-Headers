/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKAccountPaymentFundingSource;

@interface PKAccountWebServiceAddFundingSourceResponse : PKAccountWebServiceResponse {

	PKAccountPaymentFundingSource* _fundingSource;

}

@property (nonatomic,copy,readonly) PKAccountPaymentFundingSource * fundingSource;              //@synthesize fundingSource=_fundingSource - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKAccountPaymentFundingSource *)fundingSource;
@end

