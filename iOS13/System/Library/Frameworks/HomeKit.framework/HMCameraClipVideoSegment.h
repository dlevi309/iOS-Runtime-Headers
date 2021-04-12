/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMCameraClipVideoSegment : NSObject <NSCopying, NSSecureCoding> {

	BOOL _initSegment;
	double _duration;
	unsigned long long _byteLength;
	unsigned long long _byteOffset;

}

@property (readonly) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long byteLength;                      //@synthesize byteLength=_byteLength - In the implementation block
@property (readonly) unsigned long long byteOffset;                      //@synthesize byteOffset=_byteOffset - In the implementation block
@property (getter=isInitSegment,readonly) BOOL initSegment;              //@synthesize initSegment=_initSegment - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(unsigned long long)byteLength;
-(unsigned long long)byteOffset;
-(BOOL)isInitSegment;
-(id)initWithDuration:(double)arg1 byteLength:(unsigned long long)arg2 byteOffset:(unsigned long long)arg3 isInitSegment:(BOOL)arg4 ;
@end

