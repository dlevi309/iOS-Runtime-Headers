/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorMeta : NSObject <NSSecureCoding> {

	BOOL _movement;
	unsigned _offset;
	unsigned _dataSize;
	int _dataType;
	unsigned long long _identifier;
	double _startTime;
	unsigned long long _timestamp;
	unsigned long long _dataIdentifier;

}

@property (assign) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned long long dataIdentifier;              //@synthesize dataIdentifier=_dataIdentifier - In the implementation block
@property (assign) unsigned offset;                                //@synthesize offset=_offset - In the implementation block
@property (assign) unsigned dataSize;                              //@synthesize dataSize=_dataSize - In the implementation block
@property (assign) int dataType;                                   //@synthesize dataType=_dataType - In the implementation block
@property (assign) BOOL movement;                                  //@synthesize movement=_movement - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)dataType;
-(unsigned long long)dataIdentifier;
-(unsigned long long)timestamp;
-(void)setDataType:(int)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(BOOL)movement;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMovement:(BOOL)arg1 ;
-(void)setDataIdentifier:(unsigned long long)arg1 ;
-(unsigned)dataSize;
-(unsigned)offset;
-(id)description;
-(void)setOffset:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(void)setDataSize:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(double)startTime;
-(id)initWithDataType:(int)arg1 ;
@end

