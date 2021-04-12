/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherWallpaperPageContentView.h>
#import <libobjc.A.dylib/SBAppSwitcherSnapshotImageCacheObserver.h>
#import <libobjc.A.dylib/SBReusableView.h>
#import <libobjc.A.dylib/SBAppSwitcherPageContentView.h>

@protocol SBAppSwitcherReusableSnapshotViewDelegate;
@class SBOrientationTransformWrapperView, SBSwitcherSnapshotImageView, UIViewController, NSMutableDictionary, CAShapeLayer, UIView, SBAppSwitcherSnapshotImageCache, SBAppSwitcherSnapshotLockoutViewControllerProvider, SBAppSwitcherSettings, SBMedusaSettings, NSMutableArray, SBAppLayout, NSString;

@interface SBAppSwitcherReusableSnapshotView : SBSwitcherWallpaperPageContentView <SBAppSwitcherSnapshotImageCacheObserver, SBReusableView, SBAppSwitcherPageContentView> {

	SBOrientationTransformWrapperView* _firstOrientationWrapper;
	SBOrientationTransformWrapperView* _secondOrientationWrapper;
	SBSwitcherSnapshotImageView* _firstImageView;
	SBSwitcherSnapshotImageView* _secondImageView;
	UIViewController* _containerViewController;
	id<SBAppSwitcherReusableSnapshotViewDelegate> _delegate;
	NSMutableDictionary* _snapshotViewStateByRole;
	NSMutableDictionary* _lockoutViewControllerByRole;
	CAShapeLayer* _medusaDividerLayer;
	UIView* _solidColorBackstopView;
	SBAppSwitcherSnapshotImageCache* _snapshotCache;
	SBAppSwitcherSnapshotLockoutViewControllerProvider* _lockoutVCProvider;
	SBAppSwitcherSettings* _settings;
	SBMedusaSettings* _medusaSettings;
	BOOL _shouldUseBrightMaterial;
	BOOL _showingIconOverlayView;
	NSMutableArray* _deferredSnapshotCrossfadeQueue;
	BOOL _active;
	BOOL _visible;
	SBAppLayout* _appLayout;

}

@property (nonatomic,retain) SBAppLayout * appLayout;                         //@synthesize appLayout=_appLayout - In the implementation block
@property (assign,nonatomic) BOOL shouldUseBrightMaterial;                    //@synthesize shouldUseBrightMaterial=_shouldUseBrightMaterial - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,readonly) BOOL contentRequiresGroupOpacity; 
@property (assign,getter=isActive,nonatomic) BOOL active;                     //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                   //@synthesize visible=_visible - In the implementation block
-(NSString *)description;
-(void)invalidate;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setOrientation:(long long)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(BOOL)contentRequiresGroupOpacity;
-(SBAppLayout *)appLayout;
-(void)setAppLayout:(SBAppLayout *)arg1 ;
-(void)setShouldUseBrightMaterial:(BOOL)arg1 ;
-(void)setShowingIconOverlayView:(BOOL)arg1 ;
-(BOOL)shouldUseBrightMaterial;
-(void)_handleInstalledAppsChanged:(id)arg1 ;
-(void)didUpdateCacheEntry:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 snapshotCache:(id)arg2 lockoutVCProvider:(id)arg3 containerViewController:(id)arg4 ;
-(id)_cacheEntryForRole:(long long)arg1 ;
-(id)_imageViewForRole:(long long)arg1 ;
-(void)_updateCornerRadiusIfNecessaryForSnapshotImageView:(id)arg1 cacheEntry:(id)arg2 ;
-(void)_updateCornerRadiusIfNecessaryForLockoutView:(id)arg1 matchingSnapshotImage:(id)arg2 ;
-(void)_updateContentOrientationForRole:(long long)arg1 ;
-(void)_setSceneHandle:(id)arg1 forRole:(long long)arg2 ;
-(void)_configureSnapshotImageView:(id)arg1 cacheEntry:(id)arg2 ;
-(void)_addAppLockoutOverlayIfNecessaryForRole:(long long)arg1 ;
-(void)_removeAppLockoutOverlayForRole:(long long)arg1 ;
-(void)_requestFreshImages;
-(CGRect)_frameForBackstopLayer;
-(CGRect)_snapshotImageFrameForCacheEntry:(id)arg1 ;
-(id)_orientationWrapperForRole:(long long)arg1 ;
-(void)_updateDivider;
-(void)_setCacheEntry:(id)arg1 forRole:(long long)arg2 ;
-(void)_setAnimatingTransition:(BOOL)arg1 forRole:(long long)arg2 ;
-(void)_updateTranslucency;
-(void)_updateToNewSnapshotImageUsingCacheEntry:(id)arg1 ;
-(id)_applicationForRole:(long long)arg1 ;
-(id)_sceneHandleForRole:(long long)arg1 ;
-(CGRect)_frameInLayoutSpaceForRole:(long long)arg1 inAppLayout:(id)arg2 inOrientation:(long long)arg3 ;
-(long long)_contentOrientationForSnapshotOrientation:(long long)arg1 ;
-(BOOL)_isAnimatingTransitionForRole:(long long)arg1 ;
-(void)_performDeferredSnapshotUpdatesIfNecessaryForRole:(long long)arg1 ;
@end

