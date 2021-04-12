/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioUnitMIDIInstrument.h>

@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument

@property (assign,nonatomic) float stereoPan; 
@property (assign,nonatomic) float masterGain; 
@property (assign,nonatomic) float globalTuning; 
-(id)init;
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(BOOL)loadInstrumentAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadSoundBankInstrumentAtURL:(id)arg1 program:(unsigned char)arg2 bankMSB:(unsigned char)arg3 bankLSB:(unsigned char)arg4 error:(id*)arg5 ;
-(BOOL)loadAudioFilesAtURLs:(id)arg1 error:(id*)arg2 ;
-(float)stereoPan;
-(float)masterGain;
-(float)globalTuning;
-(void)setStereoPan:(float)arg1 ;
-(void)setMasterGain:(float)arg1 ;
-(void)setGlobalTuning:(float)arg1 ;
@end

