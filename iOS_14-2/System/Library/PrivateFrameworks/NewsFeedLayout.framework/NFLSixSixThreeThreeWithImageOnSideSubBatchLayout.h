/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)columnSpan;
-(id)tileInfosUsed;
-(unsigned long long)rowSpan;
-(BOOL)isValid;
-(double)rank;
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

