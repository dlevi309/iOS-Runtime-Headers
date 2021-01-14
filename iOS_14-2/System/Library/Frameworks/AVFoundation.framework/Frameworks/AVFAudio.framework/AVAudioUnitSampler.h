/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioUnitMIDIInstrument.h>

@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument

@property (assign,nonatomic) float stereoPan; 
@property (assign,nonatomic) float masterGain; 
@property (assign,nonatomic) float globalTuning; 
-(float)masterGain;
-(id)init;
-(BOOL)loadInstrumentAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadSoundBankInstrumentAtURL:(id)arg1 program:(unsigned char)arg2 bankMSB:(unsigned char)arg3 bankLSB:(unsigned char)arg4 error:(id*)arg5 ;
-(BOOL)loadAudioFilesAtURLs:(id)arg1 error:(id*)arg2 ;
-(float)globalTuning;
-(void)setStereoPan:(float)arg1 ;
-(void)setMasterGain:(float)arg1 ;
-(void)setGlobalTuning:(float)arg1 ;
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(float)stereoPan;
@end

