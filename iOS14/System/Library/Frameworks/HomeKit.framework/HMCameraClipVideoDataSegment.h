/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMCameraClipVideoSegment.h>

@interface HMCameraClipVideoDataSegment : HMCameraClipVideoSegment {

	double _duration;
	double _timeOffset;

}

@property (readonly) double duration;                //@synthesize duration=_duration - In the implementation block
@property (readonly) double timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)timeOffset;
-(id)initWithByteLength:(unsigned long long)arg1 byteOffset:(unsigned long long)arg2 duration:(double)arg3 timeOffset:(double)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

