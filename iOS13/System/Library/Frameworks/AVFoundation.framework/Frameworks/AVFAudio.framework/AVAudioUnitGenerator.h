/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioUnit.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioUnitGenerator : AVAudioUnit <AVAudioMixing>

@property (assign,nonatomic) BOOL bypass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(BOOL)bypass;
-(void)setBypass:(BOOL)arg1 ;
@end

