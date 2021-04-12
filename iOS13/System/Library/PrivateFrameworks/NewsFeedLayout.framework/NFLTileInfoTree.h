/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@protocol NFLFeedTileInfo;
#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
@class NSMutableArray;

@interface NFLTileInfoTree : NSObject {

	long long _minimumRowSpan;
	long long _maximumRowSpan;
	NSMutableArray* _allRankedLayouts;
	id<NFLFeedTileInfo> _tileInfo;
	CFDictionaryRef _values;

}

@property (assign,nonatomic) CFDictionaryRef values;                         //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) id<NFLFeedTileInfo> tileInfo;                   //@synthesize tileInfo=_tileInfo - In the implementation block
@property (assign,nonatomic) long long minimumRowSpan;                       //@synthesize minimumRowSpan=_minimumRowSpan - In the implementation block
@property (assign,nonatomic) long long maximumRowSpan;                       //@synthesize maximumRowSpan=_maximumRowSpan - In the implementation block
@property (nonatomic,retain) NSMutableArray * allRankedLayouts;              //@synthesize allRankedLayouts=_allRankedLayouts - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setValues:(CFDictionaryRef)arg1 ;
-(CFDictionaryRef)values;
-(id)rankedLayoutWithRowSpan:(long long)arg1 columnSpan:(long long)arg2 cellType:(long long)arg3 ;
-(id<NFLFeedTileInfo>)tileInfo;
-(id)initWithTileInfo:(id)arg1 ;
-(void)insertRankedLayout:(id)arg1 ;
-(void)setTileInfo:(id<NFLFeedTileInfo>)arg1 ;
-(long long)minimumRowSpan;
-(void)setMinimumRowSpan:(long long)arg1 ;
-(long long)maximumRowSpan;
-(void)setMaximumRowSpan:(long long)arg1 ;
-(NSMutableArray *)allRankedLayouts;
-(void)setAllRankedLayouts:(NSMutableArray *)arg1 ;
@end

