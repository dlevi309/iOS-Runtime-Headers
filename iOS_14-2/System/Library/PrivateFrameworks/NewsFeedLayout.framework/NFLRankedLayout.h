/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NFLFeedCollectionViewLayoutAttributes, NSMutableDictionary;

@interface NFLRankedLayout : NSObject <NSCopying> {

	BOOL _vetoed;
	NFLFeedCollectionViewLayoutAttributes* _layoutAttributes;
	double _rank;
	NSMutableDictionary* _ranks;

}

@property (nonatomic,retain) NFLFeedCollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (assign,nonatomic) double rank;                                                           //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) BOOL vetoed;                                                           //@synthesize vetoed=_vetoed - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * ranks;                                             //@synthesize ranks=_ranks - In the implementation block
-(void)setRank:(double)arg1 ;
-(void)setLayoutAttributes:(NFLFeedCollectionViewLayoutAttributes *)arg1 ;
-(NFLFeedCollectionViewLayoutAttributes *)layoutAttributes;
-(void)setVetoed:(BOOL)arg1 ;
-(id)description;
-(BOOL)vetoed;
-(double)rank;
-(NSMutableDictionary *)ranks;
-(void)setRanks:(NSMutableDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

