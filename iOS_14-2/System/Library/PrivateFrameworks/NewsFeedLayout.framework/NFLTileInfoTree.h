/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<NFLFeedTileInfo>)tileInfo;
-(void)setMaximumRowSpan:(long long)arg1 ;
-(id)init;
-(void)setMinimumRowSpan:(long long)arg1 ;
-(id)initWithTileInfo:(id)arg1 ;
-(CFDictionaryRef)values;
-(NSMutableArray *)allRankedLayouts;
-(void)setAllRankedLayouts:(NSMutableArray *)arg1 ;
-(void)setValues:(CFDictionaryRef)arg1 ;
-(id)description;
-(void)setTileInfo:(id<NFLFeedTileInfo>)arg1 ;
-(id)rankedLayoutWithRowSpan:(long long)arg1 columnSpan:(long long)arg2 cellType:(long long)arg3 ;
-(void)insertRankedLayout:(id)arg1 ;
-(long long)maximumRowSpan;
-(long long)minimumRowSpan;
-(void)dealloc;
@end

