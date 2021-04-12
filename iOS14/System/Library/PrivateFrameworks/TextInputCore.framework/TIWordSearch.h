/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>

@class TIInputMode, TIMecabraEnvironment, TIMecabraWrapper, TIWordSearchOperationGetCandidates, NSCache, NSString;

@interface TIWordSearch : NSObject <TIKeyboardActivityObserving> {

	id _userDictionaryObserver;
	id _dictionaryUpdateObserver;
	BOOL _autoCorrects;
	BOOL _shouldLearnAcceptedCandidate;
	TIInputMode* _inputMode;
	TIMecabraEnvironment* _mecabraEnvironment;
	TIMecabraWrapper* _mecabraWrapper;
	TIWordSearchOperationGetCandidates* _operation;
	NSCache* _candidatesCache;

}

@property (retain) TIWordSearchOperationGetCandidates * operation;                   //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) int mecabraLanguage; 
@property (retain) TIMecabraWrapper * mecabraWrapper;                                //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (nonatomic,retain) NSCache * candidatesCache;                              //@synthesize candidatesCache=_candidatesCache - In the implementation block
@property (assign) BOOL autoCorrects;                                                //@synthesize autoCorrects=_autoCorrects - In the implementation block
@property (assign) BOOL shouldLearnAcceptedCandidate;                                //@synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate - In the implementation block
@property (readonly) TIInputMode * inputMode;                                        //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,retain) TIMecabraEnvironment * mecabraEnvironment;              //@synthesize mecabraEnvironment=_mecabraEnvironment - In the implementation block
@property (readonly) MecabraRef mecabra; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedOperationQueue;
+(id)recipientRecords;
+(id)configureUserDictionaryObserver:(id)arg1 previousObserver:(id)arg2 ;
+(id)mecabraLearningDictionaryDirectory;
-(TIInputMode *)inputMode;
-(void)contactStoreDidChange:(id)arg1 ;
-(void)setOperation:(TIWordSearchOperationGetCandidates *)arg1 ;
-(TIWordSearchOperationGetCandidates *)operation;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(void)lastAcceptedCandidateCorrected;
-(void)clearCache;
-(MecabraRef)mecabra;
-(void)releaseBackgroundActivityAssertion;
-(void)cancel;
-(BOOL)isCancelled;
-(void)dealloc;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(void)revertInlineCandidate;
-(void)adjustEnvironmentOnAction:(long long)arg1 ;
-(void)declareEndOfSentence;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(TIMecabraEnvironment *)mecabraEnvironment;
-(void)setMecabraEnvironment:(TIMecabraEnvironment *)arg1 ;
-(void)endInputSession;
-(void)setDebuggingLogEnabled:(BOOL)arg1 ;
-(void)updateMecabraState;
-(void)clearLearningDictionary;
-(int)mecabraInputMethodType;
-(int)mecabraLanguage;
-(unsigned long long)mecabraCreationOptions;
-(id)mecabraCreationOptionsDictionary;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(id)initTIWordSearchWithInputMode:(id)arg1 mecabraWrapper:(id)arg2 ;
-(NSCache *)candidatesCache;
-(id)candidatesCacheKeyForOperation:(id)arg1 ;
-(id)candidatesForOperation:(id)arg1 ;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
-(id)cachedCandidatesForOperation:(id)arg1 ;
-(void)_addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2 ;
-(BOOL)addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2 ;
-(void)performAccept:(void*)arg1 isPartial:(BOOL)arg2 ;
-(void)resetPreviousWord;
-(void)performOperationAsync:(id)arg1 ;
-(void)performOperationAsync:(id)arg1 withBackgroundActivityAssertion:(BOOL)arg2 ;
-(void)completeOperationsInQueue;
-(void)saveLearningDictionary;
-(void)clearObservers;
-(void)dynamicDictionariesRemoved:(id)arg1 ;
-(void)setLanguageModelAdaptationContextWithClientIdentifier:(id)arg1 recipientIdentifier:(id)arg2 ;
-(void)setLanguageModelAdaptationContext:(id)arg1 ;
-(void)updateUserWordEntries;
-(void)updateDictionaryPaths;
-(void)adaptOfflineToParagraph:(id)arg1 adaptationContext:(id)arg2 timeStamp:(double)arg3 ;
-(void)flushDynamicData;
-(void)setLeftDocumentContext:(id)arg1 rightDocumentContext:(id)arg2 ;
-(void)clearLeftDocumentContext;
-(void)commitSurface:(id)arg1 ;
-(void)commitPunctuationSurface:(id)arg1 ;
-(void)resetMecabraEnvironment;
-(void)setMecabraTextContentType:(int)arg1 ;
-(BOOL)autoCorrects;
-(void)setAutoCorrects:(BOOL)arg1 ;
-(BOOL)shouldLearnAcceptedCandidate;
-(void)setShouldLearnAcceptedCandidate:(BOOL)arg1 ;
-(void)setCandidatesCache:(NSCache *)arg1 ;
@end

