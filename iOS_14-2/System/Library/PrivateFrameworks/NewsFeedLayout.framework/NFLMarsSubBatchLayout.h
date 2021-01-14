/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)tileInfosUsed;
-(unsigned long long)rowSpan;
-(BOOL)isValid;
-(double)rank;
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

