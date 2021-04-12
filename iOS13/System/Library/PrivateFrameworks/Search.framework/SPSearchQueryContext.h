/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/


@class NSString, SFSearchSuggestion, NSArray;

@interface SPSearchQueryContext : NSObject {

	BOOL _allowInternet;
	BOOL _isPasscodeLocked;
	BOOL _forceQueryEvenIfSame;
	BOOL _promoteLocalResults;
	BOOL _promoteParsecResults;
	BOOL _noTokenize;
	BOOL _internalDebug;
	BOOL _internalValidation;
	NSString* _searchString;
	SFSearchSuggestion* _engagedSuggestion;
	NSArray* _markedTextArray;
	NSString* _keyboardLanguage;
	NSString* _keyboardPrimaryLanguage;
	double _scaleFactor;
	NSArray* _searchDomains;
	NSArray* _disabledDomains;
	NSArray* _disabledBundles;
	NSArray* _disabledApps;
	unsigned long long _whyQuery;
	unsigned long long _whyClear;
	unsigned long long _queryIdent;
	NSArray* _searchEntities;
	double _currentTime;

}

@property (assign,nonatomic) BOOL allowInternet;                                  //@synthesize allowInternet=_allowInternet - In the implementation block
@property (assign,nonatomic) BOOL isPasscodeLocked;                               //@synthesize isPasscodeLocked=_isPasscodeLocked - In the implementation block
@property (nonatomic,retain) NSString * searchString;                             //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) SFSearchSuggestion * engagedSuggestion;              //@synthesize engagedSuggestion=_engagedSuggestion - In the implementation block
@property (nonatomic,retain) NSArray * markedTextArray;                           //@synthesize markedTextArray=_markedTextArray - In the implementation block
@property (nonatomic,readonly) BOOL hasMarkedText; 
@property (nonatomic,readonly) NSString * displayedText; 
@property (nonatomic,retain) NSString * keyboardLanguage;                         //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,retain) NSString * keyboardPrimaryLanguage;                  //@synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage - In the implementation block
@property (assign,nonatomic) double scaleFactor;                                  //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,retain) NSArray * searchDomains;                             //@synthesize searchDomains=_searchDomains - In the implementation block
@property (nonatomic,retain) NSArray * disabledDomains;                           //@synthesize disabledDomains=_disabledDomains - In the implementation block
@property (nonatomic,retain) NSArray * disabledBundles;                           //@synthesize disabledBundles=_disabledBundles - In the implementation block
@property (nonatomic,retain) NSArray * disabledApps;                              //@synthesize disabledApps=_disabledApps - In the implementation block
@property (assign,nonatomic) BOOL forceQueryEvenIfSame;                           //@synthesize forceQueryEvenIfSame=_forceQueryEvenIfSame - In the implementation block
@property (assign,nonatomic) unsigned long long whyQuery;                         //@synthesize whyQuery=_whyQuery - In the implementation block
@property (assign,nonatomic) unsigned long long whyClear;                         //@synthesize whyClear=_whyClear - In the implementation block
@property (assign,nonatomic) unsigned long long queryIdent;                       //@synthesize queryIdent=_queryIdent - In the implementation block
@property (nonatomic,retain) NSArray * searchEntities;                            //@synthesize searchEntities=_searchEntities - In the implementation block
@property (assign,nonatomic) BOOL promoteLocalResults;                            //@synthesize promoteLocalResults=_promoteLocalResults - In the implementation block
@property (assign,nonatomic) BOOL promoteParsecResults;                           //@synthesize promoteParsecResults=_promoteParsecResults - In the implementation block
@property (assign,nonatomic) BOOL noTokenize;                                     //@synthesize noTokenize=_noTokenize - In the implementation block
@property (assign,nonatomic) BOOL internalDebug;                                  //@synthesize internalDebug=_internalDebug - In the implementation block
@property (assign,nonatomic) BOOL internalValidation;                             //@synthesize internalValidation=_internalValidation - In the implementation block
@property (assign,nonatomic) double currentTime;                                  //@synthesize currentTime=_currentTime - In the implementation block
+(id)queryContextWithSearchString:(id)arg1 ;
-(id)init;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(id)initWithSearchString:(id)arg1 ;
-(BOOL)hasMarkedText;
-(double)currentTime;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)keyboardLanguage;
-(NSArray *)markedTextArray;
-(void)setMarkedTextArray:(NSArray *)arg1 ;
-(NSArray *)searchDomains;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(NSString *)displayedText;
-(void)setEngagedSuggestion:(SFSearchSuggestion *)arg1 ;
-(SFSearchSuggestion *)engagedSuggestion;
-(BOOL)allowInternet;
-(void)setAllowInternet:(BOOL)arg1 ;
-(BOOL)isPasscodeLocked;
-(void)setIsPasscodeLocked:(BOOL)arg1 ;
-(NSString *)keyboardPrimaryLanguage;
-(void)setKeyboardPrimaryLanguage:(NSString *)arg1 ;
-(NSArray *)disabledDomains;
-(void)setDisabledDomains:(NSArray *)arg1 ;
-(NSArray *)disabledBundles;
-(void)setDisabledBundles:(NSArray *)arg1 ;
-(NSArray *)disabledApps;
-(void)setDisabledApps:(NSArray *)arg1 ;
-(BOOL)forceQueryEvenIfSame;
-(void)setForceQueryEvenIfSame:(BOOL)arg1 ;
-(unsigned long long)whyQuery;
-(void)setWhyQuery:(unsigned long long)arg1 ;
-(unsigned long long)whyClear;
-(void)setWhyClear:(unsigned long long)arg1 ;
-(unsigned long long)queryIdent;
-(void)setQueryIdent:(unsigned long long)arg1 ;
-(NSArray *)searchEntities;
-(void)setSearchEntities:(NSArray *)arg1 ;
-(BOOL)promoteLocalResults;
-(void)setPromoteLocalResults:(BOOL)arg1 ;
-(BOOL)promoteParsecResults;
-(void)setPromoteParsecResults:(BOOL)arg1 ;
-(BOOL)noTokenize;
-(void)setNoTokenize:(BOOL)arg1 ;
-(BOOL)internalDebug;
-(void)setInternalDebug:(BOOL)arg1 ;
-(BOOL)internalValidation;
-(void)setInternalValidation:(BOOL)arg1 ;
@end

