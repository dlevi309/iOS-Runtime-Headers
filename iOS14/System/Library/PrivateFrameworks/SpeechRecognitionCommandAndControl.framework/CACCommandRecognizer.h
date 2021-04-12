/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class NSString, CACSpeechRecognizer, NSArray, NSDictionary;

@interface CACCommandRecognizer : NSObject {

	NSString* _type;
	id _owner;
	unsigned _flags;
	CACSpeechRecognizer* _speechRecognizer;
	NSArray* _spokenCommandsCache;
	NSDictionary* _contextEvaluators;
	NSArray* _builtInLMIdentifiers;

}

@property (retain) NSString * type;                                       //@synthesize type=_type - In the implementation block
@property (retain) id owner;                                              //@synthesize owner=_owner - In the implementation block
@property (readonly) CACSpeechRecognizer * speechRecognizer;              //@synthesize speechRecognizer=_speechRecognizer - In the implementation block
@property (readonly) NSArray * spokenCommands;                            //@synthesize spokenCommandsCache=_spokenCommandsCache - In the implementation block
+(void)resetCloseMatchAccumulator;
+(void)_accumulateCloseMatchUsingCommandIdentifier:(id)arg1 substitutionTable:(id)arg2 ;
+(void)_showHintWithAccumulateCloseMatches;
-(void)startListening;
-(void)stopListening;
-(id)owner;
-(BOOL)isListening;
-(void)setType:(NSString *)arg1 ;
-(void)setOwner:(id)arg1 ;
-(NSString *)type;
-(void)handleSpokenCommand:(id)arg1 ;
-(id)initWithCommands:(id)arg1 contextEvaluators:(id)arg2 builtInLMIdentifiers:(id)arg3 ;
-(CACSpeechRecognizer *)speechRecognizer;
-(void)synchronizeWithReason:(id)arg1 ;
-(NSArray *)spokenCommands;
-(void)speechRecognizer:(id)arg1 didRecognizeRXResult:(RXLanguageObjectRef)arg2 ;
-(void)_synchronizeSpeechRecognizerSettings;
-(void)_buildLanguageModelUsingCommands;
-(BOOL)isAppropriateForContext;
-(id)commandParametersFromCACLanguageModel:(id)arg1 ;
-(id)_commandParametersFromCACLanguageModel:(id)arg1 ;
-(id)commandTextSequenceFromCACLanguageModel:(id)arg1 ;
-(void)speechRecognizer:(id)arg1 didBeginUtteranceWithID:(unsigned long long)arg2 ;
-(id)commandStrings;
-(id)objectForContextEvaluatorKey:(id)arg1 ;
@end

