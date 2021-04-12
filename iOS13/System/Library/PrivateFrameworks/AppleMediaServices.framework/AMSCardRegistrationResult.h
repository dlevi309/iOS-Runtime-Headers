/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)cardData;
-(NSURL *)brokerURL;
-(NSURL *)paymentServicesURL;
-(id)initWithCardRegistrationResponse:(id)arg1 ;
@end

