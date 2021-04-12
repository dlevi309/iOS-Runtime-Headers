/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout, NFLPairSubBatchLayout;

@interface NFLSixSixThreeThreeWithImageOnSideSubBatchLayout : NFLSubBatchLayout {

	NFLSingleComponentLayout* _leftSixImageOnTopComponent;
	NFLSingleComponentLayout* _rightSixImageOnTopComponent;
	NFLPairSubBatchLayout* _topPairComponent;
	NFLSingleComponentLayout* _bottomImageOnSideComponent;

}

@property (nonatomic,retain) NFLSingleComponentLayout * leftSixImageOnTopComponent;               //@synthesize leftSixImageOnTopComponent=_leftSixImageOnTopComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * rightSixImageOnTopComponent;              //@synthesize rightSixImageOnTopComponent=_rightSixImageOnTopComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * topPairComponent;                            //@synthesize topPairComponent=_topPairComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * bottomImageOnSideComponent;               //@synthesize bottomImageOnSideComponent=_bottomImageOnSideComponent - In the implementation block
-(BOOL)isValid;
-(double)rank;
-(unsigned long long)columnSpan;
-(unsigned long long)rowSpan;
-(id)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(void)setTopPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(NFLSingleComponentLayout *)leftSixImageOnTopComponent;
-(NFLSingleComponentLayout *)rightSixImageOnTopComponent;
-(NFLPairSubBatchLayout *)topPairComponent;
-(NFLSingleComponentLayout *)bottomImageOnSideComponent;
-(void)setLeftSixImageOnTopComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setRightSixImageOnTopComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setBottomImageOnSideComponent:(NFLSingleComponentLayout *)arg1 ;
@end

