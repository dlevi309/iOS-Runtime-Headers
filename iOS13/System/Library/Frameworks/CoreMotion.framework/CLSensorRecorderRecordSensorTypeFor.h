/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderRecordSensorTypeFor : NSObject <NSSecureCoding> {

	int _dataType;
	double _duration;

}

@property (assign) double duration;              //@synthesize duration=_duration - In the implementation block
@property (assign) int dataType;                 //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(int)dataType;
-(void)setDuration:(double)arg1 ;
-(void)setDataType:(int)arg1 ;
@end

