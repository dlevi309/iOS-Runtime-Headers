/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@class AVSpeechSynthesizer, NSString;

@interface WFSpeakTextAction : WFAction <AVSpeechSynthesizerDelegate> {

	AVSpeechSynthesizer* _synthesizer;

}

@property (nonatomic,retain) AVSpeechSynthesizer * synthesizer;              //@synthesize synthesizer=_synthesizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 utterance:(id)arg3 ;
-(void)setSynthesizer:(AVSpeechSynthesizer *)arg1 ;
-(AVSpeechSynthesizer *)synthesizer;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)speakTextUsingVoiceOver:(id)arg1 languageCode:(id)arg2 pitch:(float)arg3 waitUntilFinished:(BOOL)arg4 ;
-(void)speakTextUsingSynthesizer:(id)arg1 voice:(id)arg2 rate:(float)arg3 pitch:(float)arg4 waitUntilFinished:(BOOL)arg5 ;
-(void)cleanupSpeechSynthesizer;
-(id)voicePickerParameter;
-(id)languagePickerParameter;
@end

