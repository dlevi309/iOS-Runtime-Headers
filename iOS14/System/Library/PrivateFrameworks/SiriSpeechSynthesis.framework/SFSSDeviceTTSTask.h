/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/

#import <SiriSpeechSynthesis/SFSpeechSynthesisTask.h>

@class SFSSTTSEngine;

@interface SFSSDeviceTTSTask : SFSpeechSynthesisTask {

	SFSSTTSEngine* _ttsEngine;

}

@property (assign,nonatomic,__weak) SFSSTTSEngine * ttsEngine;              //@synthesize ttsEngine=_ttsEngine - In the implementation block
-(void)startTask:(/*^block*/id)arg1 ;
-(void)cancelTask;
-(id)initWithRequest:(id)arg1 ;
-(SFSSTTSEngine *)ttsEngine;
-(void)setTtsEngine:(SFSSTTSEngine *)arg1 ;
@end

