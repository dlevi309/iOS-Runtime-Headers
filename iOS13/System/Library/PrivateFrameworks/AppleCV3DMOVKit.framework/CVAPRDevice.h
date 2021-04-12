/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CVAPRRangeMeasurement, CVAPRAngleMeasurement, NSUUID, NSNumber;

@interface CVAPRDevice : NSObject <NSSecureCoding> {

	long long _referenceFrame;
	CVAPRRangeMeasurement* _range;
	CVAPRAngleMeasurement* _azimuth;
	CVAPRAngleMeasurement* _elevation;
	NSUUID* _UUID;
	NSNumber* _sessionID;
	long long _measurementNumber;
	double _measurementTimestamp;
	double _timestamp;
	double _mach_continuous_time;
	double _utc_time;

}

@property (assign,nonatomic) long long referenceFrame;                       //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (nonatomic,retain) CVAPRRangeMeasurement * range;                  //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) CVAPRAngleMeasurement * azimuth;                //@synthesize azimuth=_azimuth - In the implementation block
@property (nonatomic,retain) CVAPRAngleMeasurement * elevation;              //@synthesize elevation=_elevation - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                                  //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSNumber * sessionID;                           //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) long long measurementNumber;                    //@synthesize measurementNumber=_measurementNumber - In the implementation block
@property (assign,nonatomic) double measurementTimestamp;                    //@synthesize measurementTimestamp=_measurementTimestamp - In the implementation block
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double mach_continuous_time;                    //@synthesize mach_continuous_time=_mach_continuous_time - In the implementation block
@property (assign,nonatomic) double utc_time;                                //@synthesize utc_time=_utc_time - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(double)timestamp;
-(CVAPRRangeMeasurement *)range;
-(void)setTimestamp:(double)arg1 ;
-(NSNumber *)sessionID;
-(long long)referenceFrame;
-(void)setReferenceFrame:(long long)arg1 ;
-(void)setSessionID:(NSNumber *)arg1 ;
-(void)setRange:(CVAPRRangeMeasurement *)arg1 ;
-(CVAPRAngleMeasurement *)azimuth;
-(void)setAzimuth:(CVAPRAngleMeasurement *)arg1 ;
-(CVAPRAngleMeasurement *)elevation;
-(void)setElevation:(CVAPRAngleMeasurement *)arg1 ;
-(void)setMach_continuous_time:(double)arg1 ;
-(void)setUtc_time:(double)arg1 ;
-(void)addTimes;
-(void)setMeasurementNumber:(long long)arg1 ;
-(void)setMeasurementTimestamp:(double)arg1 ;
-(long long)measurementNumber;
-(double)measurementTimestamp;
-(double)mach_continuous_time;
-(double)utc_time;
-(id)initWithPRRelativePosition:(id)arg1 peer:(id)arg2 ;
@end

