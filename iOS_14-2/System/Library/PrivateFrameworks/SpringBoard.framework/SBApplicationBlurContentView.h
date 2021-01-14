/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class SBDeviceApplicationSceneHandle, NSMutableDictionary, UIView, SBSceneViewAppIconView, SBApplicationBlurSnapshotGenerationContainerView;

@interface SBApplicationBlurContentView : UIView {

	SBDeviceApplicationSceneHandle* _sceneHandle;
	unsigned long long _state;
	NSMutableDictionary* _mapStateToCompletionBlocks;
	CGSize _targetViewOriginalSize;
	UIView* _targetViewToBlur;
	UIView* _unblurredRealSnapshotView;
	UIView* _unblurredCopySnapshotView;
	UIView* _liveBlurView;
	SBSceneViewAppIconView* _iconView;
	UIView* _blurredSnapshotView;
	SBApplicationBlurSnapshotGenerationContainerView* _snapshotGenerationContainerView;
	UIView* _blurView;

}

@property (nonatomic,readonly) SBSceneViewAppIconView * iconView;              //@synthesize iconView=_iconView - In the implementation block
-(void)_setState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SBSceneViewAppIconView *)iconView;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 deviceApplicationSceneHandle:(id)arg2 targetViewToBlur:(id)arg3 ;
-(void)generateBlurredSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)generateAndAnimateToBlurredSnapshotWithAnimationFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateToBlurredSnapshotWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_iconViewForApplication;
-(void)_fireCompletionBlocksForState:(unsigned long long)arg1 ;
-(void)_addCompletionBlock:(/*^block*/id)arg1 forState:(unsigned long long)arg2 ;
-(void)_doBlurGenerationWithCompletion:(/*^block*/id)arg1 ;
-(void)_doAnimationToBlurredSnapshotWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

