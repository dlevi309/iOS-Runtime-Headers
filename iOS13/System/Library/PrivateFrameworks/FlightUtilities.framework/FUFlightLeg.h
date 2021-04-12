/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class FUFlightStep, NSString;

@interface FUFlightLeg : NSObject <NSSecureCoding> {

	long long _status;
	double _duration;
	FUFlightStep* _departure;
	FUFlightStep* _arrival;
	NSString* _baggageClaim;

}

@property (assign) long long status;                      //@synthesize status=_status - In the implementation block
@property (assign) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (readonly) double currentProgress; 
@property (retain) FUFlightStep * departure;              //@synthesize departure=_departure - In the implementation block
@property (retain) FUFlightStep * arrival;                //@synthesize arrival=_arrival - In the implementation block
@property (retain) NSString * baggageClaim;               //@synthesize baggageClaim=_baggageClaim - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)currentProgress;
-(long long)status;
-(double)duration;
-(void)setStatus:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(FUFlightStep *)departure;
-(void)setDeparture:(FUFlightStep *)arg1 ;
-(FUFlightStep *)arrival;
-(void)setArrival:(FUFlightStep *)arg1 ;
-(void)setBaggageClaim:(NSString *)arg1 ;
-(NSString *)baggageClaim;
@end

