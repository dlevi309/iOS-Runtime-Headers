/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
*/

#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class TIWordSearch, NSArray, TIZhuyinInputManager, TIMecabraIMLogger, TIKeyboardCandidate, NSString;

@interface TIKeyboardInputManager_zh_SegmentAdjust : TIKeyboardInputManager_zh_ja {

	TIWordSearch* _wordSearch;
	long long _segmentIndex;
	NSArray* _segments;
	TIZhuyinInputManager* _inputManager;
	TIMecabraIMLogger* _logger;
	/*^block*/id _candidateGenerationCompletionHandler;
	TIKeyboardCandidate* _currentCandidate;
	NSArray* _segmentsAfterBreak;
	NSString* _remainingInput;

}

@property (nonatomic,copy) TIZhuyinInputManager * inputManager;                  //@synthesize inputManager=_inputManager - In the implementation block
@property (nonatomic,copy,readonly) TIMecabraIMLogger * logger;                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) id candidateGenerationCompletionHandler;              //@synthesize candidateGenerationCompletionHandler=_candidateGenerationCompletionHandler - In the implementation block
@property (nonatomic,copy) TIKeyboardCandidate * currentCandidate;               //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (nonatomic,copy) NSArray * segmentsAfterBreak;                         //@synthesize segmentsAfterBreak=_segmentsAfterBreak - In the implementation block
@property (nonatomic,copy) NSString * remainingInput;                            //@synthesize remainingInput=_remainingInput - In the implementation block
@property (assign) long long segmentIndex;                                       //@synthesize segmentIndex=_segmentIndex - In the implementation block
@property (nonatomic,copy) NSArray * segments;                                   //@synthesize segments=_segments - In the implementation block
-(TIMecabraIMLogger *)logger;
-(unsigned)inputCount;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(id)candidateResultSet;
-(void)setCurrentCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)currentCandidate;
-(id)keyboardBehaviors;
-(void)clearInput;
-(BOOL)usesCandidateSelection;
-(BOOL)usesLiveConversion;
-(BOOL)delayedCandidateList;
-(id)inputString;
-(BOOL)supportsSetPhraseBoundary;
-(TIZhuyinInputManager *)inputManager;
-(unsigned)inputIndex;
-(id)wordCharacters;
-(void)setInputManager:(TIZhuyinInputManager *)arg1 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id)wordSearch;
-(void)composeTextWith:(id)arg1 ;
-(void)loadDictionaries;
-(void)openCandidateGenerationContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)closeCandidateGenerationContextWithResults:(id)arg1 ;
-(id)didAcceptCandidate:(id)arg1 ;
-(NSString *)remainingInput;
-(void)loadFavoniusTypingModel;
-(id)candidateGenerationCompletionHandler;
-(void)setCandidateGenerationCompletionHandler:(id)arg1 ;
-(void)setSegmentIndex:(long long)arg1 ;
-(void)setRemainingInput:(NSString *)arg1 ;
-(void)_notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(long long)segmentIndex;
-(void)updateCandidate;
-(id)convertString;
-(void)setSegmentsAfterBreak:(NSArray *)arg1 ;
-(NSArray *)segmentsAfterBreak;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 segments:(id)arg3 inputManager:(id)arg4 wordSearch:(id)arg5 ;
@end

