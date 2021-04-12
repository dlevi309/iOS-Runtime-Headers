/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMCameraStreamAudioPreferences, HMCameraStreamVideoPreferences;

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding> {

	HMCameraStreamAudioPreferences* _audioPreferences;
	HMCameraStreamVideoPreferences* _videoPreferences;

}

@property (nonatomic,readonly) HMCameraStreamAudioPreferences * audioPreferences;              //@synthesize audioPreferences=_audioPreferences - In the implementation block
@property (nonatomic,readonly) HMCameraStreamVideoPreferences * videoPreferences;              //@synthesize videoPreferences=_videoPreferences - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMCameraStreamAudioPreferences *)audioPreferences;
-(HMCameraStreamVideoPreferences *)videoPreferences;
-(id)initWithAudioPreferences:(id)arg1 videoPreferences:(id)arg2 ;
@end

