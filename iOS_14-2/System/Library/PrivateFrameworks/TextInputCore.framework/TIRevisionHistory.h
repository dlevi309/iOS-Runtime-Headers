/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)documentState;
-(id)initWithLocale:(id)arg1 ;
-(void)setRecentAutocorrections:(TILRUDictionary *)arg1 ;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(void)acceptCurrentSentence;
-(id)tokenAtIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(TIRevisionHistoryTokenIterator)currentTokenIterator;
-(void)setShouldReportRevisionToDP:(BOOL)arg1 ;
-(NSRange)selectedTokenRangeWithIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(void)resetToDocumentState:(id)arg1 ;
-(id)nonEmptyTokensInRange:(NSRange)arg1 ;
-(unsigned long long)tokenizeDocumentTextInRange:(NSRange)arg1 withTokenHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)mergeTokenizationsForRevision:(id)arg1 ;
-(void)rejectTokensInRange:(NSRange)arg1 negativeLearningHint:(int)arg2 newRevision:(id)arg3 ;
-(void)collectPFLTelemetryForTokenAtIndex:(unsigned long long)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)addRevisedTokenString:(id)arg1 withTokenID:(TITokenID)arg2 inDocumentRange:(NSRange)arg3 toRevision:(id)arg4 ;
-(id<TIRevisionHistoryDelegate>)delegate;
-(BOOL)matchesContextBeforeSelection:(id)arg1 ;
-(TIRevisionHistoryToken *)lastRejectedToken;
-(BOOL)originalIterator:(TIRevisionHistoryTokenIterator)arg1 matchesRevisedDocumentRange:(NSRange)arg2 andTokenID:(TITokenID)arg3 ;
-(id)currentWord;
-(void)acceptText:(id)arg1 isAutoshifted:(BOOL)arg2 ;
-(void)adjustTokenOffsetAfterDeletedTokenRange:(NSRange)arg1 withDeletedCharacterCount:(unsigned long long)arg2 ;
-(BOOL)shouldValidateOriginalIterator:(TIRevisionHistoryTokenIterator)arg1 withRevisedDocumentRange:(NSRange)arg2 forRevision:(id)arg3 ;
-(BOOL)isWordToken:(TIRevisionHistoryTokenIterator)arg1 ;
-(void)replaceSelectionWithText:(id)arg1 negativeLearningHint:(int)arg2 selectedTokenReplacementHandler:(/*^block*/id)arg3 ;
-(void)setIsDeletingBackwards:(BOOL)arg1 ;
-(BOOL)matchesContextAfterSelection:(id)arg1 ;
-(BOOL)matchesDocumentState:(id)arg1 ;
-(NSRange)selectedRange;
-(NSRange)documentRangeOfTokenAtIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(TIRevisionHistoryTokenIterator)popSelectedTextFromTokenizer;
-(void*)tokenizer;
-(BOOL)matchesSelectedText:(id)arg1 ;
-(void)acceptToken:(id)arg1 withContext:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 saveToDifferentialPrivacy:(int)arg4 contextStringTokens:(id)arg5 ;
-(void)setDelegate:(id<TIRevisionHistoryDelegate>)arg1 ;
-(void)handleRevisedTokenString:(id)arg1 withTokenID:(TITokenID)arg2 forRevision:(id)arg3 ;
-(void)setCurrentTokenIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(NSRange)deletionRangeToObtainDocumentState:(id)arg1 ;
-(TIRevisionHistoryTokenIterator)iteratorUpperBoundForSelectionStart;
-(TIRevisionHistoryTokenIterator)nextTokenIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(BOOL)isSelectionContainedByToken:(TIRevisionHistoryTokenIterator)arg1 ;
-(void)annotateTokensCreatedFromDocumentState;
-(id)currentUserTyping;
-(void)setLastRejectedToken:(TIRevisionHistoryToken *)arg1 ;
-(void)syncToDocumentState:(id)arg1 ;
-(BOOL)isDeletingBackwards;
-(NSString *)documentText;
-(BOOL)validateTokenizationForRevisedDocumentRange:(NSRange)arg1 andTokenID:(TITokenID)arg2 forRevision:(id)arg3 ;
-(unsigned long long)fillTokenIDBuffer:(TITokenID*)arg1 withContextForTokenAtIndex:(unsigned long long)arg2 contextStringsBuffer:(id)arg3 ;
-(TIRevisionHistoryTokenIterator)previousTokenIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(void)setDocumentText:(NSString *)arg1 ;
-(NSMutableArray *)tokenization;
-(void)enumerateSentenceStemUsingIteratorBlock:(/*^block*/id)arg1 ;
-(void)acceptTokensInRange:(NSRange)arg1 ;
-(BOOL)shouldReportRevisionToDP;
-(void)pushSelectedTextToTokenizerForRevision:(id)arg1 ;
-(void)enumerateSentenceStemUsingBlock:(/*^block*/id)arg1 ;
-(void)rejectToken:(id)arg1 withContext:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 contextStringTokens:(id)arg4 negativeLearningHint:(int)arg5 withRevisedToken:(id)arg6 ;
-(void)setIsRapidDeleteActive:(BOOL)arg1 ;
-(NSRange)inputRangeForReplacement:(id)arg1 ;
-(void)migrateUserTypingFromDeletedTokens:(id)arg1 toInsertedTokens:(id)arg2 withUsageLearningMask:(unsigned)arg3 usageTrackingMask:(unsigned)arg4 ;
-(BOOL)isRapidDeleteActive;
-(id)wordTokenContainingSelection;
-(void)rejectCandidate:(id)arg1 forInput:(id)arg2 ;
-(void)dealloc;
-(TILRUDictionary *)recentAutocorrections;
-(TIRevisionHistoryTokenIterator)resetTokenAtIterator:(TIRevisionHistoryTokenIterator)arg1 withRange:(NSRange)arg2 fromDocumentLocation:(unsigned long long)arg3 ;
@end

