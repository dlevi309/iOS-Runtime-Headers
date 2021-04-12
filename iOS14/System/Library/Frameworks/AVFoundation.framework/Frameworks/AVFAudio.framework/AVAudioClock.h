/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioTime;

@interface AVAudioClock : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioTime * currentTime; 
-(id)init;
-(AVAudioTime *)currentTime;
-(id)initWithNode:(AVAudioNodeImplBase*)arg1 ;
-(AudioTimeStamp)currentAudioTimeStamp;
-(long long)currentIONumberFrames;
-(id)awaitIOCycle:(unsigned*)arg1 ;
-(void)dealloc;
@end

