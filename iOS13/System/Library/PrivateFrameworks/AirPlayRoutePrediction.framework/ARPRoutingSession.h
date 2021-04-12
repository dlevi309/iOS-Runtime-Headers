/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(double)minimumRoutingEventDuration;
+(double)microLocationCorrelationGracePeriod;
+(double)routingSessionTimeout;
+(id)routingSessionsFromNowPlayingEvents:(id)arg1 microLocationEvents:(id)arg2 routingSessionTimeout:(double)arg3 ;
+(void)writeSessions:(id)arg1 routingSessionTimeout:(double)arg2 file:(id)arg3 error:(id*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDateInterval *)interval;
-(NSString *)outputDeviceID;
-(NSDictionary *)microLocationProbabilityVector;
-(id)initWithOutputDeviceID:(id)arg1 interval:(id)arg2 microLocationProbabilityVector:(id)arg3 ;
@end

