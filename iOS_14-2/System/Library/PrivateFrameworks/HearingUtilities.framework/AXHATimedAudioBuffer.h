/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@class AVAudioPCMBuffer, AVAudioTime;

@interface AXHATimedAudioBuffer : NSObject {

	AVAudioPCMBuffer* _buffer;
	AVAudioTime* _time;

}

@property (nonatomic,retain) AVAudioPCMBuffer * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,retain) AVAudioTime * time;                     //@synthesize time=_time - In the implementation block
-(AVAudioTime *)time;
-(void)setTime:(AVAudioTime *)arg1 ;
-(void)setBuffer:(AVAudioPCMBuffer *)arg1 ;
-(AVAudioPCMBuffer *)buffer;
-(id)initWithBuffer:(id)arg1 atTime:(id)arg2 ;
@end

