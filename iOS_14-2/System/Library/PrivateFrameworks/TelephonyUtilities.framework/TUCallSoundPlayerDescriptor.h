/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSNumber;

@interface TUCallSoundPlayerDescriptor : NSObject {

	long long _soundType;
	NSNumber* _sound;
	unsigned long long _iterations;
	double _pauseDuration;

}

@property (assign,nonatomic) long long soundType;                        //@synthesize soundType=_soundType - In the implementation block
@property (nonatomic,retain) NSNumber * sound;                           //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) unsigned long long iterations;              //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) double pauseDuration;                       //@synthesize pauseDuration=_pauseDuration - In the implementation block
-(NSNumber *)sound;
-(void)setSound:(NSNumber *)arg1 ;
-(void)setIterations:(unsigned long long)arg1 ;
-(unsigned long long)iterations;
-(long long)soundType;
-(void)setSoundType:(long long)arg1 ;
-(id)description;
-(double)pauseDuration;
-(void)setPauseDuration:(double)arg1 ;
-(id)initWithSoundType:(long long)arg1 call:(id)arg2 ;
-(id)initWithSoundType:(long long)arg1 provider:(id)arg2 video:(BOOL)arg3 region:(long long)arg4 ;
-(id)initWithSoundType:(long long)arg1 sound:(id)arg2 iterations:(unsigned long long)arg3 pauseDuration:(double)arg4 ;
@end

