/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentRewrapRequestBase.h>

@class PKPaymentMerchantSession;

@interface PKPaymentCompleteSessionRequest : PKPaymentRewrapRequestBase {

	PKPaymentMerchantSession* _merchantSession;

}

@property (nonatomic,retain) PKPaymentMerchantSession * merchantSession;              //@synthesize merchantSession=_merchantSession - In the implementation block
-(id)bodyDictionary;
-(void)setMerchantSession:(PKPaymentMerchantSession *)arg1 ;
-(PKPaymentMerchantSession *)merchantSession;
-(id)endpointName;
@end

