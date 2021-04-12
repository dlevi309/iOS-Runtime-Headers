/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@class NFLCellGenerator, NFLFeedSettings;

@interface NFLCellGeneratorManager : NSObject {

	NFLCellGenerator* _noImageCellGenerator;
	NFLCellGenerator* _imageOnSideCellGenerator;
	NFLCellGenerator* _imageOnSideAccessibilityCellGenerator;
	NFLCellGenerator* _imageOnTopCellGenerator;
	NFLCellGenerator* _premiumCellGenerator;
	NFLCellGenerator* _trendingCellGenerator;
	NFLCellGenerator* _spotlightImageOnTopCellGenerator;
	NFLCellGenerator* _spotlightImageOnSideCellGenerator;
	NFLCellGenerator* _gapCellGenerator;
	NFLFeedSettings* _feedSettings;

}

@property (nonatomic,retain) NFLCellGenerator * noImageCellGenerator;                               //@synthesize noImageCellGenerator=_noImageCellGenerator - In the implementation block
@property (nonatomic,retain) NFLCellGenerator * imageOnSideCellGenerator;                           //@synthesize imageOnSideCellGenerator=_imageOnSideCellGenerator - In the implementation block
@property (nonatomic,retain) NFLCellGenerator * imageOnSideAccessibilityCellGenerator;              //@synthesize imageOnSideAccessibilityCellGenerator=_imageOnSideAccessibilityCellGenerator - In the implementation block
@property (nonatomic,retain) NFLCellGenerator * imageOnTopCellGenerator;                            //@synthesize imageOnTopCellGenerator=_imageOnTopCellGenerator - In the implementation block
@property (nonatomic,retain) NFLCellGenerator * premiumCellGenerator;                               //@synthesize premiumCellGenerator=_premiumCellGenerator - In the implementation block
@property (nonatomic,retain) NFLCellGenerator * spotlightImageOnTopCellGenerator;                   //@synthesize spotlightImageOnTopCellGenerator=_spotlightImageOnTopCellGenerator - In the implementation block
@property (nonatomic,retain) NFLCellGenerator * spotlightImageOnSideCellGenerator;                  //@synthesize spotlightImageOnSideCellGenerator=_spotlightImageOnSideCellGenerator - In the implementation block
@property (nonatomic,retain) NFLCellGenerator * trendingCellGenerator;                              //@synthesize trendingCellGenerator=_trendingCellGenerator - In the implementation block
@property (nonatomic,retain) NFLCellGenerator * gapCellGenerator;                                   //@synthesize gapCellGenerator=_gapCellGenerator - In the implementation block
@property (assign,nonatomic,__weak) NFLFeedSettings * feedSettings;                                 //@synthesize feedSettings=_feedSettings - In the implementation block
+(id)cellGeneratorWithFeedSettings:(id)arg1 ;
-(NFLFeedSettings *)feedSettings;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(id)cellGeneratorsForCellType:(long long)arg1 ;
-(void)setTrendingCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setNoImageCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setImageOnSideCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setImageOnSideAccessibilityCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setImageOnTopCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setPremiumCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setGapCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setSpotlightImageOnTopCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setSpotlightImageOnSideCellGenerator:(NFLCellGenerator *)arg1 ;
-(NFLCellGenerator *)imageOnSideCellGenerator;
-(NFLCellGenerator *)noImageCellGenerator;
-(id)cellGeneratorForCellType:(long long)arg1 ;
-(NFLCellGenerator *)imageOnTopCellGenerator;
-(NFLCellGenerator *)premiumCellGenerator;
-(NFLCellGenerator *)trendingCellGenerator;
-(NFLCellGenerator *)gapCellGenerator;
-(NFLCellGenerator *)imageOnSideAccessibilityCellGenerator;
-(NFLCellGenerator *)spotlightImageOnTopCellGenerator;
-(NFLCellGenerator *)spotlightImageOnSideCellGenerator;
@end

