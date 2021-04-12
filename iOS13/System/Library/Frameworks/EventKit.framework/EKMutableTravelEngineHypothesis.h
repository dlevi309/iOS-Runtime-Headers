/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKTravelEngineHypothesis.h>

@class NSDate, NSString;

@interface EKMutableTravelEngineHypothesis : EKTravelEngineHypothesis

@property (assign,nonatomic) int transportType; 
@property (nonatomic,copy) NSDate * conservativeDepartureDate; 
@property (assign,nonatomic) double conservativeTravelTime; 
@property (nonatomic,copy) NSDate * suggestedDepartureDate; 
@property (assign,nonatomic) double estimatedTravelTime; 
@property (nonatomic,copy) NSDate * aggressiveDepartureDate; 
@property (assign,nonatomic) double aggressiveTravelTime; 
@property (nonatomic,copy) NSString * routeName; 
@property (assign,nonatomic) BOOL supportsLiveTraffic; 
@property (assign,nonatomic) unsigned long long currentTrafficDensity; 
@property (nonatomic,copy) NSString * trafficDensityDescription; 
@property (assign,nonatomic) long long travelState; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)setSupportsLiveTraffic:(BOOL)arg1 ;
-(void)setRouteName:(NSString *)arg1 ;
-(void)setAggressiveTravelTime:(double)arg1 ;
-(void)setConservativeTravelTime:(double)arg1 ;
-(void)setTravelState:(long long)arg1 ;
-(void)setConservativeDepartureDate:(NSDate *)arg1 ;
-(void)setSuggestedDepartureDate:(NSDate *)arg1 ;
-(void)setEstimatedTravelTime:(double)arg1 ;
-(void)setAggressiveDepartureDate:(NSDate *)arg1 ;
-(void)setCurrentTrafficDensity:(unsigned long long)arg1 ;
-(void)setTrafficDensityDescription:(NSString *)arg1 ;
@end

