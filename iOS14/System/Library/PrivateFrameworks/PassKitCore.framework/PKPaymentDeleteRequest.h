/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass;

@interface PKPaymentDeleteRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;

}

@property (nonatomic,retain) PKPaymentPass * pass;              //@synthesize pass=_pass - In the implementation block
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)initWithPaymentPass:(id)arg1 ;
-(PKPaymentPass *)pass;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
@end

