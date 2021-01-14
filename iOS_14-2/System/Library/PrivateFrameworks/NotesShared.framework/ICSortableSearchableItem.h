/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSDictionary, CSSearchableItem, NSArray, NSDate, NSString, ICRankingQueriesDefinition;

@interface ICSortableSearchableItem : NSObject {

	BOOL _isPrefixMatch;
	BOOL _needsLazyInitialization;
	NSDictionary* _highlightInfo;
	CSSearchableItem* _searchableItem;
	double _rankingScore;
	NSArray* _attachmentUniqueIdentifiers;
	unsigned long long _relevanceBitField;
	unsigned long long _modificationDateBucket;
	NSDate* _modificationDate;
	NSDate* _creationDate;
	unsigned long long _searchResultType;
	NSString* _searchString;
	ICRankingQueriesDefinition* _rankingQueriesDefinition;
	NSString* _language;

}

@property (nonatomic,retain) NSString * searchString;                                            //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) ICRankingQueriesDefinition * rankingQueriesDefinition;              //@synthesize rankingQueriesDefinition=_rankingQueriesDefinition - In the implementation block
@property (nonatomic,retain) NSString * language;                                                //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL needsLazyInitialization;                                       //@synthesize needsLazyInitialization=_needsLazyInitialization - In the implementation block
@property (nonatomic,readonly) CSSearchableItem * searchableItem;                                //@synthesize searchableItem=_searchableItem - In the implementation block
@property (nonatomic,readonly) NSDictionary * highlightInfo;                                     //@synthesize highlightInfo=_highlightInfo - In the implementation block
@property (nonatomic,readonly) double rankingScore;                                              //@synthesize rankingScore=_rankingScore - In the implementation block
@property (nonatomic,readonly) NSArray * attachmentUniqueIdentifiers;                            //@synthesize attachmentUniqueIdentifiers=_attachmentUniqueIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long relevanceBitField;                             //@synthesize relevanceBitField=_relevanceBitField - In the implementation block
@property (nonatomic,readonly) BOOL isPrefixMatch;                                               //@synthesize isPrefixMatch=_isPrefixMatch - In the implementation block
@property (nonatomic,readonly) unsigned long long modificationDateBucket;                        //@synthesize modificationDateBucket=_modificationDateBucket - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                        //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                            //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long searchResultType;                              //@synthesize searchResultType=_searchResultType - In the implementation block
+(id)sortDescriptorsForRankingStrategy:(unsigned long long)arg1 ;
-(NSDate *)modificationDate;
-(void)setLanguage:(NSString *)arg1 ;
-(unsigned long long)searchResultType;
-(NSDate *)creationDate;
-(double)rankingScore;
-(CSSearchableItem *)searchableItem;
-(unsigned long long)hash;
-(ICRankingQueriesDefinition *)rankingQueriesDefinition;
-(void)lazilyInitializeHighlightInfoAndIsPrefixMatchIfNecessary;
-(NSArray *)attachmentUniqueIdentifiers;
-(NSDictionary *)highlightInfo;
-(unsigned long long)relevanceBitField;
-(BOOL)isPrefixMatch;
-(unsigned long long)modificationDateBucket;
-(id)initWithSearchableItem:(id)arg1 highlightInfo:(id)arg2 rankingScore:(double)arg3 attachmentUniqueIdentifiers:(id)arg4 ;
-(id)initWithSearchableItem:(id)arg1 searchString:(id)arg2 rankingQueriesDefinition:(id)arg3 rankingScore:(double)arg4 attachmentUniqueIdentifiers:(id)arg5 language:(id)arg6 ;
-(void)setRankingQueriesDefinition:(ICRankingQueriesDefinition *)arg1 ;
-(BOOL)needsLazyInitialization;
-(void)setNeedsLazyInitialization:(BOOL)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(NSString *)searchString;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
@end

