/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVMIDIPlayer : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) double duration; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) double currentPosition; 
-(void)dealloc;
-(void)finalize;
-(void)stop;
-(double)duration;
-(MIDIPlayerImpl*)impl;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(BOOL)isPlaying;
-(void)prepareToPlay;
-(void)play:(/*^block*/id)arg1 ;
-(id)initBase;
-(double)currentPosition;
-(id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)hostTimeForBeats:(double)arg1 ;
-(double)beatsForHostTime:(unsigned long long)arg1 ;
-(void)setCurrentPosition:(double)arg1 ;
-(void)destroyBase;
@end

