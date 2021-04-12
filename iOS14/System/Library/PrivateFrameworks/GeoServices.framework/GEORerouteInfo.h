/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface GEORerouteInfo : NSObject <NSSecureCoding> {

	double _distancePenalty;
	double _throttledReroutesPenalty;
	double _penalty;
	NSDate* _time;
	double _distanceFromDestination;

}

@property (nonatomic,readonly) double penalty;                            //@synthesize penalty=_penalty - In the implementation block
@property (nonatomic,retain) NSDate * time;                               //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) double distanceFromDestination;              //@synthesize distanceFromDestination=_distanceFromDestination - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(void)updateWithCurrentTime:(id)arg1 location:(id)arg2 isMostRecentReroute:(BOOL)arg3 destinationCoordinate:(SCD_Struct_GE1)arg4 numThrottledReroutes:(unsigned long long)arg5 ;
-(double)penalty;
-(void)encodeWithCoder:(id)arg1 ;
-(double)distanceFromDestination;
-(void)setDistanceFromDestination:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

