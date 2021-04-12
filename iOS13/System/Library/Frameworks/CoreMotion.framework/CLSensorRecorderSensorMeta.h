/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(int)dataType;
-(unsigned)offset;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(BOOL)movement;
-(void)setDataType:(int)arg1 ;
-(id)initWithDataType:(int)arg1 ;
-(void)setDataSize:(unsigned)arg1 ;
-(unsigned)dataSize;
-(unsigned long long)dataIdentifier;
-(void)setDataIdentifier:(unsigned long long)arg1 ;
-(void)setMovement:(BOOL)arg1 ;
@end

