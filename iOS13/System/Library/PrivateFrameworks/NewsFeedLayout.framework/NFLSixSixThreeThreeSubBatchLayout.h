/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLSixSixThreeThreeSubBatchLayout : NFLSubBatchLayout {

	BOOL _wideCellsOnLeft;
	NFLSingleComponentLayout* _topSixComponent;
	NFLSingleComponentLayout* _bottomSixComponent;
	NFLSingleComponentLayout* _rightThreeComponent;
	NFLSingleComponentLayout* _leftThreeComponent;

}

@property (assign,nonatomic) BOOL wideCellsOnLeft;                                        //@synthesize wideCellsOnLeft=_wideCellsOnLeft - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * topSixComponent;                  //@synthesize topSixComponent=_topSixComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * bottomSixComponent;               //@synthesize bottomSixComponent=_bottomSixComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * rightThreeComponent;              //@synthesize rightThreeComponent=_rightThreeComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * leftThreeComponent;               //@synthesize leftThreeComponent=_leftThreeComponent - In the implementation block
-(BOOL)isValid;
-(double)rank;
-(unsigned long long)rowSpan;
-(NFLSingleComponentLayout *)topSixComponent;
-(NFLSingleComponentLayout *)bottomSixComponent;
-(NFLSingleComponentLayout *)leftThreeComponent;
-(NFLSingleComponentLayout *)rightThreeComponent;
-(id)tileInfosUsed;
-(BOOL)wideCellsOnLeft;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(void)setWideCellsOnLeft:(BOOL)arg1 ;
-(void)setTopSixComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setBottomSixComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setRightThreeComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setLeftThreeComponent:(NFLSingleComponentLayout *)arg1 ;
@end

