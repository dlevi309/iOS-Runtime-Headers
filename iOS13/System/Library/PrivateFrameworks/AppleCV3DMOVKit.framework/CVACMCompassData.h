/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CVACLMotionTypeVector3;

@interface CVACMCompassData : NSObject <NSSecureCoding> {

	float _temperature;
	CVACLMotionTypeVector3* _fieldValues;
	double _timestamp;
	unsigned long long _syncTimestamp;

}

@property (nonatomic,retain) CVACLMotionTypeVector3 * fieldValues;              //@synthesize fieldValues=_fieldValues - In the implementation block
@property (assign) float temperature;                                           //@synthesize temperature=_temperature - In the implementation block
@property (assign) double timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned long long syncTimestamp;                            //@synthesize syncTimestamp=_syncTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(float)temperature;
-(void)setTemperature:(float)arg1 ;
-(void)setFieldValues:(CVACLMotionTypeVector3 *)arg1 ;
-(CVACLMotionTypeVector3 *)fieldValues;
-(void)setSyncTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)syncTimestamp;
@end

