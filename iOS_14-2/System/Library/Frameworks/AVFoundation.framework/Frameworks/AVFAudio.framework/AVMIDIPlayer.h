/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPlaying;
-(void)finalize;
-(double)currentPosition;
-(id)initBase;
-(void)setRate:(float)arg1 ;
-(void)stop;
-(void)prepareToPlay;
-(void)play:(/*^block*/id)arg1 ;
-(float)rate;
-(double)duration;
-(id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)hostTimeForBeats:(double)arg1 ;
-(double)beatsForHostTime:(unsigned long long)arg1 ;
-(void)setCurrentPosition:(double)arg1 ;
-(void)destroyBase;
-(void)dealloc;
-(MIDIPlayerImpl*)impl;
@end

