/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBWallpaperPresenting <NSObject>
@property (assign,nonatomic,__weak) id<SBWallpaperPresentingDelegate> wallpaperPresentingDelegate; 
@property (assign,nonatomic) long long variant; 
@property (nonatomic,readonly) double homescreenWallpaperScale; 
@property (nonatomic,readonly) double minimumHomescreenWallpaperScale; 
@property (assign,nonatomic) double lockscreenWallpaperScale; 
@property (nonatomic,readonly) double minimumLockscreenWallpaperScale; 
@property (nonatomic,readonly) id<SBFIrisWallpaperView> irisWallpaperView; 
@property (nonatomic,readonly) SCD_Struct_SB20 currentHomescreenStyleTransitionState; 
@optional
-(void)noteWillAnimateToInterfaceOrientation:(long long)arg1;
-(void)noteDidRotateFromInterfaceOrientation:(long long)arg1;

@required
-(id)beginRequiringWithReason:(id)arg1;
-(double)minimumLockscreenWallpaperScale;
-(id)suspendColorSamplingForReason:(id)arg1;
-(void)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;
-(id)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;
-(void)preheatWallpaperForVariant:(long long)arg1;
-(void)setLockscreenWallpaperScale:(double)arg1;
-(BOOL)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;
-(BOOL)setWallpaperStyleTransitionState:(SCD_Struct_SB20)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;
-(id)newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 transformOptions:(unsigned long long)arg3;
-(void)setAlpha:(double)arg1 forWallpaperVariant:(long long)arg2;
-(void)setDisallowsRasterization:(BOOL)arg1 forVariant:(long long)arg2 withReason:(id)arg3;
-(BOOL)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(id)arg3;
-(double)lockscreenWallpaperScale;
-(id<SBFIrisWallpaperView>)irisWallpaperView;
-(void)setWallpaperHidden:(BOOL)arg1 variant:(long long)arg2 reason:(id)arg3;
-(void)setVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(/*^block*/id)arg4;
-(double)minimumHomescreenWallpaperScale;
-(void)addObserver:(id)arg1 forVariant:(long long)arg2;
-(void)setWallpaperPresentingDelegate:(id)arg1;
-(void)cancelInProcessAnimations;
-(void)updateWallpaperForLocations:(long long)arg1 wallpaperMode:(long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)updateWallpaperForLocations:(long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)setLockscreenWallpaperContentsRect:(CGRect)arg1;
-(id<SBWallpaperPresentingDelegate>)wallpaperPresentingDelegate;
-(void)removeObserver:(id)arg1 forVariant:(long long)arg2;
-(id)suspendWallpaperAnimationForReason:(id)arg1;
-(void)updateIrisWallpaperForInteractiveMode;
-(double)homescreenWallpaperScale;
-(BOOL)updateIrisWallpaperForStaticMode;
-(void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2;
-(void)beginDelayingHomescreenStyleChangesForReason:(id)arg1;
-(SCD_Struct_SB20)currentHomescreenStyleTransitionState;
-(void)setLockscreenOnlyWallpaperAlpha:(double)arg1;
-(long long)variant;
-(void)setVariant:(long long)arg1;

@end

