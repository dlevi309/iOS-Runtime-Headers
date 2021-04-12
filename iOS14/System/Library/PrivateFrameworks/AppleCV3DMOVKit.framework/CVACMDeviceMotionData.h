/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CVACMMotionTypeDeviceMotionData;

@interface CVACMDeviceMotionData : NSObject <NSSecureCoding> {

	CVACMMotionTypeDeviceMotionData* _deviceMotion;
	double _timestamp;

}

@property (nonatomic,retain) CVACMMotionTypeDeviceMotionData * deviceMotion;              //@synthesize deviceMotion=_deviceMotion - In the implementation block
@property (assign,nonatomic) double timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDeviceMotion:(CVACMMotionTypeDeviceMotionData *)arg1 ;
-(id)dictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(CVACMMotionTypeDeviceMotionData *)deviceMotion;
-(id)initWithCMDeviceMotion:(id)arg1 ;
@end

