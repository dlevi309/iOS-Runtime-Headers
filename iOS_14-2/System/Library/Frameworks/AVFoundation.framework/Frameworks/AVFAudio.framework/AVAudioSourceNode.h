/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioSourceNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)pullInputBlockFromRenderBlock:(/*^block*/id)arg1 ;
-(id)initWithRenderBlock:(/*^block*/id)arg1 ;
-(id)initWithFormat:(id)arg1 renderBlock:(/*^block*/id)arg2 ;
@end

