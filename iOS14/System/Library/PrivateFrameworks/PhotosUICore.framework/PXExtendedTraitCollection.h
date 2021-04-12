/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>

@protocol PXAnonymousTraitCollection, PXAnonymousViewController;
@class NSObject;

@interface PXExtendedTraitCollection : PXObservable {

	struct {
		BOOL viewSize;
		BOOL layoutReferenceSize;
		BOOL traitCollection;
		BOOL layoutSizeClass;
		BOOL layoutDirection;
		BOOL layoutOrientation;
		BOOL contentSizeCategory;
		BOOL displayScale;
		BOOL safeAreaInsets;
		BOOL layoutMargins;
		BOOL userInterfaceIdiom;
		BOOL userInterfaceFeature;
		BOOL userInterfaceStyle;
		BOOL userInterfaceLevel;
		BOOL windowReferenceSize;
		BOOL windowOrientation;
	}  _needsUpdateFlags;
	BOOL _enabled;
	NSObject*<PXAnonymousTraitCollection> _traitCollection;
	long long _layoutSizeClass;
	long long _layoutSizeSubclass;
	long long _layoutOrientation;
	long long _layoutDirection;
	long long _contentSizeCategory;
	long long _userInterfaceIdiom;
	long long _userInterfaceFeature;
	double _displayScale;
	long long _userInterfaceStyle;
	long long _userInterfaceLevel;
	long long _windowOrientation;
	NSObject*<PXAnonymousViewController> _viewController;
	CGSize _layoutReferenceSize;
	CGSize _windowReferenceSize;
	CGSize __viewSize;
	CGSize __pendingViewTransitionSize;
	UIEdgeInsets _safeAreaInsets;
	UIEdgeInsets _layoutMargins;

}

@property (assign,setter=_setViewSize:,nonatomic) CGSize _viewSize;                                                          //@synthesize _viewSize=__viewSize - In the implementation block
@property (assign,setter=_setPendingViewTransitionSize:,nonatomic) CGSize _pendingViewTransitionSize;                        //@synthesize _pendingViewTransitionSize=__pendingViewTransitionSize - In the implementation block
@property (setter=_setTraitCollection:,nonatomic,retain) NSObject*<PXAnonymousTraitCollection> traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,setter=_setLayoutReferenceSize:,nonatomic) CGSize layoutReferenceSize;                                     //@synthesize layoutReferenceSize=_layoutReferenceSize - In the implementation block
@property (assign,setter=_setLayoutSizeClass:,nonatomic) long long layoutSizeClass;                                          //@synthesize layoutSizeClass=_layoutSizeClass - In the implementation block
@property (assign,setter=_setLayoutSizeSubclass:,nonatomic) long long layoutSizeSubclass;                                    //@synthesize layoutSizeSubclass=_layoutSizeSubclass - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                                                                      //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,setter=_setLayoutOrientation:,nonatomic) long long layoutOrientation;                                      //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (assign,nonatomic) long long contentSizeCategory;                                                                  //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,setter=_setUserInterfaceIdiom:,nonatomic) long long userInterfaceIdiom;                                    //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,setter=_setUserInterfaceStyle:,nonatomic) long long userInterfaceStyle;                                    //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (assign,setter=_setUserInterfaceLevel:,nonatomic) long long userInterfaceLevel;                                    //@synthesize userInterfaceLevel=_userInterfaceLevel - In the implementation block
@property (assign,setter=_setUserInterfaceFeature:,nonatomic) long long userInterfaceFeature;                                //@synthesize userInterfaceFeature=_userInterfaceFeature - In the implementation block
@property (assign,setter=_setDisplayScale:,nonatomic) double displayScale;                                                   //@synthesize displayScale=_displayScale - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                                                                    //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                                                                     //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (nonatomic,__weak,readonly) NSObject*<PXAnonymousViewController> viewController;                                   //@synthesize viewController=_viewController - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) CGSize windowReferenceSize;                                                                   //@synthesize windowReferenceSize=_windowReferenceSize - In the implementation block
@property (nonatomic,readonly) long long windowOrientation;                                                                  //@synthesize windowOrientation=_windowOrientation - In the implementation block
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(long long)layoutSizeSubclass;
-(UIEdgeInsets)safeAreaInsets;
-(long long)userInterfaceIdiom;
-(long long)layoutSizeClass;
-(NSObject*<PXAnonymousTraitCollection>)traitCollection;
-(long long)layoutOrientation;
-(void)_invalidateUserInterfaceFeature;
-(double)displayScale;
-(long long)userInterfaceStyle;
-(CGSize)windowReferenceSize;
-(double)displayScaleFromTraitCollection:(id)arg1 ;
-(void)_updateLayoutOrientationIfNeeded;
-(void)viewControllerViewSafeAreaInsetsDidChange;
-(void)viewControllerViewWillAppear;
-(void)_setLayoutSizeClass:(long long)arg1 ;
-(void)_invalidateUserInterfaceLevel;
-(void)_updateViewSizeIfNeeded;
-(void)_invalidateLayoutReferenceSize;
-(id)init;
-(void)_setDisplayScale:(double)arg1 ;
-(void)invalidateLayoutMargins;
-(void)_setUserInterfaceFeature:(long long)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)_setUserInterfaceStyle:(long long)arg1 ;
-(void)_invalidateContentSizeCategory;
-(void)viewControllerViewDidLoad;
-(void)setEnabled:(BOOL)arg1 ;
-(void)didPerformChanges;
-(void)_updateUserInterfaceLevelIfNeeded;
-(id)createTraitCollection;
-(void)_invalidateUserInterfaceStyle;
-(void)_setUserInterfaceIdiom:(long long)arg1 ;
-(void)_setLayoutReferenceSize:(CGSize)arg1 ;
-(void)unregisterObservations;
-(void)_updateIfNeeded;
-(void)_updateDisplayScaleIfNeeded;
-(CGSize)layoutReferenceSize;
-(void)setContentSizeCategory:(long long)arg1 ;
-(void)viewControllerViewLayoutMarginsDidChange;
-(UIEdgeInsets)layoutMargins;
-(void)_setWindowOrientation:(long long)arg1 ;
-(void)invalidateDisplayScale;
-(void)registerObservations;
-(long long)userInterfaceFeature;
-(long long)userInterfaceLevel;
-(void)_updateContentSizeCategoryIfNeeded;
-(void)getContentSizeCategory:(out long long*)arg1 ;
-(long long)contentSizeCategory;
-(void)getLayoutDirection:(out long long*)arg1 ;
-(void)viewControllerLayoutOrientationDidChange;
-(void)viewControllerTraitCollectionDidChange;
-(void)_updateWindowReferenceSizeIfNeeded;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)getUserInterfaceStyle:(out long long*)arg1 ;
-(void)viewControllerViewDidAppear;
-(void)_updateLayoutSizeClassIfNeeded;
-(NSObject*<PXAnonymousViewController>)viewController;
-(void)_viewWillLayoutSubviews;
-(void)getSizeClass:(out long long*)arg1 sizeSubclass:(out long long*)arg2 ;
-(void)_invalidateWindowReferenceSize;
-(void)_invalidateLayoutSizeClass;
-(void)_setViewSize:(CGSize)arg1 ;
-(void)invalidateTraitCollection;
-(void)invalidateSafeAreaInsets;
-(void)_updateLayoutDirectionIfNeeded;
-(void)_setPendingViewTransitionSize:(CGSize)arg1 ;
-(void)_updateUserInterfaceFeatureIfNeeded;
-(void)_invalidateUserInterfaceIdiom;
-(CGSize)_pendingViewTransitionSize;
-(void)_updateUserInterfaceStyleIfNeeded;
-(void)_setLayoutSizeSubclass:(long long)arg1 ;
-(void)_setLayoutOrientation:(long long)arg1 ;
-(void)_setTraitCollection:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)getUserInterfaceLevel:(out long long*)arg1 ;
-(id)mutableChangeObject;
-(void)_updateSafeAreaInsetsIfNeeded;
-(long long)userInterfaceFeatureForViewController:(id)arg1 ;
-(BOOL)isEnabled;
-(void)_updateLayoutReferenceSizeIfNeeded;
-(void)getUserInterfaceIdiom:(out long long*)arg1 ;
-(void)setLayoutDirection:(long long)arg1 ;
-(void)_setNeedsUpdate;
-(void)viewControllerViewWillLayoutSubviews;
-(void)_invalidateLayoutDirection;
-(CGSize)_viewSize;
-(void)_updateLayoutMarginsIfNeeded;
-(void)_updateWindowOrientationIfNeeded;
-(long long)windowOrientation;
-(void)_setWindowReferenceSize:(CGSize)arg1 ;
-(void)viewControllerViewWillTransitionToSize:(CGSize)arg1 ;
-(long long)layoutDirection;
-(void)viewControllerDidMoveToParentViewController:(id)arg1 ;
-(void)_setUserInterfaceLevel:(long long)arg1 ;
-(void)_invalidateWindowOrientation;
-(void)_updateUserInterfaceIdiomIfNeeded;
-(void)dealloc;
-(void)_updateTraitCollectionIfNeeded;
-(void)_invalidateViewSize;
-(void)_invalidateLayoutOrientation;
@end

