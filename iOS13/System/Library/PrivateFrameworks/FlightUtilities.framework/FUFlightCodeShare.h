/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
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
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)flightNumber;
-(void)setFlightNumber:(unsigned long long)arg1 ;
-(FUAirline *)airline;
-(void)setAirline:(FUAirline *)arg1 ;
@end

