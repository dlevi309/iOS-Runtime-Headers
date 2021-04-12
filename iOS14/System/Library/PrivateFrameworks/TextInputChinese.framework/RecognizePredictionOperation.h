/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TIInputManagerHandwriting *)inputManager;
-(NSArray *)candidates;
-(unsigned long long)predictionOptions;
-(NSArray *)proactiveTriggers;
-(CHRecognizer *)recognizer;
-(NSDictionary *)candidateRefsDictionary;
-(id)initWithInputManager:(id)arg1 predictionOptions:(unsigned long long)arg2 prefixContext:(id)arg3 ;
-(NSArray *)committedCandidates;
-(NSString *)prefixContext;
@end

