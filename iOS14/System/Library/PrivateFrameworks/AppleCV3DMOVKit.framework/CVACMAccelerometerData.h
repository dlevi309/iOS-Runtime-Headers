/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CVACLMotionTypeVector3;

@interface CVACMAccelerometerData : NSObject <NSSecureCoding> {

	float _temperature;
	CVACLMotionTypeVector3* _acceleration;
	double _timestamp;
	unsigned long long _syncTimestamp;

}

@property (nonatomic,retain) CVACLMotionTypeVector3 * acceleration;              //@synthesize acceleration=_acceleration - In the implementation block
@property (assign,nonatomic) double timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float temperature;                                  //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) unsigned long long syncTimestamp;                   //@synthesize syncTimestamp=_syncTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)temperature;
-(id)init;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(void)setTemperature:(float)arg1 ;
-(CVACLMotionTypeVector3 *)acceleration;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setAcceleration:(CVACLMotionTypeVector3 *)arg1 ;
-(void)setSyncTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)syncTimestamp;
@end

