/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface CADRouteHypothesis : NSObject <NSSecureCoding> {

	BOOL _supportsLiveTraffic;
	int _transportType;
	NSDate* _conservativeDepartureDate;
	double _conservativeTravelTime;
	NSDate* _suggestedDepartureDate;
	double _estimatedTravelTime;
	NSDate* _aggressiveDepartureDate;
	double _aggressiveTravelTime;
	NSString* _routeName;
	unsigned long long _currentTrafficDensity;
	NSString* _trafficDensityDescription;
	long long _travelState;

}

@property (nonatomic,readonly) int transportType;                                      //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * conservativeDepartureDate;                //@synthesize conservativeDepartureDate=_conservativeDepartureDate - In the implementation block
@property (nonatomic,readonly) double conservativeTravelTime;                          //@synthesize conservativeTravelTime=_conservativeTravelTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * suggestedDepartureDate;                   //@synthesize suggestedDepartureDate=_suggestedDepartureDate - In the implementation block
@property (nonatomic,readonly) double estimatedTravelTime;                             //@synthesize estimatedTravelTime=_estimatedTravelTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * aggressiveDepartureDate;                  //@synthesize aggressiveDepartureDate=_aggressiveDepartureDate - In the implementation block
@property (nonatomic,readonly) double aggressiveTravelTime;                            //@synthesize aggressiveTravelTime=_aggressiveTravelTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * routeName;                              //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,readonly) BOOL supportsLiveTraffic;                               //@synthesize supportsLiveTraffic=_supportsLiveTraffic - In the implementation block
@property (nonatomic,readonly) unsigned long long currentTrafficDensity;               //@synthesize currentTrafficDensity=_currentTrafficDensity - In the implementation block
@property (nonatomic,copy,readonly) NSString * trafficDensityDescription;              //@synthesize trafficDensityDescription=_trafficDensityDescription - In the implementation block
@property (nonatomic,readonly) long long travelState;                                  //@synthesize travelState=_travelState - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)suggestedDepartureDate;
-(double)estimatedTravelTime;
-(double)conservativeTravelTime;
-(double)aggressiveTravelTime;
-(NSDate *)conservativeDepartureDate;
-(long long)travelState;
-(NSString *)routeName;
-(NSString *)trafficDensityDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(int)transportType;
-(BOOL)supportsLiveTraffic;
-(id)initWithTransportType:(int)arg1 conservativeDepartureDate:(id)arg2 conservativeTravelTime:(double)arg3 suggestedDepartureDate:(id)arg4 estimatedTravelTime:(double)arg5 aggressiveDepartureDate:(id)arg6 aggressiveTravelTime:(double)arg7 routeName:(id)arg8 supportsLiveTraffic:(BOOL)arg9 currentTrafficDensity:(unsigned long long)arg10 trafficDensityDescription:(id)arg11 travelState:(long long)arg12 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)currentTrafficDensity;
-(NSDate *)aggressiveDepartureDate;
@end

