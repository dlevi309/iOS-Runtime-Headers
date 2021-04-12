/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NFLFeedTileInfo;
@class NSObject, NFLFeedCollectionViewLayoutAttributes;

@interface NFLFeedTileLayoutInfo : NSObject <NSCopying> {

	NSObject*<NFLFeedTileInfo> _tileInfo;
	NFLFeedCollectionViewLayoutAttributes* _layoutAttributes;

}

@property (nonatomic,copy) NSObject*<NFLFeedTileInfo> tileInfo;                                   //@synthesize tileInfo=_tileInfo - In the implementation block
@property (nonatomic,copy) NFLFeedCollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
+(id)nfl_layoutInfoWithTileInfo:(id)arg1 forLayoutAttributes:(id)arg2 atRowOrigin:(long long)arg3 columnOrigin:(long long)arg4 subBatchRowOffset:(long long)arg5 feedSettings:(id)arg6 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NFLFeedCollectionViewLayoutAttributes *)layoutAttributes;
-(void)setLayoutAttributes:(NFLFeedCollectionViewLayoutAttributes *)arg1 ;
-(NSObject*<NFLFeedTileInfo>)tileInfo;
-(id)initWithTileInfo:(id)arg1 layoutAttributes:(id)arg2 ;
-(void)setTileInfo:(NSObject*<NFLFeedTileInfo>)arg1 ;
@end

