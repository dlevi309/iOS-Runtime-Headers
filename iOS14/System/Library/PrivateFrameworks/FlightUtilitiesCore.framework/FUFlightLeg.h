/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/FlightUtilitiesCore
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
-(void)setDuration:(double)arg1 ;
-(void)setBaggageClaim:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FUFlightStep *)arrival;
-(NSString *)baggageClaim;
-(id)description;
-(double)currentProgress;
-(void)setDeparture:(FUFlightStep *)arg1 ;
-(FUFlightStep *)departure;
-(void)setArrival:(FUFlightStep *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(double)duration;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
@end

