/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <Search/Search-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SPSearchQueryContext;

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
	BOOL _internalDebug;
	BOOL _internalValidation;
	SPSearchQueryContext* _queryContext;
	long long _maxCount;
	NSArray* _disabledBundles;
	NSArray* _disabledApps;
	unsigned long long _queryIdent;
	long long _contentFilters;
	double _currentTime;

}

@property (nonatomic,readonly) SPSearchQueryContext * queryContext;              //@synthesize queryContext=_queryContext - In the implementation block
@property (nonatomic,readonly) BOOL cancelled; 
@property (assign,nonatomic) BOOL grouped;                                       //@synthesize grouped=_grouped - In the implementation block
@property (assign,nonatomic) long long maxCount;                                 //@synthesize maxCount=_maxCount - In the implementation block
@property (nonatomic,retain) NSArray * disabledBundles;                          //@synthesize disabledBundles=_disabledBundles - In the implementation block
@property (nonatomic,retain) NSArray * disabledApps;                             //@synthesize disabledApps=_disabledApps - In the implementation block
@property (assign,nonatomic) BOOL noTokenize;                                    //@synthesize noTokenize=_noTokenize - In the implementation block
@property (assign,nonatomic) BOOL infinitePatience;                              //@synthesize infinitePatience=_infinitePatience - In the implementation block
@property (assign,nonatomic) BOOL isWideScreen;                                  //@synthesize isWideScreen=_isWideScreen - In the implementation block
@property (assign,nonatomic) unsigned long long queryIdent;                      //@synthesize queryIdent=_queryIdent - In the implementation block
@property (assign,nonatomic) BOOL promoteLocalResults;                           //@synthesize promoteLocalResults=_promoteLocalResults - In the implementation block
@property (assign,nonatomic) BOOL promoteParsecResults;                          //@synthesize promoteParsecResults=_promoteParsecResults - In the implementation block
@property (assign,nonatomic) BOOL internalDebug;                                 //@synthesize internalDebug=_internalDebug - In the implementation block
@property (assign,nonatomic) BOOL internalValidation;                            //@synthesize internalValidation=_internalValidation - In the implementation block
@property (assign,nonatomic) long long contentFilters;                           //@synthesize contentFilters=_contentFilters - In the implementation block
@property (nonatomic,readonly) double creationTime;                              //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,readonly) double cancellationTime;                          //@synthesize cancellationTime=_cancellationTime - In the implementation block
@property (nonatomic,readonly) unsigned long long creationStamp;                 //@synthesize creationStamp=_creationStamp - In the implementation block
@property (nonatomic,readonly) double currentTime;                               //@synthesize currentTime=_currentTime - In the implementation block
-(void)execute:(/*^block*/id)arg1 ;
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
-(void)setQueryIdent:(unsigned long long)arg1 ;
-(BOOL)promoteLocalResults;
-(void)setPromoteLocalResults:(BOOL)arg1 ;
-(NSArray *)disabledBundles;
-(BOOL)cancelled;
-(BOOL)isWideScreen;
-(BOOL)grouped;
-(SPSearchQueryContext *)queryContext;
-(void)setInternalDebug:(BOOL)arg1 ;
-(BOOL)internalDebug;
-(BOOL)noTokenize;
-(void)setInfinitePatience:(BOOL)arg1 ;
-(NSArray *)disabledApps;
-(void)setInternalValidation:(BOOL)arg1 ;
-(BOOL)promoteParsecResults;
-(long long)contentFilters;
-(void)setPromoteParsecResults:(BOOL)arg1 ;
-(unsigned long long)queryIdent;
-(BOOL)hasMarkedText;
-(double)currentTime;
-(void)setNoTokenize:(BOOL)arg1 ;
-(BOOL)internalValidation;
-(void)setDisabledBundles:(NSArray *)arg1 ;
-(BOOL)infinitePatience;
-(double)creationTime;
-(id)initWithSearchQueryContext:(id)arg1 ;
-(id)initWithQuery:(id)arg1 domains:(id)arg2 ;
-(void)setIsWideScreen:(BOOL)arg1 ;
-(void)setContentFilters:(long long)arg1 ;
-(double)cancellationTime;
-(unsigned long long)creationStamp;
-(unsigned long long)hash;
-(void)cancel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisabledApps:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGrouped:(BOOL)arg1 ;
@end

