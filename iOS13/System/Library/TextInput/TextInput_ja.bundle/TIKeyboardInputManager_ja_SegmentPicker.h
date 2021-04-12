/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/

#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class TIWordSearch, NSString, TILiveConversionSegments, TIKeyboardCandidate, NSArray;

@interface TIKeyboardInputManager_ja_SegmentPicker : TIKeyboardInputManager_zh_ja {

	BOOL _supportsSetPhraseBoundary;
	TIWordSearch* _wordSearch;
	NSString* _remainingInput;
	/*^block*/id _syncKeyboardStateHandler;
	TILiveConversionSegments* _liveConversionSegments;
	TIKeyboardCandidate* _currentCandidate;
	long long _transliterationType;
	long long _segmentIndexForCandidates;

}

@property (nonatomic,copy) NSString * remainingInput;                                        //@synthesize remainingInput=_remainingInput - In the implementation block
@property (nonatomic,copy) id syncKeyboardStateHandler;                                      //@synthesize syncKeyboardStateHandler=_syncKeyboardStateHandler - In the implementation block
@property (nonatomic,retain) TILiveConversionSegments * liveConversionSegments;              //@synthesize liveConversionSegments=_liveConversionSegments - In the implementation block
@property (nonatomic,copy) TIKeyboardCandidate * currentCandidate;                           //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (assign,nonatomic) BOOL supportsSetPhraseBoundary;                                 //@synthesize supportsSetPhraseBoundary=_supportsSetPhraseBoundary - In the implementation block
@property (assign,nonatomic) long long transliterationType;                                  //@synthesize transliterationType=_transliterationType - In the implementation block
@property (assign,nonatomic) long long segmentIndexForCandidates;                            //@synthesize segmentIndexForCandidates=_segmentIndexForCandidates - In the implementation block
@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) NSArray * segments; 
-(unsigned long long)index;
-(unsigned)inputCount;
-(NSArray *)segments;
-(id)markedText;
-(id)candidateResultSet;
-(void)setCurrentCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)currentCandidate;
-(id)keyboardBehaviors;
-(BOOL)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)usesCandidateSelection;
-(BOOL)usesLiveConversion;
-(BOOL)delayedCandidateList;
-(id)searchStringForMarkedText;
-(TILiveConversionSegments *)liveConversionSegments;
-(id)inputString;
-(BOOL)supportsSetPhraseBoundary;
-(id)keyEventMap;
-(unsigned long long)phraseBoundary;
-(unsigned)inputIndex;
-(long long)transliterationType;
-(void)setTransliterationType:(long long)arg1 ;
-(void)setSupportsSetPhraseBoundary:(BOOL)arg1 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id)wordSearch;
-(void)loadDictionaries;
-(void)openCandidateGenerationContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)closeCandidateGenerationContextWithResults:(id)arg1 ;
-(id)rawInputString;
-(id)didAcceptCandidate:(id)arg1 ;
-(NSString *)remainingInput;
-(void)loadFavoniusTypingModel;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(void)setRemainingInput:(NSString *)arg1 ;
-(void)_selectPartialCandidate:(id)arg1 forOperation:(id)arg2 ;
-(id)syncKeyboardStateHandler;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 segments:(id)arg3 at:(unsigned long long)arg4 wordSearch:(id)arg5 ;
-(void)setSyncKeyboardStateHandler:(id)arg1 ;
-(void)setLiveConversionSegments:(TILiveConversionSegments *)arg1 ;
-(void)setSegmentIndexForCandidates:(long long)arg1 ;
-(void)selectCandidate:(id)arg1 ;
-(long long)segmentIndexForCandidates;
@end

