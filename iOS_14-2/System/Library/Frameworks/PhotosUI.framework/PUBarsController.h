/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUBarsControllerDelegate;
#import <PhotosUI/PhotosUI-Structs.h>
@class UIViewController;

@interface PUBarsController : NSObject {

	struct {
		BOOL respondsToViewController;
		BOOL respondsToViewHostingGestureRecognizers;
		BOOL respondsToContentGuideInsetsDidChange;
	}  _delegateFlags;
	BOOL __needsUpdateBars;
	BOOL __needsUpdateGestureRecognizers;
	BOOL __needsUpdateContentGuideInsets;
	BOOL __isUpdateScheduled;
	id<PUBarsControllerDelegate> _delegate;
	long long __updateBarsDisabledCount;
	UIViewController* _viewController;
	UIEdgeInsets _contentGuideInsets;

}

@property (assign,setter=_setNeedsUpdateBars:,nonatomic) BOOL _needsUpdateBars;                                          //@synthesize _needsUpdateBars=__needsUpdateBars - In the implementation block
@property (assign,setter=_setNeedsUpdateGestureRecognizers:,nonatomic) BOOL _needsUpdateGestureRecognizers;              //@synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers - In the implementation block
@property (assign,setter=_setNeedsUpdateContentGuideInsets:,nonatomic) BOOL _needsUpdateContentGuideInsets;              //@synthesize _needsUpdateContentGuideInsets=__needsUpdateContentGuideInsets - In the implementation block
@property (assign,setter=_setUpdateScheduled:,nonatomic) BOOL _isUpdateScheduled;                                        //@synthesize _isUpdateScheduled=__isUpdateScheduled - In the implementation block
@property (assign,setter=_setUpdateBarsDisabledCount:,nonatomic) long long _updateBarsDisabledCount;                     //@synthesize _updateBarsDisabledCount=__updateBarsDisabledCount - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                                   //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentGuideInsets;                                                            //@synthesize contentGuideInsets=_contentGuideInsets - In the implementation block
@property (assign,nonatomic,__weak) id<PUBarsControllerDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL prefersStatusBarHidden; 
@property (nonatomic,readonly) BOOL wantsNavigationBarVisible; 
@property (nonatomic,readonly) BOOL wantsToolbarVisible; 
@property (nonatomic,readonly) long long preferredBarStyle; 
-(BOOL)prefersStatusBarHidden;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)init;
-(BOOL)_isUpdateScheduled;
-(UIEdgeInsets)contentGuideInsets;
-(id<PUBarsControllerDelegate>)delegate;
-(void)_updateNowIfNeeded;
-(void)updateContentGuideInsets;
-(void)updateGestureRecognizersWithHostingView:(id)arg1 ;
-(void)updateBars;
-(long long)preferredBarStyle;
-(void)invalidateBars;
-(BOOL)isLocationFromProviderInBarsArea:(id)arg1 ;
-(void)_updateBarsIfNeeded;
-(void)invalidateContentGuideInsets;
-(void)_updateContentGuideInsetsIfNeeded;
-(BOOL)_isUpdateBarsDisabled;
-(void)_reenableUpdateBars;
-(void)disableUpdateBarsForDuration:(double)arg1 ;
-(BOOL)_needsUpdateBars;
-(void)_setNeedsUpdateBars:(BOOL)arg1 ;
-(BOOL)_needsUpdateContentGuideInsets;
-(void)_setNeedsUpdateContentGuideInsets:(BOOL)arg1 ;
-(long long)_updateBarsDisabledCount;
-(void)_setUpdateBarsDisabledCount:(long long)arg1 ;
-(void)updateIfNeeded;
-(void)setDelegate:(id<PUBarsControllerDelegate>)arg1 ;
-(void)setContentGuideInsets:(UIEdgeInsets)arg1 ;
-(UIViewController *)viewController;
-(BOOL)wantsNavigationBarVisible;
-(void)invalidateViewControllerView;
-(BOOL)_needsUpdate;
-(void)_setNeedsUpdateGestureRecognizers:(BOOL)arg1 ;
-(void)_invalidateGestureRecognizers;
-(void)_setNeedsUpdate;
-(void)_setUpdateScheduled:(BOOL)arg1 ;
-(BOOL)wantsToolbarVisible;
-(void)_updateGestureRecognizersIfNeeded;
-(void)invalidateViewHostingGestureRecognizers;
-(BOOL)_needsUpdateGestureRecognizers;
@end

