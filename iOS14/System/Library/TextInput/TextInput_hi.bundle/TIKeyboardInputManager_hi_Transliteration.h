/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_hi.bundle/TextInput_hi
*/

#import <TextInput_hi/TextInput_hi-Structs.h>
#import <TextInput_hi/TIKeyboardInputManager_hi.h>

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface TIKeyboardInputManager_hi_Transliteration : TIKeyboardInputManager_hi {

	BOOL _prioritizeLatinCandidates;
	BOOL _hasCandidates;
	void* _transliterator;
	NSArray* _currentCandidates;
	NSMutableDictionary* _candidateRefsDictionary;
	NSMutableArray* _committedCandidates;

}

@property (assign,nonatomic) void* transliterator;                                       //@synthesize transliterator=_transliterator - In the implementation block
@property (assign,nonatomic) BOOL prioritizeLatinCandidates;                             //@synthesize prioritizeLatinCandidates=_prioritizeLatinCandidates - In the implementation block
@property (assign,nonatomic) BOOL hasCandidates;                                         //@synthesize hasCandidates=_hasCandidates - In the implementation block
@property (nonatomic,retain) NSArray * currentCandidates;                                //@synthesize currentCandidates=_currentCandidates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateRefsDictionary;              //@synthesize candidateRefsDictionary=_candidateRefsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * committedCandidates;                       //@synthesize committedCandidates=_committedCandidates - In the implementation block
-(id)keyEventMap;
-(BOOL)usesCandidateSelection;
-(void)suspend;
-(BOOL)supportsNumberKeySelection;
-(id)wordCharacters;
-(BOOL)hasCandidates;
-(id)defaultCandidate;
-(void)setHasCandidates:(BOOL)arg1 ;
-(id)keyboardBehaviors;
-(id)candidates;
-(void)dealloc;
-(id)keyboardConfiguration;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(id)dictionaryInputMode;
-(TIInputManager*)initImplementation;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)sortingMethods;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(NSMutableDictionary *)candidateRefsDictionary;
-(NSMutableArray *)committedCandidates;
-(void)setCandidateRefsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setCommittedCandidates:(NSMutableArray *)arg1 ;
-(NSArray *)currentCandidates;
-(void)setPrioritizeLatinCandidates:(BOOL)arg1 ;
-(id)autocorrectionCandidates;
-(id)_generateTIKeyboardCandidatesFromInputStrings:(id)arg1 ignoreExtensionCandidates:(BOOL)arg2 ;
-(void)setCurrentCandidates:(NSArray *)arg1 ;
-(void*)transliterator;
-(id)candidateContextByVerifyingAgainstDocumentState;
-(BOOL)prioritizeLatinCandidates;
-(void)setTransliterator:(void*)arg1 ;
@end

