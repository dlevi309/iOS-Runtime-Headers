/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)viewfinderView;
-(void)_setTargetSnapshotView:(id)arg1 ;
-(id)_snapshotFlipAnimationFromValue:(double)arg1 toValue:(double)arg2 ;
-(void)_cleanupFromFlipTransition;
-(CAMSnapshotView *)_frontSnapshotView;
-(double)_backSnapshotTargetRadiansForDirection:(long long)arg1 frontSnapshotRadians:(double)arg2 ;
-(unsigned long long)_currentAnimationID;
-(void)_setBackSnapshotView:(id)arg1 ;
-(void)_setFrontSnapshotView:(id)arg1 ;
-(CAMSnapshotView *)_targetSnapshotView;
-(void)performFlipTransitionWithDirection:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getCurrentRadians:(out double*)arg1 targetRadians:(out double*)arg2 forDirection:(long long)arg3 withAnimation:(id)arg4 onFrontSnapshotLayer:(id)arg5 ;
-(void)_setCurrentAnimationID:(unsigned long long)arg1 ;
-(CAMSnapshotView *)_backSnapshotView;
-(double)_frontSnapshotTargetRadiansForDirection:(long long)arg1 fromRadians:(double)arg2 ;
-(void)completeTransitionToLivePreviewWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setViewfinderView:(UIView *)arg1 ;
-(id)initWithViewfinderView:(id)arg1 ;
@end

