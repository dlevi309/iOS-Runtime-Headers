/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class NSString, NSMutableDictionary;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction {

	NSString* _repeatedSpokenFeedbackString;
	NSString* _sequenceTag;
	NSMutableDictionary* _knownValues;
	NSMutableDictionary* _knownPhoneticValues;
	NSMutableDictionary* _ambiguousValues;
	NSMutableDictionary* _ambiguousPhoneticValues;
	void* _context;

}
-(void)dealloc;
-(void)setKeywords:(id)arg1 ;
-(id)_keywords;
-(int)completionType;
-(BOOL)_keywordIndexChanged;
-(VSRecognitionDisambiguationContextRef)_disambiguationContext;
-(void)setRepeatedSpokenFeedbackString:(id)arg1 ;
-(id)repeatedSpokenFeedbackString;
-(id)sequenceTag;
-(void)setSequenceTag:(id)arg1 ;
-(id)knownValueForClassIdentifier:(id)arg1 ;
-(void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3 ;
-(id)knownValuesForClassIdentifier:(id)arg1 ;
-(void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3 ;
-(id)ambiguousValuesForClassIdentifier:(id)arg1 ;
-(void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3 ;
-(VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(SCD_Struct_VS6*)arg1 info:(void*)arg2 ;
-(id)_actionForEmptyResults;
@end

