/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/

#import <AirPlayRoutePrediction/AirPlayRoutePrediction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSDateInterval;

@interface ARPRoutingSession : NSObject <NSCopying, NSSecureCoding> {

	NSString* _outputDeviceID;
	NSDictionary* _microLocationProbabilityVector;
	NSDateInterval* _interval;

}

@property (nonatomic,copy,readonly) NSString * outputDeviceID;                             //@synthesize outputDeviceID=_outputDeviceID - In the implementation block
@property (nonatomic,readonly) NSDictionary * microLocationProbabilityVector;              //@synthesize microLocationProbabilityVector=_microLocationProbabilityVector - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * interval;                             //@synthesize interval=_interval - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)writeSessions:(id)arg1 routingSessionTimeout:(double)arg2 file:(id)arg3 error:(id*)arg4 ;
+(id)routingSessionsFromNowPlayingEvents:(id)arg1 microLocationEvents:(id)arg2 routingSessionTimeout:(double)arg3 ;
+(double)minimumRoutingEventDuration;
+(double)microLocationCorrelationGracePeriod;
+(double)routingSessionTimeout;
-(NSDateInterval *)interval;
-(NSString *)outputDeviceID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)microLocationProbabilityVector;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOutputDeviceID:(id)arg1 interval:(id)arg2 microLocationProbabilityVector:(id)arg3 ;
@end

