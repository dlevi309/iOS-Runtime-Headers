/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/FlightUtilitiesCore
*/

#import <FlightUtilitiesCore/FlightUtilitiesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, FUAirline, NSArray, NSDate, FUFlightStep;

@interface FUFlight : NSObject <NSCopying, NSSecureCoding> {

	NSString* _queriedAirlineTitle;
	FUAirline* _displayAirline;
	unsigned long long _displayFlightNumber;
	FUAirline* _airline;
	unsigned long long _flightNumber;
	NSString* _flightIdentifier;
	NSString* _cancellationMessage;
	NSArray* _legs;
	NSArray* _codeShares;
	NSArray* _allLegs;
	NSString* _identifier;
	unsigned long long _departureLegIndex;
	unsigned long long _arrivalLegIndex;
	NSDate* _expirationDate;
	NSString* _rawResponse;

}

@property (retain) NSArray * codeShares;                                //@synthesize codeShares=_codeShares - In the implementation block
@property (retain) FUAirline * displayAirline;                          //@synthesize displayAirline=_displayAirline - In the implementation block
@property (retain) NSString * queriedAirlineTitle;                      //@synthesize queriedAirlineTitle=_queriedAirlineTitle - In the implementation block
@property (assign) unsigned long long displayFlightNumber;              //@synthesize displayFlightNumber=_displayFlightNumber - In the implementation block
@property (retain) FUAirline * airline;                                 //@synthesize airline=_airline - In the implementation block
@property (assign) unsigned long long flightNumber;                     //@synthesize flightNumber=_flightNumber - In the implementation block
@property (retain) NSString * flightIdentifier;                         //@synthesize flightIdentifier=_flightIdentifier - In the implementation block
@property (retain) NSString * cancellationMessage;                      //@synthesize cancellationMessage=_cancellationMessage - In the implementation block
@property (nonatomic,retain) NSArray * allLegs;                         //@synthesize allLegs=_allLegs - In the implementation block
@property (retain) NSArray * legs;                                      //@synthesize legs=_legs - In the implementation block
@property (nonatomic,retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long departureLegIndex;                //@synthesize departureLegIndex=_departureLegIndex - In the implementation block
@property (assign) unsigned long long arrivalLegIndex;                  //@synthesize arrivalLegIndex=_arrivalLegIndex - In the implementation block
@property (retain) NSDate * expirationDate;                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (retain) NSString * rawResponse;                              //@synthesize rawResponse=_rawResponse - In the implementation block
@property (readonly) NSString * displayFlightCode; 
@property (readonly) NSString * flightCode; 
@property (readonly) long long status; 
@property (readonly) FUFlightStep * departure; 
@property (readonly) FUFlightStep * arrival; 
@property (readonly) double duration; 
+(BOOL)supportsSecureCoding;
+(void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)timeFormatterForIdentifier;
-(NSArray *)legs;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(FUAirline *)airline;
-(unsigned long long)flightNumber;
-(void)setAirline:(FUAirline *)arg1 ;
-(void)setFlightNumber:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FUFlightStep *)arrival;
-(id)description;
-(NSString *)flightCode;
-(void)setLegs:(NSArray *)arg1 ;
-(NSDate *)expirationDate;
-(FUFlightStep *)departure;
-(id)initWithCoder:(id)arg1 ;
-(void)setRawResponse:(NSString *)arg1 ;
-(NSString *)rawResponse;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSArray *)allLegs;
-(id)lastLeg;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
-(NSString *)displayFlightCode;
-(FUAirline *)displayAirline;
-(void)setAllLegs:(NSArray *)arg1 ;
-(void)setDisplayFlightNumber:(unsigned long long)arg1 ;
-(void)setFlightIdentifier:(NSString *)arg1 ;
-(void)setDisplayAirline:(FUAirline *)arg1 ;
-(void)setQueriedAirlineTitle:(NSString *)arg1 ;
-(NSArray *)codeShares;
-(NSString *)queriedAirlineTitle;
-(unsigned long long)displayFlightNumber;
-(NSString *)cancellationMessage;
-(unsigned long long)departureLegIndex;
-(unsigned long long)arrivalLegIndex;
-(void)setCancellationMessage:(NSString *)arg1 ;
-(void)setDepartureLegIndex:(unsigned long long)arg1 arrivalLegIndex:(unsigned long long)arg2 ;
-(void)setDepartureLegIndex:(unsigned long long)arg1 ;
-(void)setArrivalLegIndex:(unsigned long long)arg1 ;
-(id)firstLeg;
-(id)legsAsFlights;
-(id)relevantLeg;
-(NSString *)flightIdentifier;
-(void)setCodeShares:(NSArray *)arg1 ;
@end
