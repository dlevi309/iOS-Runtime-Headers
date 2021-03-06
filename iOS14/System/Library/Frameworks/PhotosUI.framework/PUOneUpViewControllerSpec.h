/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewControllerSpec.h>

@class UIColor, PUOneUpViewControllerSpecChange;

@interface PUOneUpViewControllerSpec : PUViewControllerSpec {

	BOOL _isChromeVisible;
	BOOL _isPresentedForPreview;
	BOOL _isShowingPlayPauseButtonInBars;
	BOOL _shouldPlaceButtonsInNavigationBar;
	BOOL _shouldUseCompactTitleView;
	BOOL _shouldUseContentGuideInsets;
	BOOL _shouldUseUserTransformTiles;
	BOOL _shouldDisplayBadges;
	BOOL _shouldDisplayAssetExplorerReviewScreenBadges;
	BOOL _shouldDisplayPlayButtons;
	BOOL _shouldDisplayProgressIndicators;
	BOOL _shouldAutoplayOnAppear;
	BOOL _shouldDisplayBufferingIndicators;
	BOOL _canDisplayLoadingIndicators;
	BOOL _shouldDisplayEmptyPlaceholder;
	BOOL _shouldUseCompactCommentsTitle;
	BOOL _shouldCounterrotateReviewScreenBars;
	BOOL _shouldPinContentToTop;
	BOOL _shouldLayoutReviewScreenControlBarVertically;
	BOOL _shouldPlaceScrubberInScrubberBar;
	unsigned long long _options;
	double _maximumToolbarHeight;
	double _maximumAccessoryToolbarHeight;
	UIColor* _backgroundColorOverride;
	long long _tileInitialContentMode;
	CGSize _progressIndicatorSize;
	CGSize _bufferingIndicatorSize;
	CGSize _renderIndicatorSize;
	UIEdgeInsets _progressIndicatorContentInsets;

}

@property (nonatomic,readonly) PUOneUpViewControllerSpecChange * currentChange; 
@property (assign,setter=_setShouldPlaceButtonsInNavigationBar:,nonatomic) BOOL shouldPlaceButtonsInNavigationBar;                                    //@synthesize shouldPlaceButtonsInNavigationBar=_shouldPlaceButtonsInNavigationBar - In the implementation block
@property (assign,setter=_setShouldUseCompactTitleView:,nonatomic) BOOL shouldUseCompactTitleView;                                                    //@synthesize shouldUseCompactTitleView=_shouldUseCompactTitleView - In the implementation block
@property (assign,setter=_setMaximumToolbarHeight:,nonatomic) double maximumToolbarHeight;                                                            //@synthesize maximumToolbarHeight=_maximumToolbarHeight - In the implementation block
@property (assign,setter=_setMaximumAccessoryToolbarHeight:,nonatomic) double maximumAccessoryToolbarHeight;                                          //@synthesize maximumAccessoryToolbarHeight=_maximumAccessoryToolbarHeight - In the implementation block
@property (assign,setter=_setShouldUseContentGuideInsets:,nonatomic) BOOL shouldUseContentGuideInsets;                                                //@synthesize shouldUseContentGuideInsets=_shouldUseContentGuideInsets - In the implementation block
@property (assign,setter=_setShouldUseUserTransformTiles:,nonatomic) BOOL shouldUseUserTransformTiles;                                                //@synthesize shouldUseUserTransformTiles=_shouldUseUserTransformTiles - In the implementation block
@property (assign,setter=_setShouldAutoplayOnAppear:,nonatomic) BOOL shouldAutoplayOnAppear;                                                          //@synthesize shouldAutoplayOnAppear=_shouldAutoplayOnAppear - In the implementation block
@property (assign,setter=_setShouldDisplayBadges:,nonatomic) BOOL shouldDisplayBadges;                                                                //@synthesize shouldDisplayBadges=_shouldDisplayBadges - In the implementation block
@property (assign,setter=_setShouldDisplayAssetExplorerReviewScreenBadges:,nonatomic) BOOL shouldDisplayAssetExplorerReviewScreenBadges;              //@synthesize shouldDisplayAssetExplorerReviewScreenBadges=_shouldDisplayAssetExplorerReviewScreenBadges - In the implementation block
@property (assign,setter=_setShouldDisplayPlayButtons:,nonatomic) BOOL shouldDisplayPlayButtons;                                                      //@synthesize shouldDisplayPlayButtons=_shouldDisplayPlayButtons - In the implementation block
@property (assign,setter=_setShouldDisplayProgressIndicators:,nonatomic) BOOL shouldDisplayProgressIndicators;                                        //@synthesize shouldDisplayProgressIndicators=_shouldDisplayProgressIndicators - In the implementation block
@property (assign,setter=_setShouldDisplayBufferingIndicators:,nonatomic) BOOL shouldDisplayBufferingIndicators;                                      //@synthesize shouldDisplayBufferingIndicators=_shouldDisplayBufferingIndicators - In the implementation block
@property (assign,setter=_setCanDisplayLoadingIndicators:,nonatomic) BOOL canDisplayLoadingIndicators;                                                //@synthesize canDisplayLoadingIndicators=_canDisplayLoadingIndicators - In the implementation block
@property (assign,setter=_setShouldDisplayEmptyPlaceholder:,nonatomic) BOOL shouldDisplayEmptyPlaceholder;                                            //@synthesize shouldDisplayEmptyPlaceholder=_shouldDisplayEmptyPlaceholder - In the implementation block
@property (setter=_setBackgroundColorOverride:,nonatomic,retain) UIColor * backgroundColorOverride;                                                   //@synthesize backgroundColorOverride=_backgroundColorOverride - In the implementation block
@property (assign,setter=_setProgressIndicatorSize:,nonatomic) CGSize progressIndicatorSize;                                                          //@synthesize progressIndicatorSize=_progressIndicatorSize - In the implementation block
@property (assign,setter=_setProgressIndicatorContentInsets:,nonatomic) UIEdgeInsets progressIndicatorContentInsets;                                  //@synthesize progressIndicatorContentInsets=_progressIndicatorContentInsets - In the implementation block
@property (assign,setter=_setBufferingIndicatorSize:,nonatomic) CGSize bufferingIndicatorSize;                                                        //@synthesize bufferingIndicatorSize=_bufferingIndicatorSize - In the implementation block
@property (assign,setter=_setShouldUseCompactCommentsTitle:,nonatomic) BOOL shouldUseCompactCommentsTitle;                                            //@synthesize shouldUseCompactCommentsTitle=_shouldUseCompactCommentsTitle - In the implementation block
@property (assign,setter=_setTileInitialContentMode:,nonatomic) long long tileInitialContentMode;                                                     //@synthesize tileInitialContentMode=_tileInitialContentMode - In the implementation block
@property (assign,setter=_setShouldCounterrotateReviewScreenBars:,nonatomic) BOOL shouldCounterrotateReviewScreenBars;                                //@synthesize shouldCounterrotateReviewScreenBars=_shouldCounterrotateReviewScreenBars - In the implementation block
@property (assign,setter=_setShouldPinContentToTop:,nonatomic) BOOL shouldPinContentToTop;                                                            //@synthesize shouldPinContentToTop=_shouldPinContentToTop - In the implementation block
@property (assign,setter=_setShouldLayoutReviewScreenControlBarVertically:,nonatomic) BOOL shouldLayoutReviewScreenControlBarVertically;              //@synthesize shouldLayoutReviewScreenControlBarVertically=_shouldLayoutReviewScreenControlBarVertically - In the implementation block
@property (assign,setter=_setShouldPlaceScrubberInScrubberBar:,nonatomic) BOOL shouldPlaceScrubberInScrubberBar;                                      //@synthesize shouldPlaceScrubberInScrubberBar=_shouldPlaceScrubberInScrubberBar - In the implementation block
@property (assign,setter=setChromeVisible:,nonatomic) BOOL isChromeVisible;                                                                           //@synthesize isChromeVisible=_isChromeVisible - In the implementation block
@property (assign,setter=setPresentedForPreview:,nonatomic) BOOL isPresentedForPreview;                                                               //@synthesize isPresentedForPreview=_isPresentedForPreview - In the implementation block
@property (assign,setter=setShowingPlayPauseButtonInBars:,nonatomic) BOOL isShowingPlayPauseButtonInBars;                                             //@synthesize isShowingPlayPauseButtonInBars=_isShowingPlayPauseButtonInBars - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                                                                            //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL allowAccessoryVisibility; 
@property (nonatomic,readonly) BOOL allowSuggestions; 
@property (nonatomic,readonly) BOOL allowDoneButton; 
@property (nonatomic,readonly) BOOL allowTapOnTitle; 
@property (nonatomic,readonly) BOOL shouldShowTitleView; 
@property (nonatomic,readonly) BOOL shouldDisplaySelectionIndicators; 
@property (nonatomic,readonly) BOOL shouldDisplayAssetExplorerReviewScreenProgressIndicators; 
@property (nonatomic,readonly) CGSize assetExplorerReviewScreenProgressIndicatorSize; 
@property (nonatomic,readonly) BOOL shouldDisplayReviewScreenBars; 
@property (nonatomic,readonly) BOOL shouldDisableNavigationBarsVisibility; 
@property (nonatomic,readonly) CGSize playButtonSize; 
@property (nonatomic,readonly) CGSize renderIndicatorSize;                                                                                            //@synthesize renderIndicatorSize=_renderIndicatorSize - In the implementation block
-(PUOneUpViewControllerSpecChange *)currentChange;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(BOOL)allowTapOnTitle;
-(BOOL)shouldDisableNavigationBarsVisibility;
-(void)_setBufferingIndicatorSize:(CGSize)arg1 ;
-(BOOL)isChromeVisible;
-(BOOL)_isAssetExplorerReviewScreen;
-(void)_setShouldPlaceScrubberInScrubberBar:(BOOL)arg1 ;
-(BOOL)shouldPinContentToTop;
-(void)_setShouldUseCompactCommentsTitle:(BOOL)arg1 ;
-(BOOL)shouldDisplayBufferingIndicators;
-(void)_setShouldDisplayPlayButtons:(BOOL)arg1 ;
-(BOOL)shouldDisplayAssetExplorerReviewScreenProgressIndicators;
-(BOOL)shouldPlaceButtonsInNavigationBar;
-(void)setChromeVisible:(BOOL)arg1 ;
-(BOOL)shouldAutoplayOnAppear;
-(unsigned long long)options;
-(void)_setShouldUseCompactTitleView:(BOOL)arg1 ;
-(void)_setCanDisplayLoadingIndicators:(BOOL)arg1 ;
-(void)_setShouldCounterrotateReviewScreenBars:(BOOL)arg1 ;
-(BOOL)shouldShowTitleView;
-(void)_setMaximumToolbarHeight:(double)arg1 ;
-(BOOL)allowSuggestions;
-(UIEdgeInsets)progressIndicatorContentInsets;
-(BOOL)shouldDisplayBadges;
-(BOOL)shouldDisplayAssetExplorerReviewScreenBadges;
-(BOOL)shouldDisplaySelectionIndicators;
-(void)updateIfNeeded;
-(void)_setShouldDisplayBadges:(BOOL)arg1 ;
-(void)_setShouldPlaceButtonsInNavigationBar:(BOOL)arg1 ;
-(BOOL)shouldUseContentGuideInsets;
-(void)_setMaximumAccessoryToolbarHeight:(double)arg1 ;
-(void)_setShouldDisplayEmptyPlaceholder:(BOOL)arg1 ;
-(void)_setShouldPinContentToTop:(BOOL)arg1 ;
-(BOOL)shouldPlaceScrubberInScrubberBar;
-(void)setPresentedForPreview:(BOOL)arg1 ;
-(BOOL)allowAccessoryVisibility;
-(CGSize)bufferingIndicatorSize;
-(void)_setShouldLayoutReviewScreenControlBarVertically:(BOOL)arg1 ;
-(double)maximumToolbarHeight;
-(BOOL)shouldDisplayPlayButtons;
-(BOOL)shouldUseCompactCommentsTitle;
-(BOOL)_shouldForceBlackBackground;
-(BOOL)shouldDisplayReviewScreenBars;
-(BOOL)isShowingPlayPauseButtonInBars;
-(BOOL)shouldCounterrotateReviewScreenBars;
-(id)newSpecChange;
-(void)_setShouldDisplayProgressIndicators:(BOOL)arg1 ;
-(BOOL)shouldLayoutReviewScreenControlBarVertically;
-(BOOL)shouldUseCompactTitleView;
-(void)_setTileInitialContentMode:(long long)arg1 ;
-(void)_setShouldUseContentGuideInsets:(BOOL)arg1 ;
-(void)_setShouldDisplayAssetExplorerReviewScreenBadges:(BOOL)arg1 ;
-(BOOL)shouldUseUserTransformTiles;
-(BOOL)canDisplayLoadingIndicators;
-(BOOL)shouldDisplayProgressIndicators;
-(void)_setBackgroundColorOverride:(id)arg1 ;
-(void)setShowingPlayPauseButtonInBars:(BOOL)arg1 ;
-(CGSize)progressIndicatorSize;
-(void)_setProgressIndicatorContentInsets:(UIEdgeInsets)arg1 ;
-(UIColor *)backgroundColorOverride;
-(void)_setProgressIndicatorSize:(CGSize)arg1 ;
-(void)_setShouldAutoplayOnAppear:(BOOL)arg1 ;
-(BOOL)allowDoneButton;
-(CGSize)assetExplorerReviewScreenProgressIndicatorSize;
-(CGSize)playButtonSize;
-(BOOL)isPresentedForPreview;
-(double)maximumAccessoryToolbarHeight;
-(void)_setRenderIndicatorSize:(CGSize)arg1 ;
-(BOOL)shouldDisplayEmptyPlaceholder;
-(long long)tileInitialContentMode;
-(void)_setShouldUseUserTransformTiles:(BOOL)arg1 ;
-(void)_setShouldDisplayBufferingIndicators:(BOOL)arg1 ;
-(CGSize)renderIndicatorSize;
@end

