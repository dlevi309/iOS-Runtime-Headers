/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKPhysicalCard;

@interface PKAccountWebServiceRequestPhysicalCardResponse : PKAccountWebServiceResponse {

	PKPhysicalCard* _physicalCard;
	unsigned long long _shipmentQuoteMinimum;
	unsigned long long _shipmentQuoteMaximum;

}

@property (nonatomic,readonly) PKPhysicalCard * physicalCard;                        //@synthesize physicalCard=_physicalCard - In the implementation block
@property (nonatomic,readonly) unsigned long long shipmentQuoteMinimum;              //@synthesize shipmentQuoteMinimum=_shipmentQuoteMinimum - In the implementation block
@property (nonatomic,readonly) unsigned long long shipmentQuoteMaximum;              //@synthesize shipmentQuoteMaximum=_shipmentQuoteMaximum - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKPhysicalCard *)physicalCard;
-(unsigned long long)shipmentQuoteMinimum;
-(unsigned long long)shipmentQuoteMaximum;
@end

