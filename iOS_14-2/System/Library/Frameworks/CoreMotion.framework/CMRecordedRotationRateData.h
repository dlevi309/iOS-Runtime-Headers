/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMRotationRateData.h>

@class NSDate;

@interface CMRecordedRotationRateData : CMRotationRateData {

	double _startDateValue;
	SCD_Struct_CM9 _rotationRate;
	double _timestampValue;

}

@property (readonly) NSDate * startDate; 
+(BOOL)supportsSecureCoding;
-(id)initWithData:(CMGyro200*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 ;
-(NSDate *)startDate;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM9)rotationRate;
-(void)dealloc;
@end

