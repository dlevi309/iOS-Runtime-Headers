/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/FlightUtilitiesCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class FUAirline;

@interface FUFlightCodeShare : NSObject <NSSecureCoding> {

	FUAirline* _airline;
	unsigned long long _flightNumber;

}

@property (retain) FUAirline * airline;                          //@synthesize airline=_airline - In the implementation block
@property (assign) unsigned long long flightNumber;              //@synthesize flightNumber=_flightNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(FUAirline *)airline;
-(unsigned long long)flightNumber;
-(void)setAirline:(FUAirline *)arg1 ;
-(void)setFlightNumber:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

