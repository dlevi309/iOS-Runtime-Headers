/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <Search/Search-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SFSearchSuggestion;

@interface SPSearchQuery : NSObject <NSCopying> {

	unsigned long long _queryID;
	NSString* _searchString;
	NSString* _keyboardLanguage;
	NSString* _keyboardPrimaryLanguage;
	double _scaleFactor;
	NSArray* markedTextArray;
	BOOL _finished;
	BOOL _promoteLocalResults;
	BOOL _promoteParsecResults;
	double _creationTime;
	double _cancellationTime;
	unsigned long long _creationStamp;
	AB _cancelled;
	BOOL _grouped;
	BOOL _noTokenize;
	BOOL _infinitePatience;
	BOOL _isWideScreen;
	BOOL _isPasscodeLocked;
	BOOL _internalDebug;
	BOOL _internalValidation;
	NSArray* _searchDomains;
	NSArray* _markedTextArray;
	SFSearchSuggestion* _engagedSuggestion;
	NSArray* _disabledDomains;
	NSArray* _searchEntities;
	long long _maxCount;
	NSArray* _disabledBundles;
	NSArray* _disabledApps;
	unsigned long long _whyQuery;
	unsigned long long _queryIdent;
	long long _contentFilters;
	double _currentTime;

}

@property (nonatomic,readonly) NSString * searchString;                             //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) SFSearchSuggestion * engagedSuggestion;              //@synthesize engagedSuggestion=_engagedSuggestion - In the implementation block
@property (nonatomic,readonly) NSString * keyboardLanguage;                         //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,readonly) NSString * keyboardPrimaryLanguage;                  //@synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage - In the implementation block
@property (nonatomic,readonly) double scaleFactor;                                  //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) NSArray * searchDomains;                             //@synthesize searchDomains=_searchDomains - In the implementation block
@property (nonatomic,readonly) NSArray * disabledDomains;                           //@synthesize disabledDomains=_disabledDomains - In the implementation block
@property (nonatomic,readonly) NSArray * searchEntities;                            //@synthesize searchEntities=_searchEntities - In the implementation block
@property (assign,nonatomic) BOOL grouped;                                          //@synthesize grouped=_grouped - In the implementation block
@property (assign,nonatomic) long long maxCount;                                    //@synthesize maxCount=_maxCount - In the implementation block
@property (nonatomic,retain) NSArray * disabledBundles;                             //@synthesize disabledBundles=_disabledBundles - In the implementation block
@property (nonatomic,retain) NSArray * disabledApps;                                //@synthesize disabledApps=_disabledApps - In the implementation block
@property (nonatomic,readonly) NSArray * markedTextArray;                           //@synthesize markedTextArray=_markedTextArray - In the implementation block
@property (nonatomic,readonly) BOOL hasMarkedText; 
@property (assign,nonatomic) BOOL noTokenize;                                       //@synthesize noTokenize=_noTokenize - In the implementation block
@property (assign,nonatomic) BOOL infinitePatience;                                 //@synthesize infinitePatience=_infinitePatience - In the implementation block
@property (assign,nonatomic) unsigned long long whyQuery;                           //@synthesize whyQuery=_whyQuery - In the implementation block
@property (assign,nonatomic) BOOL isWideScreen;                                     //@synthesize isWideScreen=_isWideScreen - In the implementation block
@property (nonatomic,readonly) BOOL isPasscodeLocked;                               //@synthesize isPasscodeLocked=_isPasscodeLocked - In the implementation block
@property (assign,nonatomic) unsigned long long queryIdent;                         //@synthesize queryIdent=_queryIdent - In the implementation block
@property (assign,nonatomic) BOOL promoteLocalResults;                              //@synthesize promoteLocalResults=_promoteLocalResults - In the implementation block
@property (assign,nonatomic) BOOL promoteParsecResults;                             //@synthesize promoteParsecResults=_promoteParsecResults - In the implementation block
@property (assign,nonatomic) BOOL internalDebug;                                    //@synthesize internalDebug=_internalDebug - In the implementation block
@property (assign,nonatomic) BOOL internalValidation;                               //@synthesize internalValidation=_internalValidation - In the implementation block
@property (assign,nonatomic) long long contentFilters;                              //@synthesize contentFilters=_contentFilters - In the implementation block
@property (nonatomic,readonly) double creationTime;                                 //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,readonly) double cancellationTime;                             //@synthesize cancellationTime=_cancellationTime - In the implementation block
@property (nonatomic,readonly) unsigned long long creationStamp;                    //@synthesize creationStamp=_creationStamp - In the implementation block
@property (nonatomic,readonly) double currentTime;                                  //@synthesize currentTime=_currentTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cancel;
-(BOOL)cancelled;
-(double)scaleFactor;
-(void)execute:(/*^block*/id)arg1 ;
-(double)creationTime;
-(BOOL)hasMarkedText;
-(double)currentTime;
-(NSString *)searchString;
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
-(NSString *)keyboardLanguage;
-(void)setGrouped:(BOOL)arg1 ;
-(NSArray *)markedTextArray;
-(BOOL)grouped;
-(NSArray *)searchDomains;
-(SFSearchSuggestion *)engagedSuggestion;
-(BOOL)isPasscodeLocked;
-(NSString *)keyboardPrimaryLanguage;
-(NSArray *)disabledDomains;
-(NSArray *)disabledBundles;
-(void)setDisabledBundles:(NSArray *)arg1 ;
-(NSArray *)disabledApps;
-(void)setDisabledApps:(NSArray *)arg1 ;
-(unsigned long long)whyQuery;
-(void)setWhyQuery:(unsigned long long)arg1 ;
-(unsigned long long)queryIdent;
-(void)setQueryIdent:(unsigned long long)arg1 ;
-(NSArray *)searchEntities;
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
-(id)initWithSearchQueryContext:(id)arg1 ;
-(id)initWithQuery:(id)arg1 domains:(id)arg2 ;
-(double)cancellationTime;
-(BOOL)infinitePatience;
-(void)setInfinitePatience:(BOOL)arg1 ;
-(BOOL)isWideScreen;
-(void)setIsWideScreen:(BOOL)arg1 ;
-(long long)contentFilters;
-(void)setContentFilters:(long long)arg1 ;
-(unsigned long long)creationStamp;
@end

