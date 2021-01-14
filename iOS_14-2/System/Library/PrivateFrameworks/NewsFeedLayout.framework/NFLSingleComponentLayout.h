/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) double rank; 
@property (nonatomic,copy,readonly) NSArray * tileInfosUsed; 
@property (nonatomic,readonly) unsigned long long rowSpan; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singleComponentLayoutWithRankedLayout:(id)arg1 tileInfo:(id)arg2 ;
-(id<NFLFeedTileInfo>)tileInfo;
-(unsigned long long)columnSpan;
-(NFLFeedCollectionViewLayoutAttributes *)layoutAttributes;
-(NSArray *)tileInfosUsed;
-(unsigned long long)rowSpan;
-(void)setRankedLayout:(NFLRankedLayout *)arg1 ;
-(void)setTileInfo:(id<NFLFeedTileInfo>)arg1 ;
-(double)rank;
-(unsigned long long)tileInfosUsedCount;
-(NFLRankedLayout *)rankedLayout;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
@end

