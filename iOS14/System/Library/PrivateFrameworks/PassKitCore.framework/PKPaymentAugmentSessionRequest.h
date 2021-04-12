/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAugmentBaseRequest.h>

@class PKPaymentMerchantSession;

@interface PKPaymentAugmentSessionRequest : PKPaymentAugmentBaseRequest {

	PKPaymentMerchantSession* _merchantSession;

}

@property (nonatomic,retain) PKPaymentMerchantSession * merchantSession;              //@synthesize merchantSession=_merchantSession - In the implementation block
-(id)endpointName;
-(PKPaymentMerchantSession *)merchantSession;
-(void)setMerchantSession:(PKPaymentMerchantSession *)arg1 ;
-(id)bodyDictionary;
@end

