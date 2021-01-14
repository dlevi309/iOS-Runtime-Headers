/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class NSMutableArray, NSString, NSDictionary, NSArray;

@interface AFUserUtterance : NSObject {

	NSMutableArray* _phrases;
	NSMutableArray* _tokens;
	NSString* _text;
	long long _sentenceConfidence;
	NSMutableArray* _utterances;
	NSDictionary* _correctionIdentifier;

}

@property (nonatomic,readonly) NSDictionary * correctionIdentifier;              //@synthesize correctionIdentifier=_correctionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * dictationResult; 
@property (nonatomic,readonly) NSArray * allPhrases; 
-(id)description;
-(NSDictionary *)correctionIdentifier;
-(id)streamingTokens;
-(NSArray *)allPhrases;
-(id)speechTokensForUtteranceAtIndex:(unsigned long long)arg1 ;
-(id)longestCommonSubsequenceBetweenList:(id)arg1 andList:(id)arg2 ;
-(id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseTokenList:(id)arg2 ;
-(id)rangeListOfDifferingTextFromTargetTokenList:(id)arg1 comparedToBaseTokenList:(id)arg2 ;
-(id)textOfUtteranceAtIndex:(unsigned long long)arg1 ;
-(void)_updatePhraseswithSwapIndices:(id)arg1 ;
-(void)_updateUtteranceswithAlternativeUtteranceAtIndex:(unsigned long long)arg1 swapIndices:(id)arg2 ;
-(id)bestTextInterpretation;
-(id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2 ;
-(id)initWithPhrases:(id)arg1 utterances:(id)arg2 ;
-(id)initWithPhrases:(id)arg1 sentenceConfidence:(long long)arg2 utterances:(id)arg3 correctionIdentifier:(id)arg4 ;
-(id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2 ;
-(NSArray *)dictationResult;
-(id)initWithString:(id)arg1 correctionIdentifier:(id)arg2 ;
-(long long)numberOfAlternativeUtterances;
-(id)rangeListOfDifferingTextFromUtteranceAtIndex:(unsigned long long)arg1 comparedToBaseUtteranceAtIndex:(unsigned long long)arg2 ;
-(id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseUtteranceAtIndex:(unsigned long long)arg2 ;
-(id)interpretationOfUtteranceAtIndex:(unsigned long long)arg1 ;
-(id)allRecognitionStringsAndScores;
-(id)updateDictationResult:(id)arg1 withAlternativeUtteranceAtIndex:(unsigned long long)arg2 ;
@end

