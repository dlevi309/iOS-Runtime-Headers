/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRank:(double)arg1 ;
-(double)rank;
-(NSMutableDictionary *)ranks;
-(void)setRanks:(NSMutableDictionary *)arg1 ;
-(NFLFeedCollectionViewLayoutAttributes *)layoutAttributes;
-(void)setLayoutAttributes:(NFLFeedCollectionViewLayoutAttributes *)arg1 ;
-(void)setVetoed:(BOOL)arg1 ;
-(BOOL)vetoed;
@end

