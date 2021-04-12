/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/

#import <Foundation/NSOperation.h>

@class TIInputManagerHandwriting, CHRecognizer, NSArray, NSString, NSDictionary;

@interface RecognizePredictionOperation : NSOperation {

	TIInputManagerHandwriting* _inputManager;
	CHRecognizer* _recognizer;
	NSArray* _committedCandidates;
	unsigned long long _predictionOptions;
	NSString* _prefixContext;
	NSArray* _candidates;
	NSArray* _proactiveTriggers;
	NSDictionary* _candidateRefsDictionary;

}

@property (nonatomic,readonly) TIInputManagerHandwriting * inputManager;              //@synthesize inputManager=_inputManager - In the implementation block
@property (nonatomic,readonly) CHRecognizer * recognizer;                             //@synthesize recognizer=_recognizer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * committedCandidates;                    //@synthesize committedCandidates=_committedCandidates - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionOptions;                  //@synthesize predictionOptions=_predictionOptions - In the implementation block
@property (nonatomic,readonly) NSString * prefixContext;                              //@synthesize prefixContext=_prefixContext - In the implementation block
@property (nonatomic,readonly) NSArray * candidates;                                  //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,readonly) NSArray * proactiveTriggers;                           //@synthesize proactiveTriggers=_proactiveTriggers - In the implementation block
@property (nonatomic,readonly) NSDictionary * candidateRefsDictionary;                //@synthesize candidateRefsDictionary=_candidateRefsDictionary - In the implementation block
-(void)main;
-(unsigned long long)predictionOptions;
-(NSArray *)candidates;
-(TIInputManagerHandwriting *)inputManager;
-(NSArray *)proactiveTriggers;
-(NSDictionary *)candidateRefsDictionary;
-(CHRecognizer *)recognizer;
-(id)initWithInputManager:(id)arg1 predictionOptions:(unsigned long long)arg2 prefixContext:(id)arg3 ;
-(NSArray *)committedCandidates;
-(NSString *)prefixContext;
@end

