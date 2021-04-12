/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol ICSearchIndexable;
#import <NotesUI/NotesUI-Structs.h>
@class NSString, NSValue, NSTextCheckingResult, NSAttributedString, ICSearchRankingComparison, NSRegularExpression, NSArray;

@interface ICSearchResult : NSObject {

	unsigned long long _cachedHash;
	BOOL _isSubstringMatch;
	BOOL _displayingParticipantMatch;
	id<ICSearchIndexable> _object;
	double _rankingScore;
	unsigned long long _relevanceBitField;
	unsigned long long _matchedField;
	NSString* _searchString;
	NSString* _highlightString;
	NSValue* _firstSeenRangeInNote;
	NSString* _foundMatchedString;
	NSString* _displayingTitle;
	NSTextCheckingResult* _displayingTitleCheckingResult;
	NSAttributedString* _titleAttributedString;
	NSString* _displayingSnippet;
	NSTextCheckingResult* _displayingSnippetCheckingResult;
	NSAttributedString* _snippetAttributedString;
	ICSearchRankingComparison* _rankComparison;
	id<ICSearchIndexable> _currentContextObject;
	NSRegularExpression* _highlightPatternRegex;
	CGRect _titleAttributedStringInsideFrame;
	CGRect _snippetAttributedStringInsideFrame;

}

@property (nonatomic,retain) id<ICSearchIndexable> currentContextObject;                            //@synthesize currentContextObject=_currentContextObject - In the implementation block
@property (nonatomic,retain) NSAttributedString * titleAttributedString;                            //@synthesize titleAttributedString=_titleAttributedString - In the implementation block
@property (assign,nonatomic) CGRect titleAttributedStringInsideFrame;                               //@synthesize titleAttributedStringInsideFrame=_titleAttributedStringInsideFrame - In the implementation block
@property (nonatomic,retain) NSAttributedString * snippetAttributedString;                          //@synthesize snippetAttributedString=_snippetAttributedString - In the implementation block
@property (assign,nonatomic) CGRect snippetAttributedStringInsideFrame;                             //@synthesize snippetAttributedStringInsideFrame=_snippetAttributedStringInsideFrame - In the implementation block
@property (assign,nonatomic) BOOL displayingParticipantMatch;                                       //@synthesize displayingParticipantMatch=_displayingParticipantMatch - In the implementation block
@property (nonatomic,retain) NSValue * firstSeenRangeInNote;                                        //@synthesize firstSeenRangeInNote=_firstSeenRangeInNote - In the implementation block
@property (nonatomic,retain) NSString * foundMatchedString;                                         //@synthesize foundMatchedString=_foundMatchedString - In the implementation block
@property (nonatomic,retain) NSRegularExpression * highlightPatternRegex;                           //@synthesize highlightPatternRegex=_highlightPatternRegex - In the implementation block
@property (nonatomic,readonly) id<ICSearchIndexable> object;                                        //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) double rankingScore;                                                 //@synthesize rankingScore=_rankingScore - In the implementation block
@property (nonatomic,readonly) unsigned long long relevanceBitField;                                //@synthesize relevanceBitField=_relevanceBitField - In the implementation block
@property (nonatomic,readonly) unsigned long long matchedField;                                     //@synthesize matchedField=_matchedField - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchString;                                        //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) NSString * highlightString;                                          //@synthesize highlightString=_highlightString - In the implementation block
@property (nonatomic,readonly) NSArray * csEvaluatorMatches; 
@property (nonatomic,readonly) BOOL isSubstringMatch;                                               //@synthesize isSubstringMatch=_isSubstringMatch - In the implementation block
@property (nonatomic,readonly) NSString * displayingTitle;                                          //@synthesize displayingTitle=_displayingTitle - In the implementation block
@property (nonatomic,readonly) NSTextCheckingResult * displayingTitleCheckingResult;                //@synthesize displayingTitleCheckingResult=_displayingTitleCheckingResult - In the implementation block
@property (nonatomic,readonly) NSString * displayingSnippet;                                        //@synthesize displayingSnippet=_displayingSnippet - In the implementation block
@property (nonatomic,readonly) NSTextCheckingResult * displayingSnippetCheckingResult;              //@synthesize displayingSnippetCheckingResult=_displayingSnippetCheckingResult - In the implementation block
@property (nonatomic,retain) ICSearchRankingComparison * rankComparison;                            //@synthesize rankComparison=_rankComparison - In the implementation block
+(id)authorNameToHighlightForNote:(id)arg1 fromSearchResult:(id)arg2 textCheckingResult:(id*)arg3 ;
+(id)regularExpressionMatchOfString:(id)arg1 inContent:(id)arg2 matchWordBoundaries:(BOOL)arg3 ;
+(id)regularExpressionForSearchString:(id)arg1 matchWordBoundaries:(BOOL)arg2 ;
+(id)tokensInString:(id)arg1 ;
+(id)matchOfString:(id)arg1 inContent:(id)arg2 isSubstringMatch:(BOOL)arg3 ;
+(CGRect)boundingRectForAttributedString:(id)arg1 fittingSize:(CGSize)arg2 ;
+(id)attributesByHighlightingAttributes:(id)arg1 withHighlightColor:(id)arg2 ;
+(BOOL)canFitAttributedString:(id)arg1 ellipses:(id)arg2 shouldPrefixWithEllipses:(BOOL)arg3 insideFrame:(CGRect)arg4 centered:(BOOL)arg5 ;
+(id)attributedStringWithMatchHighlighted:(id)arg1 textCheckingResult:(id)arg2 usingAttributes:(id)arg3 highlightColor:(id)arg4 insideFrame:(CGRect)arg5 centered:(BOOL)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<ICSearchIndexable>)object;
-(NSString *)searchString;
-(double)rankingScore;
-(NSAttributedString *)titleAttributedString;
-(unsigned long long)relevanceBitField;
-(NSString *)highlightString;
-(void)setRankComparison:(ICSearchRankingComparison *)arg1 ;
-(ICSearchRankingComparison *)rankComparison;
-(NSRegularExpression *)highlightPatternRegex;
-(void)setHighlightPatternRegex:(NSRegularExpression *)arg1 ;
-(unsigned long long)matchedField;
-(BOOL)isSubstringMatch;
-(id)initWithObject:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 matchedField:(unsigned long long)arg4 searchString:(id)arg5 highlightString:(id)arg6 isSubstringMatch:(BOOL)arg7 ;
-(void)prepareDisplayingTitleWithAccessingObject:(id)arg1 ;
-(void)prepareDisplayingSnippetWithAccessingObject:(id)arg1 ;
-(NSString *)displayingTitle;
-(id)matchInTextContent:(id)arg1 ;
-(NSTextCheckingResult *)displayingTitleCheckingResult;
-(void)setFoundMatchedString:(NSString *)arg1 ;
-(NSString *)foundMatchedString;
-(NSTextCheckingResult *)displayingSnippetCheckingResult;
-(id)firstRangeValueInNoteForMatchString:(id)arg1 textCheckingResult:(id)arg2 ;
-(void)setFirstSeenRangeInNote:(NSValue *)arg1 ;
-(void)setTitleAttributedStringInsideFrame:(CGRect)arg1 ;
-(void)setDisplayingParticipantMatch:(BOOL)arg1 ;
-(NSString *)displayingSnippet;
-(BOOL)displayingParticipantMatch;
-(NSValue *)firstSeenRangeInNote;
-(void)setSnippetAttributedStringInsideFrame:(CGRect)arg1 ;
-(NSArray *)csEvaluatorMatches;
-(id<ICSearchIndexable>)currentContextObject;
-(CGRect)titleAttributedStringInsideFrame;
-(void)setTitleAttributedString:(NSAttributedString *)arg1 ;
-(void)setSnippetAttributedString:(NSAttributedString *)arg1 ;
-(CGRect)snippetAttributedStringInsideFrame;
-(NSAttributedString *)snippetAttributedString;
-(id)initWithMainContextObject:(id)arg1 currentContextObject:(id)arg2 rankingScore:(double)arg3 relevanceBitField:(unsigned long long)arg4 matchedField:(unsigned long long)arg5 searchString:(id)arg6 highlightString:(id)arg7 isSubstringMatch:(BOOL)arg8 ;
-(void)refreshDisplayTitle;
-(void)refreshDisplaySnippet;
-(long long)compareByModificationDate:(id)arg1 ;
-(void)refetchObjectFromContext:(id)arg1 ;
-(id)attributedTitleWithBaseAttributes:(id)arg1 highlightColor:(id)arg2 insideFrame:(CGRect)arg3 ;
-(id)snippetWithBaseAttributes:(id)arg1 highlightColor:(id)arg2 insideFrame:(CGRect)arg3 ;
-(void)setCurrentContextObject:(id<ICSearchIndexable>)arg1 ;
@end

