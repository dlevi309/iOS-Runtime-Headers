/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/

#import <TextInputChinese/TextInputChinese-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>
#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>

@class TIHandwritingStrokes, NSArray, CIMCandidateData, RecognizerProvider, NSMutableDictionary, NSMutableArray, NSLocale, CHRecognizer, NSString;

@interface TIInputManagerHandwriting : TIKeyboardInputManager <TIKeyboardActivityObserving> {

	BOOL _showingCompletionCandidates;
	BOOL _isInCompletionMode;
	/*^block*/id _contactObserver;
	id _userDictionaryObserver;
	id _dictionaryUpdateObserver;
	BOOL _shouldLearnAcceptedCandidate;
	BOOL _showingFacemarks;
	TIHandwritingStrokes* _userDrawing;
	NSArray* _facemarkCandidates;
	CIMCandidateData* _candidateData;
	NSArray* _candidates;
	RecognizerProvider* _recognizerProvider;
	NSMutableDictionary* _candidateRefsDictionary;
	NSMutableArray* _committedCandidates;
	NSArray* _proactiveTriggers;

}

@property (assign,nonatomic) BOOL isInCompletionMode;                                    //@synthesize isInCompletionMode=_isInCompletionMode - In the implementation block
@property (assign,nonatomic) BOOL shouldLearnAcceptedCandidate;                          //@synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate - In the implementation block
@property (nonatomic,retain) TIHandwritingStrokes * userDrawing;                         //@synthesize userDrawing=_userDrawing - In the implementation block
@property (assign,nonatomic) BOOL showingFacemarks;                                      //@synthesize showingFacemarks=_showingFacemarks - In the implementation block
@property (nonatomic,readonly) NSArray * facemarkCandidates;                             //@synthesize facemarkCandidates=_facemarkCandidates - In the implementation block
@property (nonatomic,readonly) CIMCandidateData * candidateData;                         //@synthesize candidateData=_candidateData - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                                       //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateRefsDictionary;              //@synthesize candidateRefsDictionary=_candidateRefsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * committedCandidates;                       //@synthesize committedCandidates=_committedCandidates - In the implementation block
@property (nonatomic,readonly) NSLocale * recognitionLanguage; 
@property (readonly) CHRecognizer * recognizer; 
@property (nonatomic,readonly) RecognizerProvider * recognizerProvider;                  //@synthesize recognizerProvider=_recognizerProvider - In the implementation block
@property (nonatomic,retain) NSArray * proactiveTriggers;                                //@synthesize proactiveTriggers=_proactiveTriggers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)suspend;
-(NSArray *)candidates;
-(id)candidateResultSet;
-(void)clearInput;
-(id)addInputObject:(id)arg1 ;
-(BOOL)usesCandidateSelection;
-(void)setCandidates:(NSArray *)arg1 ;
-(id)searchStringForMarkedText;
-(BOOL)usesAutoDeleteWord;
-(BOOL)suppressPlaceholderCandidate;
-(unsigned long long)autoquoteType;
-(BOOL)suppliesCompletions;
-(id)defaultCandidate;
-(unsigned long long)initialSelectedIndex;
-(NSArray *)proactiveTriggers;
-(void)cancelRecognition;
-(NSLocale *)recognitionLanguage;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(void)loadDictionaries;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(int)mecabraLanguage;
-(void)clearObservers;
-(void)updateUserWordEntries;
-(void)updateDictionaryPaths;
-(BOOL)shouldLearnAcceptedCandidate;
-(void)setShouldLearnAcceptedCandidate:(BOOL)arg1 ;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(id)keyboardConfigurationLayoutTag;
-(BOOL)shouldCommitInputString;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(TIInputManager*)initImplementation;
-(void)setLearnsCorrection:(BOOL)arg1 ;
-(NSMutableDictionary *)candidateRefsDictionary;
-(CHRecognizer *)recognizer;
-(BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
-(BOOL)updateCompletionCandidatesIfAppropriate;
-(CIMCandidateData *)candidateData;
-(BOOL)isInCompletionMode;
-(void)setIsInCompletionMode:(BOOL)arg1 ;
-(BOOL)shouldLookForCompletionCandidates;
-(void)mainThreadUpdateCandidates:(id)arg1 ;
-(NSMutableArray *)committedCandidates;
-(RecognizerProvider *)recognizerProvider;
-(void)updateAddressBook;
-(BOOL)shouldUpdateDictionaryPaths;
-(id)keyboardCandidateResultSetFromResults;
-(BOOL)isDummyCandidate:(id)arg1 ;
-(id)markedTextForDefaultCandidate;
-(NSArray *)facemarkCandidates;
-(id)historyForRecognition;
-(BOOL)updateCandidates;
-(void)clearCandidateRefsDictionary;
-(unsigned long long)predictionOptions:(BOOL)arg1 ;
-(void)resetCompletionStates;
-(id)processCandidates:(id)arg1 ;
-(TIHandwritingStrokes *)userDrawing;
-(void)setUserDrawing:(TIHandwritingStrokes *)arg1 ;
-(BOOL)showingFacemarks;
-(void)setShowingFacemarks:(BOOL)arg1 ;
-(void)setCandidateRefsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setCommittedCandidates:(NSMutableArray *)arg1 ;
-(void)setProactiveTriggers:(NSArray *)arg1 ;
@end

