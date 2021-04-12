/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVAudioTime : NSObject {

	AudioTimeStamp _ats;
	double _sampleRate;
	void* _reserved;

}

@property (getter=isHostTimeValid,nonatomic,readonly) BOOL hostTimeValid; 
@property (nonatomic,readonly) unsigned long long hostTime; 
@property (getter=isSampleTimeValid,nonatomic,readonly) BOOL sampleTimeValid; 
@property (nonatomic,readonly) long long sampleTime; 
@property (nonatomic,readonly) double sampleRate; 
@property (nonatomic,readonly) AudioTimeStamp audioTimeStamp; 
+(double)secondsForHostTime:(unsigned long long)arg1 ;
+(id)timeWithAudioTimeStamp:(const AudioTimeStamp*)arg1 sampleRate:(double)arg2 ;
+(id)timeWithHostTime:(unsigned long long)arg1 ;
+(id)timeWithSampleTime:(long long)arg1 atRate:(double)arg2 ;
+(id)timeWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3 ;
+(unsigned long long)hostTimeForSeconds:(double)arg1 ;
-(id)init;
-(id)description;
-(double)sampleRate;
-(id)initWithHostTime:(unsigned long long)arg1 ;
-(id)initWithSampleTime:(long long)arg1 atRate:(double)arg2 ;
-(id)initWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3 ;
-(BOOL)isHostTimeValid;
-(BOOL)isSampleTimeValid;
-(unsigned long long)hostTime;
-(long long)sampleTime;
-(id)extrapolateTimeFromAnchor:(id)arg1 ;
-(id)initWithAudioTimeStamp:(const AudioTimeStamp*)arg1 sampleRate:(double)arg2 ;
-(AudioTimeStamp)audioTimeStamp;
@end

