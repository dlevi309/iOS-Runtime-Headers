/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class CSSearchableItem, NSDate;

@interface ICSortableSearchableItem : NSObject {

	BOOL _isPrefixMatch;
	CSSearchableItem* _searchableItem;
	double _rankingScore;
	unsigned long long _relevanceBitField;
	unsigned long long _modificationDateBucket;
	NSDate* _modificationDate;
	NSDate* _creationDate;
	unsigned long long _searchResultType;

}

@property (nonatomic,retain) CSSearchableItem * searchableItem;                      //@synthesize searchableItem=_searchableItem - In the implementation block
@property (assign,nonatomic) double rankingScore;                                    //@synthesize rankingScore=_rankingScore - In the implementation block
@property (assign,nonatomic) unsigned long long relevanceBitField;                   //@synthesize relevanceBitField=_relevanceBitField - In the implementation block
@property (assign,nonatomic) BOOL isPrefixMatch;                                     //@synthesize isPrefixMatch=_isPrefixMatch - In the implementation block
@property (assign,nonatomic) unsigned long long modificationDateBucket;              //@synthesize modificationDateBucket=_modificationDateBucket - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                  //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) unsigned long long searchResultType;                    //@synthesize searchResultType=_searchResultType - In the implementation block
+(id)sortDescriptorsForRankingStrategy:(unsigned long long)arg1 ;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(unsigned long long)searchResultType;
-(void)setSearchResultType:(unsigned long long)arg1 ;
-(double)rankingScore;
-(void)setRankingScore:(double)arg1 ;
-(void)setSearchableItem:(CSSearchableItem *)arg1 ;
-(CSSearchableItem *)searchableItem;
-(id)initWithSearchableItem:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 modificationDateBucket:(unsigned long long)arg4 searchResultType:(unsigned long long)arg5 isPrefixMatch:(BOOL)arg6 ;
-(unsigned long long)relevanceBitField;
-(void)setRelevanceBitField:(unsigned long long)arg1 ;
-(BOOL)isPrefixMatch;
-(void)setIsPrefixMatch:(BOOL)arg1 ;
-(unsigned long long)modificationDateBucket;
-(void)setModificationDateBucket:(unsigned long long)arg1 ;
@end

