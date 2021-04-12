/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSString, NSArray, SFSearchSuggestion;

@interface SPSearchQueryContext : NSObject {

	BOOL _forceQueryEvenIfSame;
	BOOL _allowInternet;
	BOOL _noTokenize;
	BOOL _internalDebug;
	BOOL _internalValidation;
	BOOL _isPasscodeLocked;
	BOOL _promoteLocalResults;
	BOOL _promoteParsecResults;
	NSString* _searchString;
	NSArray* _markedTextArray;
	NSString* _keyboardLanguage;
	NSString* _keyboardPrimaryLanguage;
	NSArray* _searchDomains;
	NSArray* _disabledDomains;
	NSArray* _disabledBundles;
	unsigned long long _whyQuery;
	unsigned long long _queryKind;
	unsigned long long _whyClear;
	unsigned long long _queryIdent;
	double _currentTime;
	double _scaleFactor;
	SFSearchSuggestion* _engagedSuggestion;
	NSArray* _disabledApps;
	NSArray* _searchEntities;

}

@property (nonatomic,retain) NSString * searchString;                                           //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSArray * markedTextArray;                                         //@synthesize markedTextArray=_markedTextArray - In the implementation block
@property (getter=getTrimmedSearchString,readonly) NSString * trimmedSearchString; 
@property (nonatomic,readonly) BOOL hasMarkedText; 
@property (nonatomic,retain) NSString * keyboardLanguage;                                       //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,retain) NSString * keyboardPrimaryLanguage;                                //@synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage - In the implementation block
@property (nonatomic,retain) NSArray * searchDomains;                                           //@synthesize searchDomains=_searchDomains - In the implementation block
@property (nonatomic,retain) NSArray * disabledDomains;                                         //@synthesize disabledDomains=_disabledDomains - In the implementation block
@property (nonatomic,retain) NSArray * disabledBundles;                                         //@synthesize disabledBundles=_disabledBundles - In the implementation block
@property (assign,nonatomic) BOOL forceQueryEvenIfSame;                                         //@synthesize forceQueryEvenIfSame=_forceQueryEvenIfSame - In the implementation block
@property (assign,nonatomic) unsigned long long whyQuery;                                       //@synthesize whyQuery=_whyQuery - In the implementation block
@property (assign,nonatomic) unsigned long long queryKind;                                      //@synthesize queryKind=_queryKind - In the implementation block
@property (assign,nonatomic) unsigned long long whyClear;                                       //@synthesize whyClear=_whyClear - In the implementation block
@property (assign,nonatomic) unsigned long long queryIdent;                                     //@synthesize queryIdent=_queryIdent - In the implementation block
@property (assign,nonatomic) double currentTime;                                                //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double scaleFactor;                                                //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) BOOL allowInternet;                                                //@synthesize allowInternet=_allowInternet - In the implementation block
@property (assign,nonatomic) BOOL noTokenize;                                                   //@synthesize noTokenize=_noTokenize - In the implementation block
@property (assign,nonatomic) BOOL internalDebug;                                                //@synthesize internalDebug=_internalDebug - In the implementation block
@property (assign,nonatomic) BOOL internalValidation;                                           //@synthesize internalValidation=_internalValidation - In the implementation block
@property (nonatomic,retain) SFSearchSuggestion * engagedSuggestion;                            //@synthesize engagedSuggestion=_engagedSuggestion - In the implementation block
@property (assign,nonatomic) BOOL isPasscodeLocked;                                             //@synthesize isPasscodeLocked=_isPasscodeLocked - In the implementation block
@property (nonatomic,readonly) NSString * displayedText; 
@property (nonatomic,retain) NSArray * disabledApps;                                            //@synthesize disabledApps=_disabledApps - In the implementation block
@property (nonatomic,retain) NSArray * searchEntities;                                          //@synthesize searchEntities=_searchEntities - In the implementation block
@property (assign,nonatomic) BOOL promoteLocalResults;                                          //@synthesize promoteLocalResults=_promoteLocalResults - In the implementation block
@property (assign,nonatomic) BOOL promoteParsecResults;                                         //@synthesize promoteParsecResults=_promoteParsecResults - In the implementation block
+(id)queryContextWithSearchString:(id)arg1 ;
-(void)setScaleFactor:(double)arg1 ;
-(void)setQueryIdent:(unsigned long long)arg1 ;
-(BOOL)isPasscodeLocked;
-(BOOL)promoteLocalResults;
-(void)setPromoteLocalResults:(BOOL)arg1 ;
-(NSArray *)disabledBundles;
-(double)scaleFactor;
-(NSString *)keyboardLanguage;
-(id)init;
-(void)setDisabledDomains:(NSArray *)arg1 ;
-(void)setForceQueryEvenIfSame:(BOOL)arg1 ;
-(void)setWhyQuery:(unsigned long long)arg1 ;
-(void)setWhyClear:(unsigned long long)arg1 ;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(void)setInternalDebug:(BOOL)arg1 ;
-(BOOL)internalDebug;
-(BOOL)noTokenize;
-(void)setCurrentTime:(double)arg1 ;
-(NSArray *)disabledApps;
-(NSArray *)searchEntities;
-(void)setInternalValidation:(BOOL)arg1 ;
-(BOOL)forceQueryEvenIfSame;
-(BOOL)promoteParsecResults;
-(void)setMarkedTextArray:(NSArray *)arg1 ;
-(void)setPromoteParsecResults:(BOOL)arg1 ;
-(unsigned long long)queryIdent;
-(id)initWithSearchString:(id)arg1 ;
-(BOOL)hasMarkedText;
-(double)currentTime;
-(unsigned long long)whyClear;
-(SFSearchSuggestion *)engagedSuggestion;
-(id)getTrimmedSearchString;
-(void)setQueryKind:(unsigned long long)arg1 ;
-(void)setNoTokenize:(BOOL)arg1 ;
-(BOOL)internalValidation;
-(void)setDisabledBundles:(NSArray *)arg1 ;
-(unsigned long long)whyQuery;
-(BOOL)allowInternet;
-(NSArray *)disabledDomains;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(void)setAllowInternet:(BOOL)arg1 ;
-(NSString *)displayedText;
-(void)setKeyboardPrimaryLanguage:(NSString *)arg1 ;
-(void)setSearchEntities:(NSArray *)arg1 ;
-(NSArray *)markedTextArray;
-(NSArray *)searchDomains;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setIsPasscodeLocked:(BOOL)arg1 ;
-(void)setEngagedSuggestion:(SFSearchSuggestion *)arg1 ;
-(NSString *)keyboardPrimaryLanguage;
-(unsigned long long)queryKind;
-(void)setDisabledApps:(NSArray *)arg1 ;
-(NSString *)searchString;
@end

