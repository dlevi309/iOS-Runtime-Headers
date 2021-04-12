/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)timeWithAudioTimeStamp:(const AudioTimeStamp*)arg1 sampleRate:(double)arg2 ;
+(id)timeWithSampleTime:(long long)arg1 atRate:(double)arg2 ;
+(double)secondsForHostTime:(unsigned long long)arg1 ;
+(id)timeWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3 ;
+(id)timeWithHostTime:(unsigned long long)arg1 ;
+(unsigned long long)hostTimeForSeconds:(double)arg1 ;
-(id)extrapolateTimeFromAnchor:(id)arg1 ;
-(id)init;
-(id)initWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3 ;
-(id)initWithHostTime:(unsigned long long)arg1 ;
-(id)description;
-(AudioTimeStamp)audioTimeStamp;
-(long long)sampleTime;
-(unsigned long long)hostTime;
-(id)initWithSampleTime:(long long)arg1 atRate:(double)arg2 ;
-(BOOL)isHostTimeValid;
-(id)initWithAudioTimeStamp:(const AudioTimeStamp*)arg1 sampleRate:(double)arg2 ;
-(BOOL)isSampleTimeValid;
-(double)sampleRate;
@end

