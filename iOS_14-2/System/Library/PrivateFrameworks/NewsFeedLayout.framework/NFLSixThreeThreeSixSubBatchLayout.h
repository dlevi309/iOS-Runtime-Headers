/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout, NFLPairSubBatchLayout;

@interface NFLSixThreeThreeSixSubBatchLayout : NFLSubBatchLayout {

	NFLSingleComponentLayout* _largeComponent;
	NFLPairSubBatchLayout* _leftTopPairComponent;
	NFLPairSubBatchLayout* _leftBottomPairComponent;
	NFLPairSubBatchLayout* _rightTopPairComponent;
	NFLPairSubBatchLayout* _rightBottomPairComponent;

}

@property (nonatomic,retain) NFLSingleComponentLayout * largeComponent;                     //@synthesize largeComponent=_largeComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * leftTopPairComponent;                  //@synthesize leftTopPairComponent=_leftTopPairComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * leftBottomPairComponent;               //@synthesize leftBottomPairComponent=_leftBottomPairComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * rightTopPairComponent;                 //@synthesize rightTopPairComponent=_rightTopPairComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * rightBottomPairComponent;              //@synthesize rightBottomPairComponent=_rightBottomPairComponent - In the implementation block
-(unsigned long long)columnSpan;
-(id)tileInfosUsed;
-(unsigned long long)rowSpan;
-(BOOL)isValid;
-(double)rank;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(void)setLargeComponent:(NFLSingleComponentLayout *)arg1 ;
-(NFLSingleComponentLayout *)largeComponent;
-(NFLPairSubBatchLayout *)leftTopPairComponent;
-(NFLPairSubBatchLayout *)leftBottomPairComponent;
-(NFLPairSubBatchLayout *)rightTopPairComponent;
-(NFLPairSubBatchLayout *)rightBottomPairComponent;
-(void)setLeftTopPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(void)setLeftBottomPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(void)setRightTopPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(void)setRightBottomPairComponent:(NFLPairSubBatchLayout *)arg1 ;
@end

