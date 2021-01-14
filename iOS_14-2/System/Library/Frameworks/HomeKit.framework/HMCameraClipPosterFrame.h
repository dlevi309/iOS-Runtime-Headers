/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)width;
-(double)timeOffset;
-(id)initWithTimeOffset:(double)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 byteOffset:(unsigned long long)arg4 sizeInBytes:(unsigned long long)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)height;
-(id)description;
-(unsigned long long)sizeInBytes;
-(unsigned long long)byteOffset;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

