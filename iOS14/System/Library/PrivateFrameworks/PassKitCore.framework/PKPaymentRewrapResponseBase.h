/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentRewrapResponseBase : PKPaymentWebServiceResponse {

	NSData* _rewrappedPaymentData;

}

@property (nonatomic,copy) NSData * rewrappedPaymentData;              //@synthesize rewrappedPaymentData=_rewrappedPaymentData - In the implementation block
-(NSData *)rewrappedPaymentData;
-(void)setRewrappedPaymentData:(NSData *)arg1 ;
@end

