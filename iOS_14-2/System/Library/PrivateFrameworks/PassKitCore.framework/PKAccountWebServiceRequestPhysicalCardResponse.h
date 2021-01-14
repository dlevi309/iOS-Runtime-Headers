/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

