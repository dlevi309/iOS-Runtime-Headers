/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedComponentLayout.h>

@protocol NFLFeedTileInfo;
@class NSArray, NFLRankedLayout, NFLFeedCollectionViewLayoutAttributes, NSString;

@interface NFLSingleComponentLayout : NSObject <NFLFeedComponentLayout> {

	id<NFLFeedTileInfo> _tileInfo;
	NFLRankedLayout* _rankedLayout;

}

@property (nonatomic,retain) NFLRankedLayout * rankedLayout;                                          //@synthesize rankedLayout=_rankedLayout - In the implementation block
@property (nonatomic,copy) id<NFLFeedTileInfo> tileInfo;                                              //@synthesize tileInfo=_tileInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long columnSpan; 
@property (nonatomic,readonly) NFLFeedCollectionViewLayoutAttributes * layoutAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double rank; 
@property (nonatomic,copy,readonly) NSArray * tileInfosUsed; 
@property (nonatomic,readonly) unsigned long long rowSpan; 
+(id)singleComponentLayoutWithRankedLayout:(id)arg1 tileInfo:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)rank;
-(unsigned long long)columnSpan;
-(unsigned long long)rowSpan;
-(NFLFeedCollectionViewLayoutAttributes *)layoutAttributes;
-(NSArray *)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id<NFLFeedTileInfo>)tileInfo;
-(unsigned long long)tileInfosUsedCount;
-(void)setRankedLayout:(NFLRankedLayout *)arg1 ;
-(void)setTileInfo:(id<NFLFeedTileInfo>)arg1 ;
-(NFLRankedLayout *)rankedLayout;
@end

