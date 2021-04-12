/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/

#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class TIWordSearch, NSString, TICandidateSorter, TIKeyboardCandidate;

@interface TIKeyboardInputManager_ja_Candidates : TIKeyboardInputManager_zh_ja {

	BOOL _showsPartialCandidate;
	BOOL _autoSelectFirstCandidate;
	TIWordSearch* _wordSearch;
	NSString* _autoSelectCandidate;
	long long _autoSelectTransliterateCandidate;
	TICandidateSorter* _candidateSorter;
	NSString* _inputString;
	TIKeyboardCandidate* _defaultCandidate;
	NSString* _autoCommitString;

}

@property (nonatomic,copy) TICandidateSorter * candidateSorter;                       //@synthesize candidateSorter=_candidateSorter - In the implementation block
@property (nonatomic,copy) NSString * inputString;                                    //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,copy) TIKeyboardCandidate * defaultCandidate;                    //@synthesize defaultCandidate=_defaultCandidate - In the implementation block
@property (nonatomic,copy) NSString * autoCommitString;                               //@synthesize autoCommitString=_autoCommitString - In the implementation block
@property (assign,nonatomic) BOOL showsPartialCandidate;                              //@synthesize showsPartialCandidate=_showsPartialCandidate - In the implementation block
@property (assign,nonatomic) BOOL autoSelectFirstCandidate;                           //@synthesize autoSelectFirstCandidate=_autoSelectFirstCandidate - In the implementation block
@property (assign,nonatomic) NSString * autoSelectCandidate;                          //@synthesize autoSelectCandidate=_autoSelectCandidate - In the implementation block
@property (assign,nonatomic) long long autoSelectTransliterateCandidate;              //@synthesize autoSelectTransliterateCandidate=_autoSelectTransliterateCandidate - In the implementation block
+(id)sortTitleFromSort:(unsigned long long)arg1 ;
+(unsigned long long)sortFromSortTitle:(id)arg1 ;
-(BOOL)delayedCandidateList;
-(void)setInputString:(NSString *)arg1 ;
-(void)setDefaultCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)defaultCandidate;
-(NSString *)inputString;
-(BOOL)usesLiveConversion;
-(void)loadDictionaries;
-(id)keyboardConfiguration;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)supportsCandidateGeneration;
-(BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id)wordSearch;
-(id)candidateResultSetFromCandidates:(id)arg1 ;
-(id)candidateResultSetFromCandidates:(id)arg1 proactiveTriggers:(id)arg2 ;
-(void)loadFavoniusTypingModel;
-(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)sortingMethods;
-(id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2 ;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(void)setAutoSelectFirstCandidate:(BOOL)arg1 ;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 wordSearch:(id)arg3 ;
-(BOOL)autoSelectFirstCandidate;
-(void)_notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(void)setAutoSelectTransliterateCandidate:(long long)arg1 ;
-(void)setShowsPartialCandidate:(BOOL)arg1 ;
-(BOOL)makeCandidatesWithInputString:(id)arg1 autoCommitString:(id)arg2 contextString:(id)arg3 predictionEnabled:(BOOL)arg4 reanalysisMode:(BOOL)arg5 singlePhrase:(BOOL)arg6 geometoryModelData:(id)arg7 ;
-(void)setAutoCommitString:(NSString *)arg1 ;
-(NSString *)autoCommitString;
-(void)setAutoSelectCandidate:(NSString *)arg1 ;
-(long long)autoSelectTransliterateCandidate;
-(long long)indexFromTransliterationType:(long long)arg1 ;
-(id)transliterationCandidates;
-(NSString *)autoSelectCandidate;
-(BOOL)showsPartialCandidate;
-(TICandidateSorter *)candidateSorter;
-(void)setCandidateSorter:(TICandidateSorter *)arg1 ;
@end

