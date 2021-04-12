/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMAmbientPressureData.h>

@class NSDate;

@interface CMRecordedPressureData : CMAmbientPressureData {

	double _startDateValue;
	float _pressureValue;
	double _timestampValue;
	float _temperatureValue;
	unsigned long long _identifier;

}

@property (readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSDate * startDate; 
@property (readonly) double startTime; 
+(BOOL)supportsSecureCoding;
-(SCD_Struct_CM17)ambientPressure;
-(void)resetWithData:(CMPressure*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
-(NSDate *)startDate;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(double)startTime;
-(id)initWithData:(CMPressure*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
-(void)dealloc;
@end

