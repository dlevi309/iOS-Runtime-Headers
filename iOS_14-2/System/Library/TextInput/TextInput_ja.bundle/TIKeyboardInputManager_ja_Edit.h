/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/

#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@protocol TIMarkedTextBuffer;
@class TIWordSearch, TIKeyboardCandidate, NSMutableArray, NSString, NSArray;

@interface TIKeyboardInputManager_ja_Edit : TIKeyboardInputManager_zh_ja {

	TIWordSearch* _wordSearch;
	TIKeyboardCandidate* _inlineCandidate;
	NSMutableArray* _mutableSegments;
	id<TIMarkedTextBuffer> _kanaString;
	long long _escapeKeyPressed;

}

@property (nonatomic,retain) NSMutableArray * mutableSegments;                     //@synthesize mutableSegments=_mutableSegments - In the implementation block
@property (nonatomic,retain) id<TIMarkedTextBuffer> kanaString;                    //@synthesize kanaString=_kanaString - In the implementation block
@property (nonatomic,readonly) NSString * prefixString; 
@property (assign,nonatomic) long long escapeKeyPressed;                           //@synthesize escapeKeyPressed=_escapeKeyPressed - In the implementation block
@property (nonatomic,readonly) NSArray * segments; 
@property (nonatomic,readonly) TIKeyboardCandidate * inlineCandidate;              //@synthesize inlineCandidate=_inlineCandidate - In the implementation block
@property (nonatomic,readonly) NSString * rawInputString; 
-(BOOL)delayedCandidateList;
-(id)keyEventMap;
-(BOOL)usesCandidateSelection;
-(id)wordCharacters;
-(BOOL)supportsSetPhraseBoundary;
-(unsigned)inputIndex;
-(void)clearInput;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(NSMutableArray *)mutableSegments;
-(NSArray *)segments;
-(void)setMutableSegments:(NSMutableArray *)arg1 ;
-(long long)escapeKeyPressed;
-(id)inputString;
-(unsigned)inputCount;
-(BOOL)usesLiveConversion;
-(void)loadDictionaries;
-(void)dealloc;
-(NSString *)prefixString;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id)wordSearch;
-(NSString *)rawInputString;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)loadFavoniusTypingModel;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 segments:(id)arg3 wordSearch:(id)arg4 romajiMode:(BOOL)arg5 conversionEnabled:(BOOL)arg6 ;
-(TIKeyboardCandidate *)inlineCandidate;
-(id)transliterate:(id)arg1 ;
-(void)setEscapeKeyPressed:(long long)arg1 ;
-(void)setKanaString:(id<TIMarkedTextBuffer>)arg1 ;
-(BOOL)handleBackspace:(id)arg1 ;
-(BOOL)handleSpaceKey:(id)arg1 ;
-(BOOL)handleEsc:(id)arg1 ;
-(BOOL)handleCancelEditMode:(id)arg1 ;
-(id<TIMarkedTextBuffer>)kanaString;
-(unsigned)rawInputIndex;
-(void)revertLastSegment;
-(void)setRawInputString:(NSString *)arg1 ;
@end

