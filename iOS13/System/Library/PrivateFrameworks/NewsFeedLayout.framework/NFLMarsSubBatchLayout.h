/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLMarsSubBatchLayout : NFLSubBatchLayout {

	NFLSingleComponentLayout* _largeComponent;
	NFLSingleComponentLayout* _topLeftComponent;
	NFLSingleComponentLayout* _topRightComponent;
	NFLSingleComponentLayout* _bottomLeftComponent;
	NFLSingleComponentLayout* _bottomRightComponent;
	NFLSingleComponentLayout* _bottomComponent;

}

@property (nonatomic,retain) NFLSingleComponentLayout * largeComponent;                    //@synthesize largeComponent=_largeComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * topLeftComponent;                  //@synthesize topLeftComponent=_topLeftComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * topRightComponent;                 //@synthesize topRightComponent=_topRightComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * bottomLeftComponent;               //@synthesize bottomLeftComponent=_bottomLeftComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * bottomRightComponent;              //@synthesize bottomRightComponent=_bottomRightComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * bottomComponent;                   //@synthesize bottomComponent=_bottomComponent - In the implementation block
-(BOOL)isValid;
-(double)rank;
-(unsigned long long)rowSpan;
-(id)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(void)setLargeComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setTopLeftComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setTopRightComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setBottomLeftComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setBottomRightComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setBottomComponent:(NFLSingleComponentLayout *)arg1 ;
-(NFLSingleComponentLayout *)largeComponent;
-(NFLSingleComponentLayout *)bottomComponent;
-(NFLSingleComponentLayout *)topLeftComponent;
-(NFLSingleComponentLayout *)topRightComponent;
-(NFLSingleComponentLayout *)bottomLeftComponent;
-(NFLSingleComponentLayout *)bottomRightComponent;
@end

