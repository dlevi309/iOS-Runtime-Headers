/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class UIView, CAMSnapshotView;

@interface CFXViewfinderFlipTransition : NSObject {

	UIView* _viewfinderView;
	CAMSnapshotView* __frontSnapshotView;
	CAMSnapshotView* __backSnapshotView;
	CAMSnapshotView* __targetSnapshotView;
	unsigned long long __currentAnimationID;

}

@property (assign,nonatomic,__weak) UIView * viewfinderView;                                                     //@synthesize viewfinderView=_viewfinderView - In the implementation block
@property (setter=_setFrontSnapshotView:,nonatomic,retain) CAMSnapshotView * _frontSnapshotView;                 //@synthesize _frontSnapshotView=__frontSnapshotView - In the implementation block
@property (setter=_setBackSnapshotView:,nonatomic,retain) CAMSnapshotView * _backSnapshotView;                   //@synthesize _backSnapshotView=__backSnapshotView - In the implementation block
@property (setter=_setTargetSnapshotView:,nonatomic,retain) CAMSnapshotView * _targetSnapshotView;               //@synthesize _targetSnapshotView=__targetSnapshotView - In the implementation block
@property (assign,setter=_setCurrentAnimationID:,nonatomic) unsigned long long _currentAnimationID;              //@synthesize _currentAnimationID=__currentAnimationID - In the implementation block
-(unsigned long long)_currentAnimationID;
-(CAMSnapshotView *)_frontSnapshotView;
-(CAMSnapshotView *)_backSnapshotView;
-(CAMSnapshotView *)_targetSnapshotView;
-(void)_setFrontSnapshotView:(id)arg1 ;
-(void)_getCurrentRadians:(out double*)arg1 targetRadians:(out double*)arg2 forDirection:(long long)arg3 withAnimation:(id)arg4 onFrontSnapshotLayer:(id)arg5 ;
-(double)_frontSnapshotTargetRadiansForDirection:(long long)arg1 fromRadians:(double)arg2 ;
-(id)_snapshotFlipAnimationFromValue:(double)arg1 toValue:(double)arg2 ;
-(double)_backSnapshotTargetRadiansForDirection:(long long)arg1 frontSnapshotRadians:(double)arg2 ;
-(void)_setCurrentAnimationID:(unsigned long long)arg1 ;
-(void)_setBackSnapshotView:(id)arg1 ;
-(void)_cleanupFromFlipTransition;
-(void)_setTargetSnapshotView:(id)arg1 ;
-(void)performFlipTransitionWithDirection:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)completeTransitionToLivePreviewWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIView *)viewfinderView;
-(void)setViewfinderView:(UIView *)arg1 ;
-(id)initWithViewfinderView:(id)arg1 ;
@end

