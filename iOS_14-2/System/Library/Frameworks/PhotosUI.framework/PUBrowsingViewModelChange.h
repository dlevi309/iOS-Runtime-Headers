/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewModelChange.h>

@class NSMutableDictionary, NSMapTable, NSDictionary;

@interface PUBrowsingViewModelChange : PUViewModelChange {

	NSMutableDictionary* _mutableViewModelChangesByAssetReference;
	NSMapTable* _mutableSharedViewModelChangesByAsset;
	BOOL _assetsDataSourceDidChange;
	BOOL _currentAssetDidChange;
	BOOL _currentAssetTransitionProgressDidChange;
	BOOL _transitionDriverIdentifierDidChange;
	BOOL _browsingSpeedRegimeDidChange;
	BOOL _isScrubbingDidChange;
	BOOL _isScrollingDidChange;
	BOOL _isAnimatingAnyTransitionDidChange;
	BOOL _secondScreenSizeDidChange;
	BOOL _chromeVisibilityDidChange;
	BOOL _presentingOverOneUpDidChange;
	BOOL _reviewScreenBarsModelDidChange;
	BOOL _videoOverlayPlayStateDidChange;
	BOOL _isAttemptingToPlayVideoOverlayDidChange;
	BOOL _isScrubbingActivationDidChange;
	BOOL _isVideoContentAllowedDidChange;
	BOOL _reviewScreenSelectionDidChange;
	BOOL _navigationBarTitleDidChange;
	BOOL _resizeTaskDescriptorViewModelDidChange;

}

@property (assign,setter=_setAssetsDataSourceDidChange:,nonatomic) BOOL assetsDataSourceDidChange;                                          //@synthesize assetsDataSourceDidChange=_assetsDataSourceDidChange - In the implementation block
@property (assign,setter=_setCurrentAssetDidChange:,nonatomic) BOOL currentAssetDidChange;                                                  //@synthesize currentAssetDidChange=_currentAssetDidChange - In the implementation block
@property (assign,setter=_setCurrentAssetTransitionProgressDidChange:,nonatomic) BOOL currentAssetTransitionProgressDidChange;              //@synthesize currentAssetTransitionProgressDidChange=_currentAssetTransitionProgressDidChange - In the implementation block
@property (assign,setter=_setBrowsingSpeedRegimeDidChange:,nonatomic) BOOL browsingSpeedRegimeDidChange;                                    //@synthesize browsingSpeedRegimeDidChange=_browsingSpeedRegimeDidChange - In the implementation block
@property (assign,setter=_setIsScrubbingDidChange:,nonatomic) BOOL isScrubbingDidChange;                                                    //@synthesize isScrubbingDidChange=_isScrubbingDidChange - In the implementation block
@property (assign,setter=_setIsScrollingDidChange:,nonatomic) BOOL isScrollingDidChange;                                                    //@synthesize isScrollingDidChange=_isScrollingDidChange - In the implementation block
@property (assign,setter=_setAnimatingAnyTransitionDidChange:,nonatomic) BOOL isAnimatingAnyTransitionDidChange;                            //@synthesize isAnimatingAnyTransitionDidChange=_isAnimatingAnyTransitionDidChange - In the implementation block
@property (assign,setter=_setSecondScreenSizeDidChange:,nonatomic) BOOL secondScreenSizeDidChange;                                          //@synthesize secondScreenSizeDidChange=_secondScreenSizeDidChange - In the implementation block
@property (assign,setter=_setTransitionDriverIdentifierDidChange:,nonatomic) BOOL transitionDriverIdentifierDidChange;                      //@synthesize transitionDriverIdentifierDidChange=_transitionDriverIdentifierDidChange - In the implementation block
@property (assign,setter=_setChromeVisibilityDidChange:,nonatomic) BOOL chromeVisibilityDidChange;                                          //@synthesize chromeVisibilityDidChange=_chromeVisibilityDidChange - In the implementation block
@property (assign,setter=_setPresentingOverOneUpDidChange:,nonatomic) BOOL presentingOverOneUpDidChange;                                    //@synthesize presentingOverOneUpDidChange=_presentingOverOneUpDidChange - In the implementation block
@property (assign,setter=_setReviewScreenBarsModelDidChange:,nonatomic) BOOL reviewScreenBarsModelDidChange;                                //@synthesize reviewScreenBarsModelDidChange=_reviewScreenBarsModelDidChange - In the implementation block
@property (assign,setter=_setVideoOverlayPlayStateDidChange:,nonatomic) BOOL videoOverlayPlayStateDidChange;                                //@synthesize videoOverlayPlayStateDidChange=_videoOverlayPlayStateDidChange - In the implementation block
@property (assign,setter=_setIsAttemptingToPlayVideoOverlayDidChange:,nonatomic) BOOL isAttemptingToPlayVideoOverlayDidChange;              //@synthesize isAttemptingToPlayVideoOverlayDidChange=_isAttemptingToPlayVideoOverlayDidChange - In the implementation block
@property (assign,setter=_setIsScrubbingActivationDidChange:,nonatomic) BOOL isScrubbingActivationDidChange;                                //@synthesize isScrubbingActivationDidChange=_isScrubbingActivationDidChange - In the implementation block
@property (assign,nonatomic) BOOL isVideoContentAllowedDidChange;                                                                           //@synthesize isVideoContentAllowedDidChange=_isVideoContentAllowedDidChange - In the implementation block
@property (assign,setter=_setReviewScreenSelectionDidChange:,nonatomic) BOOL reviewScreenSelectionDidChange;                                //@synthesize reviewScreenSelectionDidChange=_reviewScreenSelectionDidChange - In the implementation block
@property (assign,setter=_setNavigationBarTitleDidChange:,nonatomic) BOOL navigationBarTitleDidChange;                                      //@synthesize navigationBarTitleDidChange=_navigationBarTitleDidChange - In the implementation block
@property (assign,setter=_setResizeTaskDescriptorViewModelDidChange:,nonatomic) BOOL resizeTaskDescriptorViewModelDidChange;                //@synthesize resizeTaskDescriptorViewModelDidChange=_resizeTaskDescriptorViewModelDidChange - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _mutableViewModelChangesByAssetReference; 
@property (nonatomic,readonly) NSMapTable * _mutableSharedViewModelChangesByAsset; 
@property (nonatomic,readonly) NSMapTable * assetSharedViewModelChangesByAsset; 
@property (nonatomic,readonly) NSDictionary * assetViewModelChangesByAssetReference; 
-(void)setIsVideoContentAllowedDidChange:(BOOL)arg1 ;
-(BOOL)reviewScreenSelectionDidChange;
-(BOOL)navigationBarTitleDidChange;
-(BOOL)isAttemptingToPlayVideoOverlayDidChange;
-(void)_setNavigationBarTitleDidChange:(BOOL)arg1 ;
-(void)_setIsAttemptingToPlayVideoOverlayDidChange:(BOOL)arg1 ;
-(BOOL)presentingOverOneUpDidChange;
-(void)_setReviewScreenBarsModelDidChange:(BOOL)arg1 ;
-(BOOL)secondScreenSizeDidChange;
-(BOOL)isVideoContentAllowedDidChange;
-(NSMapTable *)_mutableSharedViewModelChangesByAsset;
-(void)_setIsScrubbingDidChange:(BOOL)arg1 ;
-(BOOL)currentAssetDidChange;
-(BOOL)transitionDriverIdentifierDidChange;
-(BOOL)isScrubbingActivationDidChange;
-(NSMutableDictionary *)_mutableViewModelChangesByAssetReference;
-(void)_setPresentingOverOneUpDidChange:(BOOL)arg1 ;
-(NSMapTable *)assetSharedViewModelChangesByAsset;
-(void)_setAssetsDataSourceDidChange:(BOOL)arg1 ;
-(BOOL)resizeTaskDescriptorViewModelDidChange;
-(void)_setResizeTaskDescriptorViewModelDidChange:(BOOL)arg1 ;
-(void)_setCurrentAssetTransitionProgressDidChange:(BOOL)arg1 ;
-(BOOL)assetsDataSourceDidChange;
-(BOOL)isScrollingDidChange;
-(BOOL)hasChanges;
-(void)_setAnimatingAnyTransitionDidChange:(BOOL)arg1 ;
-(void)_setChromeVisibilityDidChange:(BOOL)arg1 ;
-(BOOL)isAnimatingAnyTransitionDidChange;
-(BOOL)currentAssetTransitionProgressDidChange;
-(BOOL)reviewScreenBarsModelDidChange;
-(void)_setSecondScreenSizeDidChange:(BOOL)arg1 ;
-(BOOL)chromeVisibilityDidChange;
-(BOOL)browsingSpeedRegimeDidChange;
-(void)_setTransitionDriverIdentifierDidChange:(BOOL)arg1 ;
-(void)_setCurrentAssetDidChange:(BOOL)arg1 ;
-(void)_setIsScrollingDidChange:(BOOL)arg1 ;
-(void)_setReviewScreenSelectionDidChange:(BOOL)arg1 ;
-(BOOL)videoOverlayPlayStateDidChange;
-(BOOL)isScrubbingDidChange;
-(NSDictionary *)assetViewModelChangesByAssetReference;
-(void)_setIsScrubbingActivationDidChange:(BOOL)arg1 ;
-(void)_setBrowsingSpeedRegimeDidChange:(BOOL)arg1 ;
-(void)_setVideoOverlayPlayStateDidChange:(BOOL)arg1 ;
@end

