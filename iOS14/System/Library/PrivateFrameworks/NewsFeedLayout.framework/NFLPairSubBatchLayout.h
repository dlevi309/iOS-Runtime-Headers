/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)columnSpan;
-(BOOL)_isHorizontal;
-(id)tileInfosUsed;
-(unsigned long long)rowSpan;
-(BOOL)isValid;
-(double)rank;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(void)setComponentOne:(NFLSingleComponentLayout *)arg1 ;
-(void)setComponentTwo:(NFLSingleComponentLayout *)arg1 ;
-(NFLSingleComponentLayout *)componentOne;
-(NFLSingleComponentLayout *)componentTwo;
@end

