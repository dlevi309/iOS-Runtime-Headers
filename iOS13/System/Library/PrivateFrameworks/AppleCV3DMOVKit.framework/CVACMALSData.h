/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CVACLMotionTypeVector4, CVACLMotionTypeDoubleVector3, NSNumber;

@interface CVACMALSData : NSObject <NSSecureCoding> {

	unsigned _luxValue;
	CVACLMotionTypeVector4* _rawChannels;
	CVACLMotionTypeDoubleVector3* _colorComponents;
	double _timestamp;
	unsigned long long _syncTimestamp;
	NSNumber* _gain;
	NSNumber* _integrationTime;

}

@property (assign) unsigned luxValue;                                                     //@synthesize luxValue=_luxValue - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeVector4 * rawChannels;                        //@synthesize rawChannels=_rawChannels - In the implementation block
@property (nonatomic,retain) CVACLMotionTypeDoubleVector3 * colorComponents;              //@synthesize colorComponents=_colorComponents - In the implementation block
@property (assign) double timestamp;                                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned long long syncTimestamp;                                      //@synthesize syncTimestamp=_syncTimestamp - In the implementation block
@property (retain) NSNumber * gain;                                                       //@synthesize gain=_gain - In the implementation block
@property (retain) NSNumber * integrationTime;                                            //@synthesize integrationTime=_integrationTime - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setGain:(NSNumber *)arg1 ;
-(NSNumber *)gain;
-(CVACLMotionTypeDoubleVector3 *)colorComponents;
-(void)setColorComponents:(CVACLMotionTypeDoubleVector3 *)arg1 ;
-(NSNumber *)integrationTime;
-(void)setIntegrationTime:(NSNumber *)arg1 ;
-(void)setSyncTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)syncTimestamp;
-(void)setRawChannels:(CVACLMotionTypeVector4 *)arg1 ;
-(void)setLuxValue:(unsigned)arg1 ;
-(CVACLMotionTypeVector4 *)rawChannels;
-(unsigned)luxValue;
@end

