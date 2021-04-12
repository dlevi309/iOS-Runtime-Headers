/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PRRangeMeasurement, PRAngleMeasurement;

@interface PRRelativePosition : NSObject <NSCopying, NSSecureCoding> {

	double _timestamp;
	long long _cycleIndex;
	PRRangeMeasurement* _range;
	PRAngleMeasurement* _azimuth;
	PRAngleMeasurement* _elevation;

}

@property (readonly) double timestamp;                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) long long cycleIndex;                                  //@synthesize cycleIndex=_cycleIndex - In the implementation block
@property (nonatomic,readonly) PRRangeMeasurement * range;                  //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) PRAngleMeasurement * azimuth;                //@synthesize azimuth=_azimuth - In the implementation block
@property (nonatomic,readonly) PRAngleMeasurement * elevation;              //@synthesize elevation=_elevation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relativePositionWithTimestamp:(double)arg1 range:(id)arg2 azimuth:(id)arg3 elevation:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(PRRangeMeasurement *)range;
-(PRAngleMeasurement *)azimuth;
-(PRAngleMeasurement *)elevation;
-(long long)cycleIndex;
-(id)initWithTimestamp:(double)arg1 range:(id)arg2 azimuth:(id)arg3 elevation:(id)arg4 ;
@end

