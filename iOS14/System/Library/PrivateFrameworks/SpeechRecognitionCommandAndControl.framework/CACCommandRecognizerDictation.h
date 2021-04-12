/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <SpeechRecognitionCommandAndControl/CACCommandRecognizer.h>

@class CACProfanityNode, NSString;

@interface CACCommandRecognizerDictation : CACCommandRecognizer {

	CACProfanityNode* _rootProfanityNode;
	NSString* _currentLocaleIdentifier;
	BOOL _suppressProfanity;

}
-(void)speechRecognizer:(id)arg1 didRecognizeRXResult:(RXLanguageObjectRef)arg2 ;
-(void)speechRecognizer:(id)arg1 didBeginUtteranceWithID:(unsigned long long)arg2 ;
-(id)_attributedStringFromResult:(RXLanguageObjectRef)arg1 ;
-(RXLanguageObjectRef)_adLibLanguageObjectFromLanguageModel:(RXLanguageObjectRef)arg1 ;
-(void)handleDictation:(id)arg1 ;
-(void)_didBeginUtteranceWithID:(unsigned long long)arg1 ;
-(void)dictationConnectionDidRecognizeAttributedString:(id)arg1 isHypothesis:(BOOL)arg2 utteranceID:(unsigned long long)arg3 ;
@end

