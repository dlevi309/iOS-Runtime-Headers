/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLPairSubBatchLayout : NFLSubBatchLayout {

	NFLSingleComponentLayout* _componentOne;
	NFLSingleComponentLayout* _componentTwo;

}

@property (nonatomic,retain) NFLSingleComponentLayout * componentOne;              //@synthesize componentOne=_componentOne - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * componentTwo;              //@synthesize componentTwo=_componentTwo - In the implementation block
+(id)pairComponentFeedSetting:(id)arg1 componentOne:(id)arg2 componentTwo:(id)arg3 ;
-(BOOL)isValid;
-(double)rank;
-(unsigned long long)columnSpan;
-(unsigned long long)rowSpan;
-(BOOL)_isHorizontal;
-(id)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(void)setComponentOne:(NFLSingleComponentLayout *)arg1 ;
-(void)setComponentTwo:(NFLSingleComponentLayout *)arg1 ;
-(NFLSingleComponentLayout *)componentOne;
-(NFLSingleComponentLayout *)componentTwo;
@end

