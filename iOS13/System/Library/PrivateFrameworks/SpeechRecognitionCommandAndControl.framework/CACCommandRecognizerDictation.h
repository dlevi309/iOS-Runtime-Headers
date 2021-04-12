/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)adjustCapsAndSpacingInRecognizedMutableAttributedString:(id)arg1 leadingText:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeRXResult:(RXLanguageObjectRef)arg2 ;
-(void)speechRecognizer:(id)arg1 didBeginUtteranceWithID:(unsigned long long)arg2 ;
-(id)_attributedStringFromResult:(RXLanguageObjectRef)arg1 ;
-(RXLanguageObjectRef)_adLibLanguageObjectFromLanguageModel:(RXLanguageObjectRef)arg1 ;
-(void)handleDictation:(id)arg1 ;
-(void)_didBeginUtteranceWithID:(unsigned long long)arg1 ;
-(void)dictationConnectionDidRecognizeAttributedString:(id)arg1 isHypothesis:(BOOL)arg2 utteranceID:(unsigned long long)arg3 ;
@end

