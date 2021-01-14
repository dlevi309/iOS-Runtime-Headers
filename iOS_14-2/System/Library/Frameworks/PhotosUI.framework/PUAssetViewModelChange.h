/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewModelChange.h>

@class PUBrowsingVideoPlayerChange, PUBrowsingIrisPlayerChange, PUBrowsingAnimatedImagePlayerChange;

@interface PUAssetViewModelChange : PUViewModelChange {

	BOOL _assetChanged;
	BOOL _modelTileTransformChanged;
	BOOL _isUserTransformingTileDidChange;
	BOOL _focusValueChanged;
	BOOL _loadingStatusChanged;
	BOOL _saveProgressChanged;
	BOOL _saveStateChanged;
	BOOL _importStateChanged;
	BOOL _forceBadgesVisibleChanged;
	BOOL _badgeInfoChanged;
	BOOL _isUpdatingDisplayedContentChanged;
	BOOL _isFavoriteChanged;
	BOOL _accessoryViewVisibilityChanged;
	BOOL _contentOffsetChanged;
	BOOL _isInEditModeChanged;
	BOOL _toggleCTMChanged;
	BOOL _flippingFullSizeRenderStateChanged;
	BOOL _revealsGainMapImageChanged;
	PUBrowsingVideoPlayerChange* _videoPlayerChange;
	PUBrowsingIrisPlayerChange* _irisPlayerChange;
	PUBrowsingAnimatedImagePlayerChange* _animatedImageChange;

}

@property (assign,setter=_setAssetChanged:,nonatomic) BOOL assetChanged;                                                             //@synthesize assetChanged=_assetChanged - In the implementation block
@property (assign,setter=_setModelTileTransformChanged:,nonatomic) BOOL modelTileTransformChanged;                                   //@synthesize modelTileTransformChanged=_modelTileTransformChanged - In the implementation block
@property (assign,setter=_setUserTransformingTileDidChange:,nonatomic) BOOL isUserTransformingTileDidChange;                         //@synthesize isUserTransformingTileDidChange=_isUserTransformingTileDidChange - In the implementation block
@property (assign,setter=_setFocusValueChanged:,nonatomic) BOOL focusValueChanged;                                                   //@synthesize focusValueChanged=_focusValueChanged - In the implementation block
@property (assign,setter=_setLoadingStatusChanged:,nonatomic) BOOL loadingStatusChanged;                                             //@synthesize loadingStatusChanged=_loadingStatusChanged - In the implementation block
@property (assign,setter=_setSaveProgressChanged:,nonatomic) BOOL saveProgressChanged;                                               //@synthesize saveProgressChanged=_saveProgressChanged - In the implementation block
@property (assign,setter=_setIsUpdatingDisplayedContentChanged:,nonatomic) BOOL isUpdatingDisplayedContentChanged;                   //@synthesize isUpdatingDisplayedContentChanged=_isUpdatingDisplayedContentChanged - In the implementation block
@property (assign,setter=_setIsFavoriteChanged:,nonatomic) BOOL isFavoriteChanged;                                                   //@synthesize isFavoriteChanged=_isFavoriteChanged - In the implementation block
@property (assign,setter=_setBadgeInfoChanged:,nonatomic) BOOL badgeInfoChanged;                                                     //@synthesize badgeInfoChanged=_badgeInfoChanged - In the implementation block
@property (assign,setter=_setAccessoryViewVisibilityChanged:,nonatomic) BOOL accessoryViewVisibilityChanged;                         //@synthesize accessoryViewVisibilityChanged=_accessoryViewVisibilityChanged - In the implementation block
@property (assign,setter=_setContentOffsetChanged:,nonatomic) BOOL contentOffsetChanged;                                             //@synthesize contentOffsetChanged=_contentOffsetChanged - In the implementation block
@property (setter=_setVideoPlayerChange:,nonatomic,retain) PUBrowsingVideoPlayerChange * videoPlayerChange;                          //@synthesize videoPlayerChange=_videoPlayerChange - In the implementation block
@property (assign,setter=_setForceBadgesVisibleChanged:,nonatomic) BOOL forceBadgesVisibleChanged;                                   //@synthesize forceBadgesVisibleChanged=_forceBadgesVisibleChanged - In the implementation block
@property (setter=_setIrisPlayerChange:,nonatomic,retain) PUBrowsingIrisPlayerChange * irisPlayerChange;                             //@synthesize irisPlayerChange=_irisPlayerChange - In the implementation block
@property (assign,setter=_setIsInEditModeChanged:,nonatomic) BOOL isInEditModeChanged;                                               //@synthesize isInEditModeChanged=_isInEditModeChanged - In the implementation block
@property (assign,setter=_setFlippingFullSizeRenderStateChanged:,nonatomic) BOOL flippingFullSizeRenderStateChanged;                 //@synthesize flippingFullSizeRenderStateChanged=_flippingFullSizeRenderStateChanged - In the implementation block
@property (assign,setter=_setToggleCTMChanged:,nonatomic) BOOL toggleCTMChanged;                                                     //@synthesize toggleCTMChanged=_toggleCTMChanged - In the implementation block
@property (assign,nonatomic) BOOL revealsGainMapImageChanged;                                                                        //@synthesize revealsGainMapImageChanged=_revealsGainMapImageChanged - In the implementation block
@property (setter=_setAnimatedImageChange:,nonatomic,retain) PUBrowsingAnimatedImagePlayerChange * animatedImageChange;              //@synthesize animatedImageChange=_animatedImageChange - In the implementation block
@property (assign,setter=_setSaveStateChanged:,nonatomic) BOOL saveStateChanged;                                                     //@synthesize saveStateChanged=_saveStateChanged - In the implementation block
@property (assign,setter=_setImportStateChanged:,nonatomic) BOOL importStateChanged;                                                 //@synthesize importStateChanged=_importStateChanged - In the implementation block
-(BOOL)importStateChanged;
-(BOOL)contentOffsetChanged;
-(BOOL)saveStateChanged;
-(PUBrowsingVideoPlayerChange *)videoPlayerChange;
-(void)_setUserTransformingTileDidChange:(BOOL)arg1 ;
-(void)_setAssetChanged:(BOOL)arg1 ;
-(void)_setVideoPlayerChange:(id)arg1 ;
-(PUBrowsingIrisPlayerChange *)irisPlayerChange;
-(BOOL)isUpdatingDisplayedContentChanged;
-(BOOL)flippingFullSizeRenderStateChanged;
-(BOOL)revealsGainMapImageChanged;
-(void)_setContentOffsetChanged:(BOOL)arg1 ;
-(void)_setFocusValueChanged:(BOOL)arg1 ;
-(BOOL)focusValueChanged;
-(void)_setToggleCTMChanged:(BOOL)arg1 ;
-(void)_setLoadingStatusChanged:(BOOL)arg1 ;
-(void)_setBadgeInfoChanged:(BOOL)arg1 ;
-(void)_setIsInEditModeChanged:(BOOL)arg1 ;
-(BOOL)isUserTransformingTileDidChange;
-(BOOL)isInEditModeChanged;
-(void)_setAccessoryViewVisibilityChanged:(BOOL)arg1 ;
-(void)setRevealsGainMapImageChanged:(BOOL)arg1 ;
-(BOOL)forceBadgesVisibleChanged;
-(PUBrowsingAnimatedImagePlayerChange *)animatedImageChange;
-(void)_setSaveProgressChanged:(BOOL)arg1 ;
-(BOOL)saveProgressChanged;
-(void)_setIsUpdatingDisplayedContentChanged:(BOOL)arg1 ;
-(BOOL)hasChanges;
-(void)_setModelTileTransformChanged:(BOOL)arg1 ;
-(void)_setIsFavoriteChanged:(BOOL)arg1 ;
-(void)_setIrisPlayerChange:(id)arg1 ;
-(BOOL)toggleCTMChanged;
-(void)_setImportStateChanged:(BOOL)arg1 ;
-(void)_setForceBadgesVisibleChanged:(BOOL)arg1 ;
-(BOOL)accessoryViewVisibilityChanged;
-(BOOL)modelTileTransformChanged;
-(void)_setSaveStateChanged:(BOOL)arg1 ;
-(BOOL)badgeInfoChanged;
-(void)_setAnimatedImageChange:(id)arg1 ;
-(BOOL)isFavoriteChanged;
-(BOOL)assetChanged;
-(BOOL)loadingStatusChanged;
-(void)_setFlippingFullSizeRenderStateChanged:(BOOL)arg1 ;
@end
