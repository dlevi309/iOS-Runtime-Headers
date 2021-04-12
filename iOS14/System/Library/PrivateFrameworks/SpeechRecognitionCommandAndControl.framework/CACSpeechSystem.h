/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class NSTimer;

@interface CACSpeechSystem : NSObject {

	RXRecognitionSystemRef _recognitionSystemRef;
	CFLocaleRef _currentLocaleRef;
	NSTimer* _setLeadingContextStringDelayTimer;
	NSTimer* _setAdditionalContextStringsDelayTimer;

}
+(void)initialize;
+(id)speechSystem;
+(void)closeSpeechSystem;
+(void)recognizeString:(id)arg1 ;
+(void)stopPreventingDisplayDimming;
+(void)startPreventingDisplayDimming;
+(id)rxContextDictionaryForLanguageModel:(id)arg1 ;
+(id)valueFromRXContextKey:(id)arg1 rxLanguageObject:(RXLanguageObjectRef)arg2 ;
+(BOOL)isSpeechSystemServerRunning;
-(void)_close;
-(id)recognitionLocaleIdentifier;
-(void)setLeadingContextString:(id)arg1 ;
-(void)setAdditionalContextStrings:(id)arg1 ;
-(RXLanguageObjectRef)createRXLanguageObjectRefFromCACLanguageModel:(id)arg1 ignoreBuiltInLMTable:(BOOL)arg2 ;
-(RXRecognitionSystemRef)recognitionSystemRef;
-(id)initLocaleIdentifer:(id)arg1 microphoneIdentifier:(id)arg2 ;
-(CFLocaleRef)currentLocaleRef;
-(id)resultLanguageModelFromRXLanguageObject:(RXLanguageObjectRef)arg1 ;
-(RXLanguageObjectRef)createRXLanguageObjectRefFromCACLanguageModel:(id)arg1 ;
@end

