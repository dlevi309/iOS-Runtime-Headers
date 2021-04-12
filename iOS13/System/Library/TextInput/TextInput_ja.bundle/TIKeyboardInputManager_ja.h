/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class TIWordSearch, TICandidateSorter, NSOperationQueue, NSMutableArray, TISmartPunctuationController, NSString;

@interface TIKeyboardInputManager_ja : TIKeyboardInputManager_zh_ja {

	TIWordSearch* _kbws;
	unsigned long long _remainingInputLength;
	BOOL _shouldLearnAcceptedCandidate;
	BOOL _isPhraseBoundarySet;
	BOOL _isCandidateSelectionSuppressed;
	BOOL _isKanaPlane;
	BOOL _flickUsed;
	BOOL _isEmojiFacemarkMode;
	BOOL _filterCandidatesUsingInputIndex;
	BOOL _selectFirstCandidate;
	BOOL _liveConversionForceEnabled;
	TICandidateSorter* _candidateSorter;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _recentlyCommittedCandidatesForReanalysis;
	TISmartPunctuationController* _smartPunctuationController;
	NSString* _alternateDisplayString;
	NSString* _alternateRemainingDisplayString;

}

@property (readonly) TICandidateSorter * candidateSorter;                                              //@synthesize candidateSorter=_candidateSorter - In the implementation block
@property (readonly) NSOperationQueue * operationQueue;                                                //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * recentlyCommittedCandidatesForReanalysis;              //@synthesize recentlyCommittedCandidatesForReanalysis=_recentlyCommittedCandidatesForReanalysis - In the implementation block
@property (nonatomic,readonly) TISmartPunctuationController * smartPunctuationController;              //@synthesize smartPunctuationController=_smartPunctuationController - In the implementation block
@property (assign,nonatomic) BOOL isKanaPlane;                                                         //@synthesize isKanaPlane=_isKanaPlane - In the implementation block
@property (assign,nonatomic) BOOL flickUsed;                                                           //@synthesize flickUsed=_flickUsed - In the implementation block
@property (assign,nonatomic) BOOL isEmojiFacemarkMode;                                                 //@synthesize isEmojiFacemarkMode=_isEmojiFacemarkMode - In the implementation block
@property (assign,nonatomic) BOOL filterCandidatesUsingInputIndex;                                     //@synthesize filterCandidatesUsingInputIndex=_filterCandidatesUsingInputIndex - In the implementation block
@property (nonatomic,copy) NSString * alternateDisplayString;                                          //@synthesize alternateDisplayString=_alternateDisplayString - In the implementation block
@property (nonatomic,copy) NSString * alternateRemainingDisplayString;                                 //@synthesize alternateRemainingDisplayString=_alternateRemainingDisplayString - In the implementation block
@property (assign,nonatomic) BOOL selectFirstCandidate;                                                //@synthesize selectFirstCandidate=_selectFirstCandidate - In the implementation block
@property (assign,nonatomic) BOOL liveConversionForceEnabled;                                          //@synthesize liveConversionForceEnabled=_liveConversionForceEnabled - In the implementation block
+(Class)wordSearchClass;
+(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
+(void)addFullwidthAnnotationToResultSet:(id)arg1 ;
+(id)sortTitleFromSort:(unsigned long long)arg1 ;
+(unsigned long long)sortFromSortTitle:(id)arg1 ;
-(void)dealloc;
-(NSOperationQueue *)operationQueue;
-(void)suspend;
-(unsigned)inputCount;
-(void)setInput:(id)arg1 ;
-(id)candidateResultSet;
-(BOOL)liveConversionEnabled;
-(id)keyboardBehaviors;
-(BOOL)isKanaPlane;
-(void)clearInput;
-(BOOL)usesCandidateSelection;
-(TISmartPunctuationController *)smartPunctuationController;
-(void)setIsKanaPlane:(BOOL)arg1 ;
-(BOOL)usesLiveConversion;
-(id)searchStringForMarkedText;
-(id)inputString;
-(BOOL)usesAutoDeleteWord;
-(BOOL)supportsSetPhraseBoundary;
-(id)keyEventMap;
-(BOOL)shouldExtendPriorWord;
-(unsigned long long)autoquoteType;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppliesCompletions;
-(BOOL)newInputAcceptsUserSelectedCandidate;
-(unsigned long long)phraseBoundary;
-(unsigned)inputIndex;
-(void)lastAcceptedCandidateCorrected;
-(id)defaultCandidate;
-(unsigned long long)initialSelectedIndex;
-(BOOL)shouldOutputFullwidthSpace;
-(BOOL)ignoresDeadKeys;
-(id)_inputString;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)wordCharacters;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(id)geometryModelData;
-(BOOL)supportsPerRecipientLearning;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(id)candidateResultSetFromWordSearchCandidateResultSet:(id)arg1 ;
-(BOOL)supportsCandidateGeneration;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id)wordSearch;
-(void)commitComposition;
-(BOOL)supportsLearning;
-(id)dictionaryInputMode;
-(void)setAutoCorrects:(BOOL)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)rawInputString;
-(id)candidateResultSetFromCandidates:(id)arg1 proactiveTriggers:(id)arg2 ;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(id)remainingInput;
-(TIInputManager*)initImplementation;
-(void)loadFavoniusTypingModel;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)sortingMethods;
-(id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2 ;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(void)setLearnsCorrection:(BOOL)arg1 ;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearDynamicDictionary;
-(void)preferencesDidChange:(id)arg1 ;
-(void)loadAddressBook;
-(BOOL)filterCandidatesUsingInputIndex;
-(void)setFilterCandidatesUsingInputIndex:(BOOL)arg1 ;
-(BOOL)flickUsed;
-(void)setFlickUsed:(BOOL)arg1 ;
-(id)stringByConvertingPunctuationForInput:(id)arg1 isLockedInput:(BOOL)arg2 ;
-(void)_deleteFromInput;
-(void)setIsEmojiFacemarkMode:(BOOL)arg1 ;
-(id)liveConversionTextInputManager;
-(void)_cancelCandidatesThread;
-(void)_notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(void)setSelectFirstCandidate:(BOOL)arg1 ;
-(void)_addInput:(id)arg1 ;
-(NSString *)alternateDisplayString;
-(NSString *)alternateRemainingDisplayString;
-(id)_convertString;
-(unsigned long long)remainingInputLengthOfString:(id)arg1 index:(unsigned long long)arg2 candidate:(id)arg3 ;
-(id)_convertStringWithBoundary:(unsigned long long)arg1 ;
-(unsigned long long)remainingInputLengthOfCandidate:(id)arg1 ;
-(id)displayString:(id)arg1 ;
-(TICandidateSorter *)candidateSorter;
-(void)setAlternateDisplayString:(NSString *)arg1 ;
-(void)setAlternateRemainingDisplayString:(NSString *)arg1 ;
-(BOOL)isLiveConversion;
-(BOOL)shouldOutputFullwidthSpaceForKanaABC123;
-(BOOL)isEmojiFacemarkMode;
-(unsigned long long)actualInputIndex;
-(NSMutableArray *)recentlyCommittedCandidatesForReanalysis;
-(BOOL)makeCandidatesWithWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 reanalysisMode:(BOOL)arg3 ;
-(BOOL)selectFirstCandidate;
-(BOOL)hasGroupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(void)addRecentlyCommittedCandidatesForReanalysis:(void*)arg1 ;
-(BOOL)liveConversionForceEnabled;
-(void)setLiveConversionForceEnabled:(BOOL)arg1 ;
@end

