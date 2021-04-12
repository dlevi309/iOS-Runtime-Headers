/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSString;

@interface SGFlight : NSObject {

	NSString* _flightno;
	NSString* _airline;
	NSString* _departureAirportDescription;
	NSString* _arrivalAirportDescription;

}

@property (nonatomic,readonly) NSString * flightno;                                 //@synthesize flightno=_flightno - In the implementation block
@property (nonatomic,readonly) NSString * airline;                                  //@synthesize airline=_airline - In the implementation block
@property (nonatomic,readonly) NSString * departureAirportDescription;              //@synthesize departureAirportDescription=_departureAirportDescription - In the implementation block
@property (nonatomic,readonly) NSString * arrivalAirportDescription;                //@synthesize arrivalAirportDescription=_arrivalAirportDescription - In the implementation block
-(NSString *)airline;
-(id)description;
-(id)initWithCarrier:(id)arg1 flightNo:(id)arg2 depDesc:(id)arg3 arrDesc:(id)arg4 ;
-(NSString *)flightno;
-(NSString *)departureAirportDescription;
-(NSString *)arrivalAirportDescription;
@end

