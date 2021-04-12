/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@class NSString;

@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate> {

	PlatformSpeechSynthesizer* m_synthesizerObject;
	RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::DumbPtrTraits<WebCore::PlatformSpeechSynthesisUtterance> >* m_utterance;
	RetainPtr<AVSpeechSynthesizer>* m_synthesizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)pause;
-(void)resume;
-(float)mapSpeechRateToPlatformRate:(float)arg1 ;
-(void)speakUtterance:(RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::DumbPtrTraits<WebCore::PlatformSpeechSynthesisUtterance> >*)arg1 ;
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 utterance:(id)arg3 ;
-(id)initWithSpeechSynthesizer:(PlatformSpeechSynthesizer*)arg1 ;
@end

