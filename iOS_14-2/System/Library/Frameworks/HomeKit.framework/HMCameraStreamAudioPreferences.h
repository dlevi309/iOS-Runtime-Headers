/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSSet;

@interface HMCameraStreamAudioPreferences : NSObject <NSSecureCoding> {

	NSNumber* _volume;
	NSSet* _codecs;

}

@property (nonatomic,readonly) NSNumber * volume;              //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) NSSet * codecs;                 //@synthesize codecs=_codecs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)codecs;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithVolume:(id)arg1 codecs:(id)arg2 ;
-(NSNumber *)volume;
-(BOOL)isEqual:(id)arg1 ;
@end

