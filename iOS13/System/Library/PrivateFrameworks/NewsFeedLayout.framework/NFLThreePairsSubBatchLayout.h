/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLPairSubBatchLayout;

@interface NFLThreePairsSubBatchLayout : NFLSubBatchLayout {

	NFLPairSubBatchLayout* _leftPairComponent;
	NFLPairSubBatchLayout* _centerPairComponent;
	NFLPairSubBatchLayout* _rightPairComponent;

}

@property (nonatomic,retain) NFLPairSubBatchLayout * leftPairComponent;                //@synthesize leftPairComponent=_leftPairComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * centerPairComponent;              //@synthesize centerPairComponent=_centerPairComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * rightPairComponent;               //@synthesize rightPairComponent=_rightPairComponent - In the implementation block
-(BOOL)isValid;
-(double)rank;
-(unsigned long long)rowSpan;
-(id)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(NFLPairSubBatchLayout *)leftPairComponent;
-(NFLPairSubBatchLayout *)centerPairComponent;
-(NFLPairSubBatchLayout *)rightPairComponent;
-(void)setLeftPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(void)setCenterPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(void)setRightPairComponent:(NFLPairSubBatchLayout *)arg1 ;
@end

