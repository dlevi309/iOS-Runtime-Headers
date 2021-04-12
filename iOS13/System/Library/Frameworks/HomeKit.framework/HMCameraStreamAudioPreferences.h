/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)volume;
-(NSSet *)codecs;
-(id)initWithVolume:(id)arg1 codecs:(id)arg2 ;
@end

