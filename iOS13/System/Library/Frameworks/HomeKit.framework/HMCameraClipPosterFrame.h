/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMCameraClipPosterFrame : NSObject <NSCopying, NSSecureCoding> {

	double _timeOffset;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _byteOffset;
	unsigned long long _sizeInBytes;

}

@property (readonly) unsigned long long byteOffset;               //@synthesize byteOffset=_byteOffset - In the implementation block
@property (readonly) unsigned long long sizeInBytes;              //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (readonly) double timeOffset;                           //@synthesize timeOffset=_timeOffset - In the implementation block
@property (readonly) unsigned long long width;                    //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                   //@synthesize height=_height - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)sizeInBytes;
-(double)timeOffset;
-(unsigned long long)byteOffset;
-(id)initWithTimeOffset:(double)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 byteOffset:(unsigned long long)arg4 sizeInBytes:(unsigned long long)arg5 ;
@end

