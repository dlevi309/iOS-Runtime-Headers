/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setKeywords:(id)arg1 ;
-(id)_keywords;
-(int)completionType;
-(BOOL)_keywordIndexChanged;
-(id)sequenceTag;
-(VSRecognitionDisambiguationContextRef)_disambiguationContext;
-(void)setRepeatedSpokenFeedbackString:(id)arg1 ;
-(id)repeatedSpokenFeedbackString;
-(void)setSequenceTag:(id)arg1 ;
-(id)knownValueForClassIdentifier:(id)arg1 ;
-(void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3 ;
-(id)knownValuesForClassIdentifier:(id)arg1 ;
-(void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3 ;
-(id)ambiguousValuesForClassIdentifier:(id)arg1 ;
-(void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3 ;
-(VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(SCD_Struct_VS6*)arg1 info:(void*)arg2 ;
-(id)_actionForEmptyResults;
-(void)dealloc;
@end

