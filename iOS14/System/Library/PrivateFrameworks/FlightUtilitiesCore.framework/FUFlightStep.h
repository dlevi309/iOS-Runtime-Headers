/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/FlightUtilitiesCore
*/

#import <FlightUtilitiesCore/FlightUtilitiesCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, FUAirport, NSString, FUStepTime;

@interface FUFlightStep : NSObject <NSSecureCoding, NSCopying> {

	NSNumber* _delayFromSchedule;
	BOOL _departure;
	FUAirport* _airport;
	NSString* _gate;
	NSString* _terminal;
	long long _legStatus;
	FUStepTime* _scheduledTime;
	FUStepTime* _estimatedTime;
	FUStepTime* _actualTime;
	FUStepTime* _runwayTime;
	FUStepTime* _plannedTime;

}

@property (retain) FUAirport * airport;                                 //@synthesize airport=_airport - In the implementation block
@property (retain) NSString * gate;                                     //@synthesize gate=_gate - In the implementation block
@property (retain) NSString * terminal;                                 //@synthesize terminal=_terminal - In the implementation block
@property (assign) long long legStatus;                                 //@synthesize legStatus=_legStatus - In the implementation block
@property (nonatomic,retain) NSNumber * delayFromSchedule; 
@property (retain) FUStepTime * scheduledTime;                          //@synthesize scheduledTime=_scheduledTime - In the implementation block
@property (retain) FUStepTime * estimatedTime;                          //@synthesize estimatedTime=_estimatedTime - In the implementation block
@property (retain) FUStepTime * actualTime;                             //@synthesize actualTime=_actualTime - In the implementation block
@property (retain) FUStepTime * runwayTime;                             //@synthesize runwayTime=_runwayTime - In the implementation block
@property (readonly) BOOL taxiing; 
@property (assign) BOOL departure;                                      //@synthesize departure=_departure - In the implementation block
@property (retain) FUStepTime * plannedTime;                            //@synthesize plannedTime=_plannedTime - In the implementation block
@property (readonly) FUStepTime * time; 
@property (nonatomic,readonly) unsigned long long status; 
+(BOOL)supportsSecureCoding;
-(NSString *)gate;
-(FUStepTime *)time;
-(void)setGate:(NSString *)arg1 ;
-(FUAirport *)airport;
-(void)setTerminal:(NSString *)arg1 ;
-(void)setAirport:(FUAirport *)arg1 ;
-(void)setActualTime:(FUStepTime *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)terminal;
-(id)description;
-(void)setDeparture:(BOOL)arg1 ;
-(BOOL)departure;
-(id)initWithCoder:(id)arg1 ;
-(FUStepTime *)scheduledTime;
-(void)setScheduledTime:(FUStepTime *)arg1 ;
-(BOOL)taxiing;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)status;
-(FUStepTime *)actualTime;
-(NSNumber *)delayFromSchedule;
-(void)setEstimatedTime:(FUStepTime *)arg1 ;
-(void)setRunwayTime:(FUStepTime *)arg1 ;
-(void)setPlannedTime:(FUStepTime *)arg1 ;
-(void)setLegStatus:(long long)arg1 ;
-(FUStepTime *)runwayTime;
-(long long)legStatus;
-(FUStepTime *)estimatedTime;
-(FUStepTime *)plannedTime;
-(void)setDelayFromSchedule:(NSNumber *)arg1 ;
@end

