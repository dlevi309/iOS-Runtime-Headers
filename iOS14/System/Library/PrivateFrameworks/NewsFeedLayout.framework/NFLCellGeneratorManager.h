/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)cellGeneratorForCellType:(long long)arg1 ;
-(NFLCellGenerator *)trendingCellGenerator;
-(NFLCellGenerator *)spotlightImageOnTopCellGenerator;
-(void)setImageOnSideAccessibilityCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setPremiumCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setGapCellGenerator:(NFLCellGenerator *)arg1 ;
-(NFLCellGenerator *)noImageCellGenerator;
-(void)setImageOnTopCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setSpotlightImageOnTopCellGenerator:(NFLCellGenerator *)arg1 ;
-(id)cellGeneratorsForCellType:(long long)arg1 ;
-(void)setSpotlightImageOnSideCellGenerator:(NFLCellGenerator *)arg1 ;
-(void)setNoImageCellGenerator:(NFLCellGenerator *)arg1 ;
-(NFLCellGenerator *)imageOnSideAccessibilityCellGenerator;
-(NFLCellGenerator *)premiumCellGenerator;
-(void)setTrendingCellGenerator:(NFLCellGenerator *)arg1 ;
-(NFLCellGenerator *)imageOnSideCellGenerator;
-(NFLCellGenerator *)imageOnTopCellGenerator;
-(NFLCellGenerator *)gapCellGenerator;
-(void)setImageOnSideCellGenerator:(NFLCellGenerator *)arg1 ;
-(NFLCellGenerator *)spotlightImageOnSideCellGenerator;
@end

