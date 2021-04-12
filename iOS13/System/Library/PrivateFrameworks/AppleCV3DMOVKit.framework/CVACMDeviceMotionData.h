/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CVACMMotionTypeDeviceMotionData;

@interface CVACMDeviceMotionData : NSObject <NSSecureCoding> {

	CVACMMotionTypeDeviceMotionData* _deviceMotion;
	double _timestamp;

}

@property (nonatomic,retain) CVACMMotionTypeDeviceMotionData * deviceMotion;              //@synthesize deviceMotion=_deviceMotion - In the implementation block
@property (assign) double timestamp;                                                      //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(CVACMMotionTypeDeviceMotionData *)deviceMotion;
-(void)setDeviceMotion:(CVACMMotionTypeDeviceMotionData *)arg1 ;
-(id)initWithCMDeviceMotion:(id)arg1 ;
@end

