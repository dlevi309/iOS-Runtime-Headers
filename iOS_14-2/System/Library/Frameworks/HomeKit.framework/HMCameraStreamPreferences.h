/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMCameraStreamAudioPreferences, HMCameraStreamVideoPreferences;

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding> {

	HMCameraStreamAudioPreferences* _audioPreferences;
	HMCameraStreamVideoPreferences* _videoPreferences;
	long long _minimumRequiredAvailableOrInUseStreams;

}

@property (nonatomic,readonly) HMCameraStreamAudioPreferences * audioPreferences;              //@synthesize audioPreferences=_audioPreferences - In the implementation block
@property (nonatomic,readonly) HMCameraStreamVideoPreferences * videoPreferences;              //@synthesize videoPreferences=_videoPreferences - In the implementation block
@property (assign) long long minimumRequiredAvailableOrInUseStreams;                           //@synthesize minimumRequiredAvailableOrInUseStreams=_minimumRequiredAvailableOrInUseStreams - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(HMCameraStreamAudioPreferences *)audioPreferences;
-(HMCameraStreamVideoPreferences *)videoPreferences;
-(long long)minimumRequiredAvailableOrInUseStreams;
-(id)initWithAudioPreferences:(id)arg1 videoPreferences:(id)arg2 ;
-(void)setMinimumRequiredAvailableOrInUseStreams:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

