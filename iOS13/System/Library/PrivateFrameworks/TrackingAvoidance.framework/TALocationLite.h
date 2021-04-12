/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class NSDate, NSString;

@interface TALocationLite : NSObject <TAEventProtocol> {

	BOOL _isSimulatedOrSpoofed;
	NSDate* _timestamp;
	double _latitude;
	double _longitude;
	double _horizontalAccuracy;
	double _altitude;
	double _verticalAccuracy;
	double _speed;
	double _speedAccuracy;
	double _course;
	double _courseAccuracy;
	double _deltaDistance;
	double _deltaDistanceAccuracy;
	double _groundAltitude;
	double _groundAltitudeUncertainty;
	double _pressure;
	double _pressureUncertainty;

}

@property (nonatomic,copy,readonly) NSDate * timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double latitude;                               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                              //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;                     //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) double altitude;                               //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double verticalAccuracy;                       //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (nonatomic,readonly) double speed;                                  //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) double speedAccuracy;                          //@synthesize speedAccuracy=_speedAccuracy - In the implementation block
@property (nonatomic,readonly) double course;                                 //@synthesize course=_course - In the implementation block
@property (nonatomic,readonly) double courseAccuracy;                         //@synthesize courseAccuracy=_courseAccuracy - In the implementation block
@property (nonatomic,readonly) double deltaDistance;                          //@synthesize deltaDistance=_deltaDistance - In the implementation block
@property (nonatomic,readonly) double deltaDistanceAccuracy;                  //@synthesize deltaDistanceAccuracy=_deltaDistanceAccuracy - In the implementation block
@property (nonatomic,readonly) double groundAltitude;                         //@synthesize groundAltitude=_groundAltitude - In the implementation block
@property (nonatomic,readonly) double groundAltitudeUncertainty;              //@synthesize groundAltitudeUncertainty=_groundAltitudeUncertainty - In the implementation block
@property (nonatomic,readonly) double pressure;                               //@synthesize pressure=_pressure - In the implementation block
@property (nonatomic,readonly) double pressureUncertainty;                    //@synthesize pressureUncertainty=_pressureUncertainty - In the implementation block
@property (nonatomic,readonly) BOOL isSimulatedOrSpoofed;                     //@synthesize isSimulatedOrSpoofed=_isSimulatedOrSpoofed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)distanceFromLocation:(id)arg1 toLocation:(id)arg2 satisfyNSigma:(unsigned long long)arg3 satisfyMinDistance:(double)arg4 ;
+(double)residualDistanceFromLocation:(id)arg1 toLocation:(id)arg2 nSigma:(unsigned long long)arg3 ;
+(SCD_Struct_TA1)estimateSpeedFrom:(id)arg1 to:(id)arg2 ;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(double)distanceFromLocation:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(double)altitude;
-(double)speed;
-(double)horizontalAccuracy;
-(double)verticalAccuracy;
-(double)speedAccuracy;
-(double)course;
-(double)courseAccuracy;
-(double)groundAltitude;
-(double)pressure;
-(id)descriptionDictionary;
-(id)getDate;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 ;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 deltaDistance:(double)arg11 deltaDistanceAccuracy:(double)arg12 groundAltitude:(double)arg13 groundAltitudeUncertainty:(double)arg14 pressure:(double)arg15 pressureUncertainty:(double)arg16 isSimulatedOrSpoofed:(BOOL)arg17 ;
-(double)deltaDistance;
-(double)deltaDistanceAccuracy;
-(double)groundAltitudeUncertainty;
-(double)pressureUncertainty;
-(BOOL)isSimulatedOrSpoofed;
-(BOOL)distanceToLocation:(id)arg1 satisfyNSigma:(unsigned long long)arg2 satisfyMinDistance:(double)arg3 ;
@end

