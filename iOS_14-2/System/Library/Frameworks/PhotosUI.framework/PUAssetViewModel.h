/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewModel.h>
#import <libobjc.A.dylib/PUBrowsingIrisPlayerChangeObserver.h>
#import <libobjc.A.dylib/PUAssetSharedViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingAnimatedImagePlayerChangeObserver.h>

@protocol PUDisplayAsset, OS_dispatch_group;
@class PUBrowsingVideoPlayer, PUBrowsingIrisPlayer, PUBrowsingAnimatedImagePlayer, PUModelTileTransform, PUOperationStatus, NSProgress, NSObject, PUBadgeInfoPromise, PUMediaProvider, NSNumber, PUAssetReference, PUAssetSharedViewModel, PUAssetViewModelChange, NSString;

@interface PUAssetViewModel : PUViewModel <PUBrowsingIrisPlayerChangeObserver, PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUBrowsingAnimatedImagePlayerChangeObserver> {

	PUBrowsingVideoPlayer* _videoPlayer;
	PUBrowsingIrisPlayer* _irisPlayer;
	PUBrowsingAnimatedImagePlayer* _animatedImagePlayer;
	SCD_Struct_PU17 _isValid;
	BOOL _isUserTransformingTile;
	BOOL _forceBadgesVisible;
	BOOL _isUpdatingDisplayedContent;
	BOOL _isFavorite;
	BOOL _accessoryViewVisible;
	BOOL _lowMemoryMode;
	BOOL _toggleCTM;
	BOOL _revealsGainMapImage;
	BOOL __needsUpdateVideoPlayers;
	id<PUDisplayAsset> _asset;
	PUModelTileTransform* _modelTileTransform;
	double _focusValue;
	PUOperationStatus* _loadingStatus;
	NSProgress* _saveProgress;
	long long _saveState;
	long long _importState;
	NSObject*<OS_dispatch_group> _displayedContentUpdateGroup;
	PUBadgeInfoPromise* _badgeInfoPromise;
	long long _lastAccessoryViewVisibilityChangeReason;
	long long _lastContentOffsetChangeReason;
	double _contentOffsetOverrideFactor;
	long long _editStyle;
	long long _lastEditStyleChangeReason;
	long long _flippingFullSizeRenderState;
	long long __currentFavoriteOverrideRequest;
	long long _displayedContentUpdateCount;
	PUMediaProvider* _mediaProvider;
	NSNumber* _isFavoriteOverride;
	PUAssetReference* _assetReference;
	PUAssetSharedViewModel* _assetSharedViewModel;
	CGPoint _preferredContentOffset;
	CGPoint _overridingContentOffset;

}

@property (nonatomic,readonly) PUAssetViewModelChange * currentChange; 
@property (nonatomic,readonly) PUAssetViewModelChange * currentChangeIfExists; 
@property (assign,setter=_setNeedsUpdateVideoPlayers:,nonatomic) BOOL _needsUpdateVideoPlayers;                                                  //@synthesize _needsUpdateVideoPlayers=__needsUpdateVideoPlayers - In the implementation block
@property (assign,setter=_setFavorite:,nonatomic) BOOL isFavorite;                                                                               //@synthesize isFavorite=_isFavorite - In the implementation block
@property (assign,setter=_setCurrentFavoriteOverrideRequest:,nonatomic) long long _currentFavoriteOverrideRequest;                               //@synthesize _currentFavoriteOverrideRequest=__currentFavoriteOverrideRequest - In the implementation block
@property (assign,setter=_setLastAccessoryViewVisibilityChangeReason:,nonatomic) long long lastAccessoryViewVisibilityChangeReason;              //@synthesize lastAccessoryViewVisibilityChangeReason=_lastAccessoryViewVisibilityChangeReason - In the implementation block
@property (assign,setter=_setLastContentOffsetChangeReason:,nonatomic) long long lastContentOffsetChangeReason;                                  //@synthesize lastContentOffsetChangeReason=_lastContentOffsetChangeReason - In the implementation block
@property (nonatomic,copy) PUOperationStatus * loadingStatus;                                                                                    //@synthesize loadingStatus=_loadingStatus - In the implementation block
@property (nonatomic,retain) NSProgress * saveProgress;                                                                                          //@synthesize saveProgress=_saveProgress - In the implementation block
@property (assign,nonatomic) long long displayedContentUpdateCount;                                                                              //@synthesize displayedContentUpdateCount=_displayedContentUpdateCount - In the implementation block
@property (assign,nonatomic) BOOL isUpdatingDisplayedContent;                                                                                    //@synthesize isUpdatingDisplayedContent=_isUpdatingDisplayedContent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> displayedContentUpdateGroup;                                                           //@synthesize displayedContentUpdateGroup=_displayedContentUpdateGroup - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> asset;                                                                                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) PUMediaProvider * mediaProvider;                                                                                    //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (assign,nonatomic) double focusValue;                                                                                                  //@synthesize focusValue=_focusValue - In the implementation block
@property (nonatomic,copy) PUBadgeInfoPromise * badgeInfoPromise;                                                                                //@synthesize badgeInfoPromise=_badgeInfoPromise - In the implementation block
@property (assign,nonatomic) BOOL forceBadgesVisible;                                                                                            //@synthesize forceBadgesVisible=_forceBadgesVisible - In the implementation block
@property (assign,nonatomic) long long importState;                                                                                              //@synthesize importState=_importState - In the implementation block
@property (nonatomic,copy) NSNumber * isFavoriteOverride;                                                                                        //@synthesize isFavoriteOverride=_isFavoriteOverride - In the implementation block
@property (nonatomic,retain) PUAssetReference * assetReference;                                                                                  //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,retain) PUAssetSharedViewModel * assetSharedViewModel;                                                                      //@synthesize assetSharedViewModel=_assetSharedViewModel - In the implementation block
@property (nonatomic,copy) PUModelTileTransform * modelTileTransform;                                                                            //@synthesize modelTileTransform=_modelTileTransform - In the implementation block
@property (assign,setter=setUserTransformingTile:,nonatomic) BOOL isUserTransformingTile;                                                        //@synthesize isUserTransformingTile=_isUserTransformingTile - In the implementation block
@property (nonatomic,readonly) PUBrowsingVideoPlayer * videoPlayer; 
@property (nonatomic,readonly) PUBrowsingIrisPlayer * irisPlayer; 
@property (nonatomic,readonly) PUBrowsingAnimatedImagePlayer * animatedImagePlayer; 
@property (nonatomic,readonly) long long saveState;                                                                                              //@synthesize saveState=_saveState - In the implementation block
@property (assign,getter=isAccessoryViewVisible,nonatomic) BOOL accessoryViewVisible;                                                            //@synthesize accessoryViewVisible=_accessoryViewVisible - In the implementation block
@property (nonatomic,readonly) CGPoint contentOffset; 
@property (assign,nonatomic) CGPoint preferredContentOffset;                                                                                     //@synthesize preferredContentOffset=_preferredContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint overridingContentOffset;                                                                                    //@synthesize overridingContentOffset=_overridingContentOffset - In the implementation block
@property (assign,nonatomic) double contentOffsetOverrideFactor;                                                                                 //@synthesize contentOffsetOverrideFactor=_contentOffsetOverrideFactor - In the implementation block
@property (nonatomic,readonly) BOOL isInEditMode; 
@property (nonatomic,readonly) long long editStyle;                                                                                              //@synthesize editStyle=_editStyle - In the implementation block
@property (nonatomic,readonly) long long lastEditStyleChangeReason;                                                                              //@synthesize lastEditStyleChangeReason=_lastEditStyleChangeReason - In the implementation block
@property (nonatomic,readonly) BOOL lowMemoryMode;                                                                                               //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (assign,nonatomic) BOOL toggleCTM;                                                                                                     //@synthesize toggleCTM=_toggleCTM - In the implementation block
@property (assign,nonatomic) long long flippingFullSizeRenderState;                                                                              //@synthesize flippingFullSizeRenderState=_flippingFullSizeRenderState - In the implementation block
@property (assign,nonatomic) BOOL revealsGainMapImage;                                                                                           //@synthesize revealsGainMapImage=_revealsGainMapImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLoadingStatus:(PUOperationStatus *)arg1 ;
-(void)setMediaProvider:(PUMediaProvider *)arg1 ;
-(void)setAssetReference:(PUAssetReference *)arg1 ;
-(long long)saveState;
-(void)registerChangeObserver:(id)arg1 ;
-(PUAssetViewModelChange *)currentChange;
-(void)setSaveState:(long long)arg1 ;
-(BOOL)isFavorite;
-(BOOL)forceBadgesVisible;
-(void)setAsset:(id<PUDisplayAsset>)arg1 ;
-(PUMediaProvider *)mediaProvider;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_setLastContentOffsetChangeReason:(long long)arg1 ;
-(void)setAccessoryViewVisible:(BOOL)arg1 changeReason:(long long)arg2 ;
-(NSNumber *)isFavoriteOverride;
-(void)unregisterChangeObserver:(id)arg1 ;
-(id)init;
-(BOOL)isInEditMode;
-(void)setUserTransformingTile:(BOOL)arg1 ;
-(long long)displayedContentUpdateCount;
-(void)_pauseAndRewindVideoIfNeeded;
-(double)focusValue;
-(id<PUDisplayAsset>)asset;
-(void)setIsFavoriteOverride:(NSNumber *)arg1 ;
-(void)setFlippingFullSizeRenderState:(long long)arg1 ;
-(void)_handleBrowsingAnimatedImage:(id)arg1 didChange:(id)arg2 ;
-(BOOL)toggleCTM;
-(void)didPerformChanges;
-(void)setFocusValue:(double)arg1 ;
-(void)setContentOffsetOverrideFactor:(double)arg1 ;
-(PUModelTileTransform *)modelTileTransform;
-(void)setOverridingContentOffset:(CGPoint)arg1 ;
-(void)setModelTileTransform:(PUModelTileTransform *)arg1 ;
-(void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2 ;
-(void)_setLastAccessoryViewVisibilityChangeReason:(long long)arg1 ;
-(long long)lastEditStyleChangeReason;
-(PUBrowsingVideoPlayer *)videoPlayer;
-(BOOL)isAccessoryViewVisible;
-(long long)flippingFullSizeRenderState;
-(long long)importState;
-(void)setAssetSharedViewModel:(PUAssetSharedViewModel *)arg1 ;
-(void)_handleBrowsingVideoPlayer:(id)arg1 didChange:(id)arg2 ;
-(PUBadgeInfoPromise *)badgeInfoPromise;
-(void)_updateVideoPlayersIfNeeded;
-(long long)lastContentOffsetChangeReason;
-(BOOL)revealsGainMapImage;
-(NSProgress *)saveProgress;
-(void)willUpdateDisplayedContent;
-(PUBrowsingIrisPlayer *)irisPlayer;
-(void)setForceBadgesVisible:(BOOL)arg1 ;
-(void)_setFavorite:(BOOL)arg1 ;
-(CGPoint)preferredContentOffset;
-(long long)lastAccessoryViewVisibilityChangeReason;
-(id)debugDetailedDescription;
-(void)_updateFavoriteState;
-(void)setImportState:(long long)arg1 ;
-(void)setEditStyle:(long long)arg1 changeReason:(long long)arg2 ;
-(PUAssetViewModelChange *)currentChangeIfExists;
-(void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2 ;
-(void)setPreferredContentOffset:(CGPoint)arg1 ;
-(double)contentOffsetOverrideFactor;
-(void)setIsUpdatingDisplayedContent:(BOOL)arg1 ;
-(id)initWithLowMemoryMode:(BOOL)arg1 ;
-(void)_setCurrentFavoriteOverrideRequest:(long long)arg1 ;
-(PUAssetSharedViewModel *)assetSharedViewModel;
-(PUOperationStatus *)loadingStatus;
-(long long)editStyle;
-(void)setDisplayedContentUpdateCount:(long long)arg1 ;
-(PUAssetReference *)assetReference;
-(void)didUpdateDisplayedContent;
-(BOOL)lowMemoryMode;
-(void)setDisplayedContentUpdateGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(CGPoint)overridingContentOffset;
-(CGPoint)contentOffset;
-(void)setAccessoryViewVisible:(BOOL)arg1 ;
-(id)newViewModelChange;
-(PUBrowsingAnimatedImagePlayer *)animatedImagePlayer;
-(BOOL)_needsUpdateVideoPlayers;
-(NSObject*<OS_dispatch_group>)displayedContentUpdateGroup;
-(void)_invalidateVideoPlayers;
-(void)setToggleCTM:(BOOL)arg1 ;
-(void)_setNeedsUpdateVideoPlayers:(BOOL)arg1 ;
-(void)setSaveProgress:(NSProgress *)arg1 ;
-(void)_updatePropertiesFromAssetSharedViewModel;
-(long long)_currentFavoriteOverrideRequest;
-(void)setPreferredContentOffset:(CGPoint)arg1 changeReason:(long long)arg2 ;
-(void)resetContentOffset;
-(void)_updateVideoPlayersLoadingAllowedIfNeeded;
-(BOOL)isUpdatingDisplayedContent;
-(BOOL)_shouldPauseAndRewindVideo;
-(void)dealloc;
-(BOOL)isUserTransformingTile;
-(void)setBadgeInfoPromise:(PUBadgeInfoPromise *)arg1 ;
-(void)setRevealsGainMapImage:(BOOL)arg1 ;
@end

