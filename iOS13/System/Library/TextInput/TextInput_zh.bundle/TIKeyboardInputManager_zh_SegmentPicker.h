/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
*/

#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class NSMutableArray, TIWordSearch, NSString, NSArray;

@interface TIKeyboardInputManager_zh_SegmentPicker : TIKeyboardInputManager_zh_ja {

	NSMutableArray* _segments;
	unsigned _inputIndex;
	unsigned long long _index;
	TIWordSearch* _kbws;
	NSString* _rawInputString;
	NSString* _inputString;
	NSString* _autoCommitString;
	NSString* _remainingInput;
	NSArray* _originalSegments;

}

@property (nonatomic,copy) TIWordSearch * kbws;                       //@synthesize kbws=_kbws - In the implementation block
@property (nonatomic,copy) NSString * rawInputString;                 //@synthesize rawInputString=_rawInputString - In the implementation block
@property (nonatomic,copy) NSString * inputString;                    //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,copy) NSString * autoCommitString;               //@synthesize autoCommitString=_autoCommitString - In the implementation block
@property (assign,nonatomic) unsigned inputIndex;                     //@synthesize inputIndex=_inputIndex - In the implementation block
@property (nonatomic,copy) NSString * remainingInput;                 //@synthesize remainingInput=_remainingInput - In the implementation block
@property (nonatomic,copy) NSArray * originalSegments;                //@synthesize originalSegments=_originalSegments - In the implementation block
@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSArray * segments; 
-(unsigned long long)index;
-(NSArray *)segments;
-(id)markedText;
-(id)candidateResultSet;
-(id)keyboardBehaviors;
-(BOOL)usesCandidateSelection;
-(BOOL)usesLiveConversion;
-(BOOL)delayedCandidateList;
-(id)searchStringForMarkedText;
-(NSString *)inputString;
-(BOOL)supportsSetPhraseBoundary;
-(unsigned long long)phraseBoundary;
-(unsigned)inputIndex;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)setInputString:(NSString *)arg1 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)loadDictionaries;
-(void)openCandidateGenerationContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)closeCandidateGenerationContextWithResults:(id)arg1 ;
-(NSString *)rawInputString;
-(id)didAcceptCandidate:(id)arg1 ;
-(NSString *)remainingInput;
-(void)loadFavoniusTypingModel;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(void)setRemainingInput:(NSString *)arg1 ;
-(void)updateMarkedText;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 segments:(id)arg3 at:(unsigned long long)arg4 wordSearch:(id)arg5 ;
-(void)setRawInputString:(NSString *)arg1 ;
-(void)setAutoCommitString:(NSString *)arg1 ;
-(NSString *)autoCommitString;
-(id)convertString;
-(NSArray *)originalSegments;
-(TIWordSearch *)kbws;
-(void)setKbws:(TIWordSearch *)arg1 ;
-(void)setOriginalSegments:(NSArray *)arg1 ;
@end

