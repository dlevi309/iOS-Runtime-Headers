/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSData, NSURL;

@interface AMSCardRegistrationResult : NSObject {

	NSData* _cardData;
	NSURL* _brokerURL;
	NSURL* _paymentServicesURL;

}

@property (nonatomic,readonly) NSData * cardData;                       //@synthesize cardData=_cardData - In the implementation block
@property (nonatomic,readonly) NSURL * brokerURL;                       //@synthesize brokerURL=_brokerURL - In the implementation block
@property (nonatomic,readonly) NSURL * paymentServicesURL;              //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
-(NSURL *)brokerURL;
-(NSData *)cardData;
-(NSURL *)paymentServicesURL;
-(id)initWithCardRegistrationResponse:(id)arg1 ;
@end

