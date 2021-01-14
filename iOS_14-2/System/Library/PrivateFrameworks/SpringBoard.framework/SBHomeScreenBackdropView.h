/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBHomeScreenBackdropViewBase.h>

@class MTMaterialView, UIImage, UIImageView, UIViewFloatAnimatableProperty;

@interface SBHomeScreenBackdropView : SBHomeScreenBackdropViewBase {

	MTMaterialView* _materialView;
	UIImage* _blurredContentSnapshotImage;
	UIImageView* _blurredContentSnapshotImageView;
	unsigned long long _materialViewAnimationCount;
	BOOL _waitingForBackdropViewToRender;
	UIViewFloatAnimatableProperty* _backdropFloatAnimatableProperty;

}
-(void)cancelInProcessAnimations;
-(BOOL)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateBackdropViewIfNeeded;
-(id)initWithFrame:(CGRect)arg1 materialRecipe:(long long)arg2 scaleAdjustment:(/*^block*/id)arg3 ;
-(void)_configureBackdropAnimatableProperty;
-(void)beginRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_resetHomeScreenBlurredContentSnapshotImage;
-(void)endRequiringLiveBackdropViewForReason:(id)arg1 ;
-(id)homeScreenBlurredContentSnapshotImage;
-(void)_setupBackdropViewWithRecipe:(long long)arg1 scaleAdjustment:(/*^block*/id)arg2 ;
-(void)_updateBackdropViewIfNeededInvalidatingSnapshot:(BOOL)arg1 ;
-(void)_invalidateBackdropSnapshot;
-(void)endRequiringBackdropViewForReason:(id)arg1 ;
-(void)beginRequiringBackdropViewForReason:(id)arg1 ;
@end

