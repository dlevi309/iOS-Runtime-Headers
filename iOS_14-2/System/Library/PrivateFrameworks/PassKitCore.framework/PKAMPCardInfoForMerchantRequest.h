/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKAMPCardInfoForMerchantRequest : PKPaymentWebServiceRequest {

	NSString* _merchantIdentifier;

}

@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithMerchantIdentifier:(id)arg1 ;
@end

