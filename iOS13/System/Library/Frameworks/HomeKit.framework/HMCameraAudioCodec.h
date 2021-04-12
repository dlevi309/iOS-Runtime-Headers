/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMCameraAudioCodec : NSObject <NSSecureCoding> {

	unsigned long long _audioCodec;

}

@property (nonatomic,readonly) unsigned long long audioCodec;              //@synthesize audioCodec=_audioCodec - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isValid:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)audioCodec;
-(id)initWithAudioCodecType:(unsigned long long)arg1 ;
@end

