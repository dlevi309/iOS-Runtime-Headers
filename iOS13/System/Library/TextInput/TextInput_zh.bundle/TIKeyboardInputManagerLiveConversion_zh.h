/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInputChinese/TIKeyboardInputManagerChinesePhonetic.h>

@class TIKeyboardCandidate, NSArray, NSString, TIZhuyinInputManager, NSTimer;

@interface TIKeyboardInputManagerLiveConversion_zh : TIKeyboardInputManagerChinesePhonetic {

	BOOL _revertTonlessZhuyin;
	TIKeyboardCandidate* _topCandidate;
	TIKeyboardCandidate* _currentCandidate;
	NSArray* _segments;
	NSString* _remainingInput;
	TIZhuyinInputManager* _zhuyinInputManager;
	NSString* _cachedInputString;
	NSTimer* _timer;
	double _predictionThreshold;

}

@property (nonatomic,copy) TIKeyboardCandidate * topCandidate;                     //@synthesize topCandidate=_topCandidate - In the implementation block
@property (nonatomic,copy) TIKeyboardCandidate * currentCandidate;                 //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (nonatomic,copy) NSArray * segments;                                     //@synthesize segments=_segments - In the implementation block
@property (nonatomic,copy) NSString * remainingInput;                              //@synthesize remainingInput=_remainingInput - In the implementation block
@property (nonatomic,copy) TIZhuyinInputManager * zhuyinInputManager;              //@synthesize zhuyinInputManager=_zhuyinInputManager - In the implementation block
@property (nonatomic,copy) NSString * cachedInputString;                           //@synthesize cachedInputString=_cachedInputString - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                      //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) double predictionThreshold;                           //@synthesize predictionThreshold=_predictionThreshold - In the implementation block
@property (assign,nonatomic) BOOL revertTonlessZhuyin;                             //@synthesize revertTonlessZhuyin=_revertTonlessZhuyin - In the implementation block
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(unsigned)inputCount;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(id)markedText;
-(void)setCurrentCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)currentCandidate;
-(id)keyboardBehaviors;
-(BOOL)supportsNumberKeySelection;
-(void)clearInput;
-(BOOL)usesLiveConversion;
-(BOOL)delayedCandidateList;
-(id)inputString;
-(id)keyBehaviorsForState:(id)arg1 ;
-(id)keyEventMap;
-(unsigned)inputIndex;
-(BOOL)commitsAcceptedCandidate;
-(unsigned long long)initialSelectedIndex;
-(id)wordCharacters;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(BOOL)shouldClearInputOnMarkedTextOutOfSync;
-(id)validCharacterSetForAutocorrection;
-(void)saveGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)restoreGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)commitComposition;
-(void)openCandidateGenerationContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)closeCandidateGenerationContextWithResults:(id)arg1 ;
-(id)rawInputString;
-(id)didAcceptCandidate:(id)arg1 ;
-(NSString *)remainingInput;
-(TIInputManager*)initImplementation;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(int)inputMethodType;
-(BOOL)shouldSearchCompletionForSubstrings;
-(void)setRemainingInput:(NSString *)arg1 ;
-(id)internalInputString;
-(BOOL)_shouldCommitInputDirectly:(id)arg1 ;
-(void)addInputToInternal:(id)arg1 ;
-(BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1 ;
-(id)phoneticSortingMethod;
-(BOOL)updateCandidatesByWaitingForResults:(BOOL)arg1 ;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(BOOL)skipSetMarkedTextDuringInput;
-(TIKeyboardCandidate *)topCandidate;
-(void)setPredictionThreshold:(double)arg1 ;
-(void)setTopCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)startPrediction;
-(double)predictionThreshold;
-(void)_notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(void)setCachedInputString:(NSString *)arg1 ;
-(TIZhuyinInputManager *)zhuyinInputManager;
-(void)setRevertTonlessZhuyin:(BOOL)arg1 ;
-(void)presetSegmentPickerForLastSegment;
-(void)presentSegmentAdjuster;
-(void)_addInputToInternal:(id)arg1 ;
-(NSString *)cachedInputString;
-(BOOL)revertTonlessZhuyin;
-(void)setZhuyinInputManager:(TIZhuyinInputManager *)arg1 ;
@end

