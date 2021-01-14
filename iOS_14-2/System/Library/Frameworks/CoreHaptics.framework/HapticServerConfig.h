/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@interface HapticServerConfig : NSObject {

	BOOL _usingInternalHaptics;
	BOOL _supportsAudioPlayback;
	BOOL _supportsAdvancedPatternPlayers;
	float _hapticContinuousTimeLimit;

}

@property (readonly) BOOL usingInternalHaptics;                        //@synthesize usingInternalHaptics=_usingInternalHaptics - In the implementation block
@property (readonly) BOOL supportsAudioPlayback;                       //@synthesize supportsAudioPlayback=_supportsAudioPlayback - In the implementation block
@property (readonly) BOOL supportsAdvancedPatternPlayers;              //@synthesize supportsAdvancedPatternPlayers=_supportsAdvancedPatternPlayers - In the implementation block
@property (readonly) float hapticContinuousTimeLimit;                  //@synthesize hapticContinuousTimeLimit=_hapticContinuousTimeLimit - In the implementation block
-(id)initWithHapticPlayer:(id)arg1 error:(id*)arg2 ;
-(BOOL)usingInternalHaptics;
-(BOOL)supportsAudioPlayback;
-(BOOL)supportsAdvancedPatternPlayers;
-(float)hapticContinuousTimeLimit;
@end

