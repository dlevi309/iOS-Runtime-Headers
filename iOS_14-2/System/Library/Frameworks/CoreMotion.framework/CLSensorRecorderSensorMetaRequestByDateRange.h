/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorMetaRequestByDateRange : NSObject <NSSecureCoding> {

	int _dataType;
	double _startTime;
	double _endTime;

}

@property (assign) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign) double endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (assign) int dataType;                  //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)dataType;
-(void)setDataType:(int)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(double)startTime;
@end

