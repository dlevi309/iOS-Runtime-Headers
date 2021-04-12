/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)tileInfosUsed;
-(unsigned long long)rowSpan;
-(BOOL)isValid;
-(double)rank;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(NFLPairSubBatchLayout *)leftPairComponent;
-(NFLPairSubBatchLayout *)centerPairComponent;
-(NFLPairSubBatchLayout *)rightPairComponent;
-(void)setLeftPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(void)setCenterPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(void)setRightPairComponent:(NFLPairSubBatchLayout *)arg1 ;
@end

