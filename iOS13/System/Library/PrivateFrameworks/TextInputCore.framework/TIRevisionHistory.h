/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIRevisionHistoryDelegate;
#import <TextInputCore/TextInputCore-Structs.h>
@class TILRUDictionary, NSString, NSMutableArray, TIRevisionHistoryToken;

@interface TIRevisionHistory : NSObject {

	BOOL _shouldReportRevisionToDP;
	BOOL _isDeletingBackwards;
	BOOL _isRapidDeleteActive;
	id<TIRevisionHistoryDelegate> _delegate;
	TILRUDictionary* _recentAutocorrections;
	NSString* _documentText;
	NSMutableArray* _tokenization;
	void* _tokenizer;
	TIRevisionHistoryToken* _lastRejectedToken;
	NSRange _selectedRange;
	TIRevisionHistoryTokenIterator _currentTokenIterator;

}

@property (nonatomic,copy) NSString * documentText;                                            //@synthesize documentText=_documentText - In the implementation block
@property (nonatomic,readonly) NSMutableArray * tokenization;                                  //@synthesize tokenization=_tokenization - In the implementation block
@property (assign,nonatomic) NSRange selectedRange;                                            //@synthesize selectedRange=_selectedRange - In the implementation block
@property (assign,nonatomic) TIRevisionHistoryTokenIterator currentTokenIterator;              //@synthesize currentTokenIterator=_currentTokenIterator - In the implementation block
@property (nonatomic,readonly) void* tokenizer;                                                //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,retain) TIRevisionHistoryToken * lastRejectedToken;                       //@synthesize lastRejectedToken=_lastRejectedToken - In the implementation block
@property (assign,nonatomic) BOOL shouldReportRevisionToDP;                                    //@synthesize shouldReportRevisionToDP=_shouldReportRevisionToDP - In the implementation block
@property (assign,nonatomic) BOOL isDeletingBackwards;                                         //@synthesize isDeletingBackwards=_isDeletingBackwards - In the implementation block
@property (assign,nonatomic) BOOL isRapidDeleteActive;                                         //@synthesize isRapidDeleteActive=_isRapidDeleteActive - In the implementation block
@property (assign,nonatomic) id<TIRevisionHistoryDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TILRUDictionary * recentAutocorrections;                          //@synthesize recentAutocorrections=_recentAutocorrections - In the implementation block
+(id)documentStateTrimmedToSentenceForState:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<TIRevisionHistoryDelegate>)delegate;
-(void)setDelegate:(id<TIRevisionHistoryDelegate>)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(NSRange)selectedRange;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(id)documentState;
-(void*)tokenizer;
-(void)setSelectedRange:(NSRange)arg1 ;
-(NSString *)documentText;
-(void)acceptToken:(id)arg1 withContext:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 saveToDifferentialPrivacy:(int)arg4 ;
-(void)rejectToken:(id)arg1 withContext:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 negativeLearningHint:(int)arg4 withRevisedToken:(id)arg5 ;
-(unsigned long long)fillTokenBuffer:(TITokenID*)arg1 withContextForTokenAtIndex:(unsigned long long)arg2 ;
-(void)acceptTokensInRange:(NSRange)arg1 ;
-(void)rejectTokensInRange:(NSRange)arg1 negativeLearningHint:(int)arg2 newRevision:(id)arg3 ;
-(void)migrateUserTypingFromDeletedTokens:(id)arg1 toInsertedTokens:(id)arg2 withUsageLearningMask:(unsigned)arg3 usageTrackingMask:(unsigned)arg4 ;
-(void)collectPFLTelemetryForTokenAtIndex:(unsigned long long)arg1 ;
-(id)tokenAtIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(NSRange)documentRangeOfTokenAtIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(TIRevisionHistoryTokenIterator)nextTokenIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(TIRevisionHistoryTokenIterator)previousTokenIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(NSRange)selectedTokenRangeWithIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(id)nonEmptyTokensInRange:(NSRange)arg1 ;
-(TIRevisionHistoryTokenIterator)popSelectedTextFromTokenizer;
-(unsigned long long)tokenizeDocumentTextInRange:(NSRange)arg1 withTokenHandler:(/*^block*/id)arg2 ;
-(void)adjustTokenOffsetAfterDeletedTokenRange:(NSRange)arg1 withDeletedCharacterCount:(unsigned long long)arg2 ;
-(BOOL)originalIterator:(TIRevisionHistoryTokenIterator)arg1 matchesRevisedDocumentRange:(NSRange)arg2 andTokenID:(TITokenID)arg3 ;
-(BOOL)shouldValidateOriginalIterator:(TIRevisionHistoryTokenIterator)arg1 withRevisedDocumentRange:(NSRange)arg2 forRevision:(id)arg3 ;
-(TIRevisionHistoryTokenIterator)resetTokenAtIterator:(TIRevisionHistoryTokenIterator)arg1 withRange:(NSRange)arg2 fromDocumentLocation:(unsigned long long)arg3 ;
-(BOOL)validateTokenizationForRevisedDocumentRange:(NSRange)arg1 andTokenID:(TITokenID)arg2 forRevision:(id)arg3 ;
-(void)addRevisedTokenString:(id)arg1 withTokenID:(TITokenID)arg2 inDocumentRange:(NSRange)arg3 toRevision:(id)arg4 ;
-(void)handleRevisedTokenString:(id)arg1 withTokenID:(TITokenID)arg2 forRevision:(id)arg3 ;
-(void)pushSelectedTextToTokenizerForRevision:(id)arg1 ;
-(void)mergeTokenizationsForRevision:(id)arg1 ;
-(void)replaceSelectionWithText:(id)arg1 negativeLearningHint:(int)arg2 selectedTokenReplacementHandler:(/*^block*/id)arg3 ;
-(void)annotateTokensCreatedFromDocumentState;
-(void)resetToDocumentState:(id)arg1 ;
-(TIRevisionHistoryTokenIterator)iteratorUpperBoundForSelectionStart;
-(void)enumerateSentenceStemUsingIteratorBlock:(/*^block*/id)arg1 ;
-(BOOL)isSelectionContainedByToken:(TIRevisionHistoryTokenIterator)arg1 ;
-(BOOL)isWordToken:(TIRevisionHistoryTokenIterator)arg1 ;
-(id)wordTokenContainingSelection;
-(NSRange)deletionRangeToObtainDocumentState:(id)arg1 ;
-(void)rejectCandidate:(id)arg1 forInput:(id)arg2 ;
-(NSRange)inputRangeForReplacement:(id)arg1 ;
-(void)acceptText:(id)arg1 isAutoshifted:(BOOL)arg2 ;
-(void)acceptCurrentSentence;
-(BOOL)matchesContextBeforeSelection:(id)arg1 ;
-(BOOL)matchesSelectedText:(id)arg1 ;
-(BOOL)matchesContextAfterSelection:(id)arg1 ;
-(BOOL)matchesDocumentState:(id)arg1 ;
-(void)syncToDocumentState:(id)arg1 ;
-(void)enumerateSentenceStemUsingBlock:(/*^block*/id)arg1 ;
-(id)currentWord;
-(id)currentUserTyping;
-(TILRUDictionary *)recentAutocorrections;
-(void)setRecentAutocorrections:(TILRUDictionary *)arg1 ;
-(void)setDocumentText:(NSString *)arg1 ;
-(NSMutableArray *)tokenization;
-(TIRevisionHistoryTokenIterator)currentTokenIterator;
-(void)setCurrentTokenIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(TIRevisionHistoryToken *)lastRejectedToken;
-(void)setLastRejectedToken:(TIRevisionHistoryToken *)arg1 ;
-(BOOL)shouldReportRevisionToDP;
-(void)setShouldReportRevisionToDP:(BOOL)arg1 ;
-(BOOL)isDeletingBackwards;
-(void)setIsDeletingBackwards:(BOOL)arg1 ;
-(BOOL)isRapidDeleteActive;
-(void)setIsRapidDeleteActive:(BOOL)arg1 ;
@end

