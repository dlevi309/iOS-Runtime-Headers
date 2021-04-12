/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioTime;

@interface AVAudioClock : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioTime * currentTime; 
-(id)init;
-(void)dealloc;
-(AVAudioTime *)currentTime;
-(id)initWithNode:(AVAudioNodeImplBase*)arg1 ;
-(AudioTimeStamp)currentAudioTimeStamp;
-(long long)currentIONumberFrames;
-(id)awaitIOCycle:(unsigned*)arg1 ;
@end

