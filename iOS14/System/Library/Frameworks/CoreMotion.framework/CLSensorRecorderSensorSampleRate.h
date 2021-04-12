/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorSampleRate : NSObject <NSSecureCoding> {

	unsigned _rate;
	int _dataType;

}

@property (assign) unsigned rate;              //@synthesize rate=_rate - In the implementation block
@property (assign) int dataType;               //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)dataType;
-(void)setDataType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRate:(unsigned)arg1 ;
-(unsigned)rate;
-(id)initWithCoder:(id)arg1 ;
@end

