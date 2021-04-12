/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/

#import <TextInputCore/TIWordSearch.h>

@class TIWordSearchCandidateResultSet;

@interface TIWordSearchKana : TIWordSearch {

	unsigned long long _insertKatakanaAtIndex;
	/*^block*/id _contactObserver;
	BOOL _supportsPairedPunctutationInput;
	TIWordSearchCandidateResultSet* _candidateResultSet;

}

@property (nonatomic,retain) TIWordSearchCandidateResultSet * candidateResultSet;              //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (assign) BOOL supportsPairedPunctutationInput;                                       //@synthesize supportsPairedPunctutationInput=_supportsPairedPunctutationInput - In the implementation block
+(/*^block*/id)configureContactCollectionObserver:(id)arg1 previousObserver:(/*^block*/id)arg2 ;
+(id)sharedMecabraWrapper;
+(void)resetSharedMecabraWrapper;
+(void)clearCachedContactObserver;
-(void)dealloc;
-(TIWordSearchCandidateResultSet *)candidateResultSet;
-(void)setCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
-(void)updateMecabraState;
-(int)mecabraInputMethodType;
-(unsigned long long)mecabraCreationOptions;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(id)initTIWordSearchWithInputMode:(id)arg1 mecabraWrapper:(id)arg2 ;
-(id)candidatesCacheKeyForOperation:(id)arg1 ;
-(void)clearObservers;
-(void)dynamicDictionariesRemoved:(id)arg1 ;
-(BOOL)supportsPairedPunctutationInput;
-(BOOL)shouldMoveCursor:(id)arg1 ;
-(BOOL)isAnalyzingJapaneseRomaji;
-(void)setInsertKatakanaAtIndex:(unsigned long long)arg1 ;
-(id)candidateForDefault:(id)arg1 rawInputString:(id)arg2 ;
-(BOOL)_insertString:(id)arg1 input:(id)arg2 at:(unsigned long long)arg3 force:(BOOL)arg4 ;
-(id)makeCandidates:(id)arg1 contextString:(id)arg2 predictionEnabled:(BOOL)arg3 reanalysisMode:(BOOL)arg4 withInputManager:(id)arg5 geometryModelData:(id)arg6 flickUsed:(BOOL)arg7 hardwareKeyboardMode:(BOOL)arg8 referenceMode:(BOOL)arg9 singlePhrase:(BOOL)arg10 ;
-(void)setSupportsPairedPunctutationInput:(BOOL)arg1 ;
@end

