/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
@interface SFSSAudioConverter : NSObject {

	OpaqueAudioConverterRef _decoder;
	AudioStreamBasicDescription _srcAsbd;
	AudioStreamBasicDescription _dstAsbd;

}
+(id)sharedInstance;
-(void)reset;
-(void)dealloc;
-(id)convertChunks:(id)arg1 srcAsbd:(AudioStreamBasicDescription)arg2 dstAsbd:(AudioStreamBasicDescription)arg3 outError:(id*)arg4 ;
-(id)createAudioConverter:(AudioStreamBasicDescription)arg1 dstAsbd:(AudioStreamBasicDescription)arg2 ;
@end

