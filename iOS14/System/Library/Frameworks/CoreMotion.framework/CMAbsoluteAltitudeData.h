/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSNumber;

@interface CMAbsoluteAltitudeData : CMLogItem {

	double _altitude;
	double _absoluteAltitudeAccuracy;
	double _absoluteAltitudePrecision;
	long long _absoluteAltitudeStatusInfo;

}

@property (nonatomic,readonly) NSNumber * absoluteAltitude; 
@property (nonatomic,readonly) double absoluteAltitudeAccuracy;                   //@synthesize absoluteAltitudeAccuracy=_absoluteAltitudeAccuracy - In the implementation block
@property (nonatomic,readonly) double absoluteAltitudePrecision;                  //@synthesize absoluteAltitudePrecision=_absoluteAltitudePrecision - In the implementation block
@property (nonatomic,readonly) long long absoluteAltitudeStatusInfo;              //@synthesize absoluteAltitudeStatusInfo=_absoluteAltitudeStatusInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)absoluteAltitude;
-(void)setAltitudeData:(double)arg1 accuracy:(double)arg2 precision:(double)arg3 andStatus:(long long)arg4 ;
-(id)initWithAltitude:(double)arg1 accuracy:(double)arg2 precision:(double)arg3 status:(long long)arg4 timestamp:(double)arg5 ;
-(double)absoluteAltitudeAccuracy;
-(double)absoluteAltitudePrecision;
-(long long)absoluteAltitudeStatusInfo;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

